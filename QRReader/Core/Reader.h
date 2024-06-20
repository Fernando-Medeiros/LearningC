#pragma once
#include <string>
#include <wtypes.h>

namespace Core {
	const unsigned int SIZE_BUFFER = 1000;

	using
		std::string,
		System::String,
		System::Object,
		System::Windows::Forms::Form,
		System::IO::Ports::SerialPort,
		System::Windows::Forms::MessageBox,
		System::Windows::Forms::MessageBoxIcon,
		System::Windows::Forms::MessageBoxButtons,
		System::Runtime::InteropServices::Marshal;

	public class Reader {
	private:
		bool running;
		string port;
		HANDLE handle;
		DCB params;
		DWORD mode, bytesRead;
		COMMTIMEOUTS timeouts;
		char* buffer;
	public:
		Reader();
		~Reader();
		void close();
		bool readFile();
		bool getCommState();
		bool setCommHandle();
		bool setCommTimeouts();
		bool setCommConsoleMode();
		bool escapeCommFunction();
	public:
		bool isBytesRead();
		bool isInvalidHandleValue();
	public:
		void stopRunning();
		bool keepRunning();
		void beginRunning();
	public:
		char* portToChar();
		bool changeFirstPort();
		String^ getCurrentPort();
		String^ getBuffer();

		static void start(Object^ form);
	};
}
