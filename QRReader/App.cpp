#include "App.h"
#include "Commons/Common.h"
#include "Core/CodeReader.h"
#include "Core/Logger.h"
#include "Core/ServiceHandler.h"
#include "Views/MainView.h"

void App::Initialize()
{
    Log = gcnew Core::Logger();
    Threads = gcnew ArrayList(0);
    Service = gcnew Core::ServiceHandler();
}

void App::ConfigureViews()
{
    Service->AddSingleton(gcnew Views::MainView());
}

void App::InitializeListeners()
{
    Core::Logger::OnWriteChanged += gcnew Common::MessageChanged(Views::MainView::LogPushBack);
    Core::CodeReader::OnBytesChanged += gcnew Common::BufferChanged(Views::MainView::CodePushBack);
    Core::CodeReader::OnMessageChanged += gcnew Common::MessageChanged(App::Show);
}

void App::Close()
{
    Log->write(Common::Caption::Info, "Aplicação finalizada \n");
    Thread::Sleep(3);

    delete Log;
    delete Threads;
    delete Service;
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