#include "App.h"
#include "Core/CodeReader.h"
#include "Core/Logger.h"
#include "Tool/Tools.h"
#include "Views/MainView.h"

void App::Initialize()
{
    Log = gcnew Core::Logger();
    Threads = gcnew ArrayList(0);
    Main = gcnew Views::MainView();
}

void App::InitializeListeners()
{
    Core::Logger::OnWriteChanged += gcnew Tool::MessageChanged(Views::MainView::LogPushBack);
    Core::CodeReader::OnBytesChanged += gcnew Tool::BufferChanged(Views::MainView::CodePushBack);
    Core::CodeReader::OnMessageChanged += gcnew Tool::MessageChanged(App::Show);
}

void App::Close()
{
    Log->write(Tool::Caption::Info, "Aplicação finalizada \n");
    Thread::Sleep(3);

    delete Log;
    delete Main;
    delete Threads;
}

void App::Show(String^ caption, String^ message)
{
    Log->write(caption, message);

    MessageBox::Show(message, caption, MessageBoxButtons::OK);
}

void App::Dispatch(Form^ form, Delegate^ callback, cli::array<Object^>^ args)
{
    while (form->InvokeRequired == false) Thread::Sleep(1);

    if (form->InvokeRequired) {
	  form->Invoke(callback, args);
    }
}

void App::InitializeCodeReaderThread()
{
    auto thread = gcnew Thread(gcnew ParameterizedThreadStart(&Core::CodeReader::routine));
    thread->IsBackground = true;
    thread->Start({});

    Threads->Add(thread);
}