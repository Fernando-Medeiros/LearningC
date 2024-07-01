#include "CommReader.h"

Core::CommReader::CommReader(CommReaderMetaData^ meta) : meta{ meta } {};

Core::CommReader::~CommReader()
{
    close();
}

void Core::CommReader::beginRunning()
{
    meta->running = true;
}

void Core::CommReader::stopRunning()
{
    meta->running = false;
}

bool Core::CommReader::keepRunning()
{
    return meta->running;
}

System::String^ Core::CommReader::getPort()
{
    return meta->port;
}

System::String^ Core::CommReader::getBuffer()
{
    auto keys = getWideChar(meta->buffer);

    keys[meta->bytesRead] = '\0';

    auto serial = gcnew String(keys);

    free(keys);
    return serial;
}

wchar_t* Core::CommReader::getWideChar(const char* chars)
{
    const size_t size = strlen(chars) + 1;

    auto com = new wchar_t[size];

    mbstowcs(com, chars, size);

    return com;
}

char* Core::CommReader::getPortToChar()
{
    auto _port = meta->port;
    auto _buffer = (char*)malloc(sizeof(char) * 255);
    _buffer = (char*)(void*)Marshal::StringToHGlobalAnsi(_port);

    return _buffer;
}

void Core::CommReader::close()
{
    free(meta->buffer);
    CloseHandle(meta->handle);
}

bool Core::CommReader::readFile()
{
    return ReadFile(meta->handle, meta->buffer, meta->maxSizeBuffer, &meta->bytesRead, NULL);
}

bool Core::CommReader::getCommState()
{
    return GetCommState(meta->handle, &meta->params);
}

bool Core::CommReader::setCommTimeouts()
{
    return SetCommTimeouts(meta->handle, &meta->timeouts);
}

bool Core::CommReader::setCommConsoleMode()
{
    return SetConsoleMode(meta->handle, meta->mode);
}

bool Core::CommReader::escapeCommFunction()
{
    return EscapeCommFunction(meta->handle, CLRDTR);
}

bool Core::CommReader::isBytesRead()
{
    return     meta->bytesRead > 0 && meta->bytesRead <= meta->maxBytesRead ? true : false;
}

bool Core::CommReader::isInvalidHandleValue()
{
    return     meta->handle == INVALID_HANDLE_VALUE;
}

bool Core::CommReader::firstPortChanged()
{
    auto ports = SerialPort::GetPortNames();

    if (ports->Length > 0) {
	  meta->port = "\\\\.\\";

	  for each (auto c in ports[0]->ToCharArray()) {
		meta->port += c;
	  }
	  return true;
    }
    return false;
}

bool Core::CommReader::setCommHandle()
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


void Core::CommReader::routine(Object^ sender)
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

    auto meta = gcnew CommReaderMetaData(timeouts, params, mode, bytesRead, maxBytes, maxBuffer);
    auto reader = gcnew CommReader(meta);

    if (reader->firstPortChanged()) {

	  reader->OnMessageRead("Leitor conectado com a porta: " + reader->getPort());

	  if (reader->setCommHandle()) {
		reader->OnMessageRead("Leitor Desconectado");
		reader->close();
		return;
	  }
	  if (reader->setCommTimeouts() == false) {
		reader->OnMessageRead("Leitor com erro no timeout");
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
		    reader->OnMessageRead("Leitor Desconectado");
		    break;
		}
		if (reader->getCommState() == false) {
		    reader->OnMessageRead("Leitor Desconhecido");
		    break;
		}
		if (reader->readFile() == false) {
		    reader->OnMessageRead("Leitor Desconectado");
		    break;
		}
		if (reader->isBytesRead()) {
		    reader->OnBytesRead(reader->getBuffer());
		}
	  }
	  reader->stopRunning();
	  reader->close();
    }
}