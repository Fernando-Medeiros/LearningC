#pragma once
#include "CommReaderMetaData.h"

namespace Core {
    using
	  System::Enum,
	  System::String,
	  System::Object,
	  System::IO::Ports::SerialPort,
	  System::Windows::Forms::Form,
	  System::Runtime::InteropServices::Marshal;

    delegate void CommReaderChanged(String^ message);
    delegate void CommReaderMessageChanged(String^ caption, String^ message);

    public ref class CommReader {
    private:
	  CommReaderMetaData^ meta;
    public:
	  CommReader(CommReaderMetaData^ meta);
	  ~CommReader();
	  void close();
	  bool readFile();
	  bool firstPortChanged();
	  bool getCommState();
	  bool setCommHandle();
	  bool setCommTimeouts();
	  bool setCommConsoleMode();
	  bool escapeCommFunction();
	  bool isBytesRead();
	  bool isInvalidHandleValue();
	  void stopRunning();
	  bool keepRunning();
	  void beginRunning();
	  String^ getPort();
	  String^ getBuffer();
	  char* getPortToChar();
	  wchar_t* getWideChar(const char* chars);

	  static event CommReaderChanged^ OnBytesRead;
	  static event CommReaderChanged^ OnBase64Read;
	  static event CommReaderMessageChanged^ OnMessageRead;

	  static void routine(Object^ sender);
    };
}
