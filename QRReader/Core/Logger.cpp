#include "../Tool/Tools.h"
#include "Logger.h"


using
System::String,
System::DateTime,
System::IO::Directory;

Core::Logger::Logger()
{
    write(Tool::Caption::Info, "Aplicação iniciada");
}

Core::Logger::~Logger()
{
    delete directory;
    delete dateFormat;
    delete dateTimeFormat;
}

void Core::Logger::write(String^ caption, String^ log)
{
    while (isBusy) continue;
    isBusy = true;

    auto file{ String::Format("\\{0}-{1}.txt", "QReader", DateTime::Now.ToString(dateFormat)) };

    auto message{ String::Format("{0} [{1}] {2}\n", DateTime::Now.ToString(dateTimeFormat), caption, log) };

    createDirectory(directory);

    auto streamWriter = gcnew StreamWriter(directory + file, true);
    streamWriter->WriteLineAsync(message);
    streamWriter->Close();

    OnWriteChanged(caption, log);

    delete log;
    delete file;
    delete caption;
    delete message;
    delete streamWriter;
    isBusy = false;
}

void Core::Logger::createDirectory(String^ path)
{
    if (Directory::Exists(path)) return;

    Directory::CreateDirectory(path);

    write(Tool::Caption::Info, String::Format("Uma nova pasta foi criada em {0}", path));
}
