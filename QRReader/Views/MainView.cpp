#include "../App.h"
#include "MainView.h"

using
System::String,
System::Threading::Thread,
System::Threading::ParameterizedThreadStart;

Views::MainView::MainView()
{
    InitializeComponent();

    Core::CommReader::OnBytesRead += gcnew Core::CommReaderChanged(InvokeCodePushBack);

    auto  commThread = gcnew Thread(gcnew ParameterizedThreadStart(&Core::CommReader::routine));
    commThread->IsBackground = true;
    commThread->Start(this);
}

Views::MainView::~MainView()
{
    if (components)
    {
	  delete components;
    }
}

void Views::MainView::CodePushBack(String^ message) {
    App::Main->CodigosListView->Items->Add(message);
    App::Main->QuantidadeCodigosLabel->Text = App::Main->CodigosListView->Items->Count.ToString();
}

void Views::MainView::InvokeCodePushBack(String^ message) {
    while (App::Main->CodigosListView->InvokeRequired == false) {
	  Sleep(1);
    }

    if (App::Main->CodigosListView->InvokeRequired)
    {
	  App::Main->CodigosListView->Invoke(gcnew Core::CommReaderChanged(&CodePushBack), message);
    }
}
