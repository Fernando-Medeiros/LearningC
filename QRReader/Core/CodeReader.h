#pragma once
#include "../Tool/Tools.h"
#include "CodeReaderMetaData.h"

namespace Core {
    using
	  System::Enum,
	  System::String,
	  System::Object,
	  System::IO::Ports::SerialPort,
	  System::Windows::Forms::Form,
	  System::Runtime::InteropServices::Marshal;

    public ref class CodeReader {
    private:
	  CodeReaderMetaData^ meta;
    public:
	  CodeReader(CodeReaderMetaData^ meta);
	  ~CodeReader();
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

	  static event Tool::BufferChanged^ OnBytesChanged;
	  static event Tool::MessageChanged^ OnMessageChanged;

	  static void routine(Object^ sender);
    };
}
