#include "../App.h"
#include "../Core/Logger.h"
#include "../Tool/Tools.h"
#include "MainView.h"
#include <basetsd.h>

using
System::Void,
System::Action,
System::String;

Views::MainView::MainView()
{
    InitializeComponent();
}

Views::MainView::~MainView()
{
    if (components)
    {
	  delete components;
    }
}

void Views::MainView::CodePushBack(String^ message) {
    if (App::Main->InvokeRequired == false) {
	  App::Main->CodigosListView->Items->Add(message);
	  App::Main->QuantidadeCodigosLabel->Text = App::Main->CodigosListView->Items->Count.ToString();
	  App::Log->write(Tool::Caption::Input, message);
	  return;
    }

    App::Dispatch(
	  App::Main,
	  gcnew Tool::BufferChanged(App::Main->CodePushBack),
	  gcnew cli::array<Object^>{message});
}

void Views::MainView::LogPushBack(String^ caption, String^ message) {
    if (App::Main->InvokeRequired == false) {
	  App::Main->LogTextBox->AppendText(String::Format("[{0}] {1}\n", caption, message));
	  return;
    }

    App::Dispatch(
	  App::Main,
	  gcnew Tool::MessageChanged(App::Main->LogPushBack),
	  gcnew cli::array<Object^>{caption, message});
}



void Views::MainView::FecharLoteButtonClicked(Object^ sender, EventArgs^ e)
{
    if (QuantidadeLotesBox->SelectedItem == nullptr) {
	  App::Show(Tool::Caption::Error, "Escolha a quantidade de lotes a ser fechado!");
	  return;
    }

    auto quantidadeLote{ INT32::Parse(QuantidadeLotesBox->SelectedItem->ToString()) };

    if (CodigosListView->Items->Count < quantidadeLote) {
	  App::Show(Tool::Caption::Error, "Não existem códigos o suficiente para fechar o lote com " + quantidadeLote);
	  return;
    }
}
