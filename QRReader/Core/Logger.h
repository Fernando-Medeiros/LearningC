#pragma once
#include "../Tool/Tools.h"

namespace Core {
    using
	  System::String,
	  System::IO::StreamWriter;

    public ref class Logger
    {
    private:
	  String^ directory{ "C:\\solution\\log" };
	  String^ onlyDateFormat{ "dd-MM-yyyy" };
	  String^ dateTimeFormat{ "dd-MM-yyyy HH:mm:ss" };
    public:
	  Logger();
	  ~Logger();
	  void write(String^ caption, String^ log);
	  void tryCreateDirectory(String^ path);
	  void tryWriteLine(StreamWriter^ streamWriter, array<String^>^ payload);

	  static event Tool::MessageChanged^ OnWriteChanged;
    };
}

