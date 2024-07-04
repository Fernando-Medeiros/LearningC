#include "App.h"
#include "Core/CommReader.h"
#include "Core/Logger.h"
#include "Tool/Tools.h"
#include "Views/MainView.h"

void App::Start()
{
    Threads = gcnew ArrayList(0);
    Log = gcnew Core::Logger();
    Main = gcnew Views::MainView();

    Core::CommReader::OnMessageChanged += gcnew Tool::MessageChanged(App::Show);

    StartCommReaderThread();
}

void App::Close()
{
    Log->write(Tool::Caption::Info, "Aplicação finalizada \n");

    delete Log;
    delete Main;
    delete Threads;
}

void App::Show(String^ caption, String^ message)
{
    Log->write(caption, message);

    MessageBox::Show(message, caption, MessageBoxButtons::OK);
}

void App::StartCommReaderThread()
{
    auto thread = gcnew Thread(gcnew ParameterizedThreadStart(&Core::CommReader::routine));
    thread->IsBackground = true;
    thread->Start({});

    Threads->Add(thread);

    Log->write(Tool::Caption::Info, "O thread do leitor foi iniciado");
}
