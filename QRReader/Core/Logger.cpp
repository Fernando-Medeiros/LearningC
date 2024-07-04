#include "Logger.h"

using
System::String,
System::DateTime,
System::IO::Directory;

Core::Logger::Logger() { }

Core::Logger::~Logger()
{
    delete directory;
    delete onlyDateFormat;
    delete dateTimeFormat;
}

void Core::Logger::write(String^ caption, String^ log)
{
    if (log == nullptr) return;

    auto file{ String::Format("\\{0}-{1}.txt", "QReader", DateTime::Now.ToString(onlyDateFormat)) };

    auto message{ String::Format("{0} [{1}] {2}\n", DateTime::Now.ToString(dateTimeFormat), caption, log) };

    tryCreateDirectory(directory);

    tryWriteLine(
	  gcnew StreamWriter(directory + file, true),
	  gcnew array<String^>{ message });

    OnWriteChanged(caption, log);

    delete log;
    delete file;
    delete caption;
    delete message;
}

void Core::Logger::tryWriteLine(StreamWriter^ streamWriter, array<String^>^ payload)
{
    if (streamWriter == nullptr || payload->Length == 0) return;

    for each (auto content in payload)
    {
	  streamWriter->WriteLine(content);
    }
    streamWriter->Close();

    delete payload;
    delete streamWriter;
}

void Core::Logger::tryCreateDirectory(String^ path)
{
    if (Directory::Exists(path)) return;

    Directory::CreateDirectory(path);
}
