#include "../Views/MainView.h"
#include "Reader.h"

Core::Reader::Reader()
{
	mode &= ~ENABLE_PROCESSED_INPUT;

	params.DCBlength = sizeof(params);

	buffer = (char*)malloc(sizeof(char) * SIZE_BUFFER);
}

Core::Reader::~Reader()
{
	close();
}

void Core::Reader::beginRunning()
{
	running = true;
}

void Core::Reader::stopRunning()
{
	running = false;
}

bool Core::Reader::keepRunning()
{
	return running;
}

System::String^ Core::Reader::getCurrentPort()
{
	return gcnew String(port.data());
}

System::String^ Core::Reader::getBuffer() // FIX THIS <<<<<<<
{
	String^ serial;
	for (size_t x = 0; x < 13; x++)
	{
		serial += x;
	}

	return serial;
}

char* Core::Reader::portToChar()
{
	auto _port = gcnew String(port.data());
	auto _buffer = (char*)malloc(sizeof(char) * 255);
	_buffer = (char*)(void*)Marshal::StringToHGlobalAnsi(_port);
	return _buffer;
}

void Core::Reader::close()
{
	CloseHandle(handle);
}

bool Core::Reader::readFile()
{
	return ReadFile(handle, buffer, SIZE_BUFFER, &bytesRead, NULL);
}

bool Core::Reader::getCommState()
{
	return GetCommState(handle, &params);
}

bool Core::Reader::setCommTimeouts()
{
	COMMTIMEOUTS timeouts;
	timeouts.ReadIntervalTimeout = 1;
	timeouts.ReadTotalTimeoutMultiplier = 1;
	timeouts.ReadTotalTimeoutConstant = 1;
	timeouts.WriteTotalTimeoutMultiplier = 1;
	timeouts.WriteTotalTimeoutConstant = 1;
	return SetCommTimeouts(handle, &timeouts);
}

bool Core::Reader::setCommConsoleMode()
{
	return SetConsoleMode(handle, mode);
}

bool Core::Reader::escapeCommFunction()
{
	return EscapeCommFunction(handle, CLRDTR);
}

bool Core::Reader::isBytesRead()
{
	if (bytesRead <= 0) return false;
	if (bytesRead >= 13) return true;

	for (DWORD i = 0; i < bytesRead; i++) // FIX THIS <<<<<<<
	{
		if ((buffer[i] < 30) &&
			(buffer[i] != '\r') &&
			(buffer[i] != '\0'))
		{
			return true;
		}
	}
	return false;
}

bool Core::Reader::isInvalidHandleValue()
{
	return handle == INVALID_HANDLE_VALUE;
}

bool Core::Reader::changeFirstPort()
{
	auto ports = SerialPort::GetPortNames();

	if (ports->Length > 0) {
		port = "\\\\.\\";

		for each (auto c in ports[0]->ToCharArray()) {
			port += c;
		}
		return true;
	}
	return false;
}

bool Core::Reader::setCommHandle()
{
	auto chars = portToChar();
	auto size = strlen(chars) + 1;
	auto com = new wchar_t[size];

	mbstowcs(com, chars, size);

	handle = CreateFile(com,
		GENERIC_READ | GENERIC_WRITE,
		0, 0,
		OPEN_EXISTING, FILE_FLAG_NO_BUFFERING,
		0);

	return isInvalidHandleValue();
}


void Core::Reader::start(Object^ form)
{
	auto mainForm = (Views::MainView^)form;

	auto reader{ new Core::Reader() };

	if (reader->changeFirstPort()) {

		if (reader->setCommHandle()) {
			MessageBox::Show("Leitor Desconectado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			reader->close();
			return;
		}
		if (reader->setCommTimeouts() == false) {
			MessageBox::Show("Leitor com erro no timeout", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
				MessageBox::Show("Leitor Desconectado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
			if (reader->getCommState() == false) {
				MessageBox::Show("Leitor Desconhecido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
			if (reader->readFile() == false) {
				MessageBox::Show("Leitor Desconectado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
			if (reader->isBytesRead()) {
				mainForm->CodigosListPushBack(reader->getBuffer());
			}
		}
		reader->stopRunning();
		reader->close();
	}
}