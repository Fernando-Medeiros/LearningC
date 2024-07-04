#pragma once
#include "../Tool/Tools.h"

namespace Core {
    using
	  System::String,
	  System::IO::StreamWriter;

    public ref class Logger
    {
    public:
	  static bool isBusy{ false };
	  String^ directory{ "C:\\solution\\log" };
	  String^ dateFormat{ "dd-MM-yyyy" };
	  String^ dateTimeFormat{ "dd-MM-yyyy HH:mm:ss" };
	  Logger();
	  ~Logger();
	  void write(String^ caption, String^ log);
	  void createDirectory(String^ path);

	  static event Tool::MessageChanged^ OnWriteChanged;
    };
}

