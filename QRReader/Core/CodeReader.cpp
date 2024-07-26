#include "../Commons/Common.h"
#include "CodeReader.h"
#include "CodeReaderMetaData.h"
#include <consoleapi.h>
#include <cstdlib>
#include <cstring>
#include <fileapi.h>
#include <handleapi.h>
#include <malloc.h>
#include <minwindef.h>
#include <WinBase.h>
#include <winnt.h>

Core::CodeReader::CodeReader(CodeReaderMetaData^ meta) : meta{ meta } {};

Core::CodeReader::~CodeReader()
{
    close();
}

void Core::CodeReader::beginRunning()
{
    meta->running = true;
}

void Core::CodeReader::stopRunning()
{
    meta->running = false;
}

bool Core::CodeReader::keepRunning()
{
    return meta->running;
}

System::String^ Core::CodeReader::getPort()
{
    return meta->port;
}

System::String^ Core::CodeReader::getBuffer()
{
    auto keys = getWideChar(meta->buffer);

    keys[meta->bytesRead] = '\0';

    auto serial = gcnew String(keys);

    free(keys);
    return serial;
}

wchar_t* Core::CodeReader::getWideChar(const char* chars)
{
    const size_t size = strlen(chars) + 1;

    auto com = new wchar_t[size];

    mbstowcs(com, chars, size);

    return com;
}

char* Core::CodeReader::getPortToChar()
{
    auto _port = meta->port;
    auto _buffer = (char*)malloc(sizeof(char) * 255);
    _buffer = (char*)(void*)Marshal::StringToHGlobalAnsi(_port);

    return _buffer;
}

void Core::CodeReader::close()
{
    free(meta->buffer);
    CloseHandle(meta->handle);
}

bool Core::CodeReader::readFile()
{
    return ReadFile(meta->handle, meta->buffer, meta->maxSizeBuffer, &meta->bytesRead, NULL);
}

bool Core::CodeReader::getCommState()
{
    return GetCommState(meta->handle, &meta->params);
}

bool Core::CodeReader::setCommTimeouts()
{
    return SetCommTimeouts(meta->handle, &meta->timeouts);
}

bool Core::CodeReader::setCommConsoleMode()
{
    return SetConsoleMode(meta->handle, meta->mode);
}

bool Core::CodeReader::escapeCommFunction()
{
    return EscapeCommFunction(meta->handle, CLRDTR);
}

bool Core::CodeReader::isBytesRead()
{
    return meta->bytesRead > 0 && meta->bytesRead <= meta->maxBytesRead ? true : false;
}

bool Core::CodeReader::isInvalidHandleValue()
{
    return meta->handle == INVALID_HANDLE_VALUE;
}

bool Core::CodeReader::firstPortChanged()
{
    auto ports = SerialPort::GetPortNames();

    if (ports->Length > 0) {
	  meta->port = "\\\\.\\" + ports[ports->Length - 1];
	  return true;
    }
    return false;
}

bool Core::CodeReader::setCommHandle()
{
    auto  com = getWideChar(getPortToChar());

    meta->handle = CreateFile(com,
	  GENERIC_READ | GENERIC_WRITE,
	  0,
	  0,
	  OPEN_EXISTING,
	  FILE_FLAG_NO_BUFFERING,
	  0);

    return isInvalidHandleValue();
}


void Core::CodeReader::routine(Object^ sender)
{
    DCB params{};
    DWORD mode{};
    DWORD bytesRead{};
    DWORD maxBytes{ 100 };
    COMMTIMEOUTS timeouts{};
    unsigned int maxBuffer{ 1000 };

    params.DCBlength = sizeof(params);

    mode &= ~ENABLE_PROCESSED_INPUT;

    timeouts.ReadIntervalTimeout = 1;
    timeouts.ReadTotalTimeoutConstant = 1;
    timeouts.WriteTotalTimeoutConstant = 1;
    timeouts.ReadTotalTimeoutMultiplier = 1;
    timeouts.WriteTotalTimeoutMultiplier = 1;

    auto meta = gcnew CodeReaderMetaData(timeouts, params, mode, bytesRead, maxBytes, maxBuffer);
    auto reader = gcnew CodeReader(meta);

    if (reader->firstPortChanged()) {

	  reader->OnMessageChanged(Common::Caption::Info, "Leitor conectado com a porta: " + reader->getPort());

	  if (reader->setCommHandle()) {
		reader->OnMessageChanged(Common::Caption::Error, "Leitor desconectado");
		reader->close();
		return;
	  }
	  if (reader->setCommTimeouts() == false) {
		reader->OnMessageChanged(Common::Caption::Error, "Leitor com erro no timeout");
		reader->close();
		return;
	  }

	  reader->setCommConsoleMode();
	  reader->escapeCommFunction();
	  reader->getCommState();
	  reader->beginRunning();

	  while (reader->keepRunning())
	  {
		if (reader->isInvalidHandleValue()) {
		    reader->OnMessageChanged(Common::Caption::Error, "Leitor desconectado");
		    break;
		}
		if (reader->getCommState() == false) {
		    reader->OnMessageChanged(Common::Caption::Error, "Leitor desconhecido");
		    break;
		}
		if (reader->readFile() == false) {
		    reader->OnMessageChanged(Common::Caption::Error, "Leitor desconectado");
		    break;
		}
		if (reader->isBytesRead()) {
		    reader->OnMessageChanged(Common::Caption::Input, String::Format("Bytes lidos: {0}", meta->bytesRead));
		    reader->OnBytesChanged(reader->getBuffer());
		}
	  }
	  reader->OnMessageChanged(Common::Caption::Info, "Leitor finalizado");
	  reader->stopRunning();
	  reader->close();
    }
}