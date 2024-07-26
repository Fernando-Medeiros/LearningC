#include "../App.h"
#include "../Commons/Common.h"
#include "../Core/Logger.h"
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
    auto main = (MainView^)App::Service->Get(MainView::typeid);

    if (main->InvokeRequired == false) {
	  main->CodigosListView->Items->Add(message);
	  main->QuantidadeCodigosLabel->Text = main->CodigosListView->Items->Count.ToString();
	  App::Log->write(Common::Caption::Input, message);
	  return;
    }

    App::Dispatch(
	  main,
	  gcnew Common::BufferChanged(MainView::CodePushBack),
	  gcnew cli::array<Object^>{message});
}

void Views::MainView::LogPushBack(String^ caption, String^ message) {
    auto main = (MainView^)App::Service->Get(MainView::typeid);

    if (main->InvokeRequired == false) {
	  main->LogTextBox->AppendText(String::Format("[{0}] {1}\n", caption, message));
	  return;
    }

    App::Dispatch(
	  main,
	  gcnew Common::MessageChanged(MainView::LogPushBack),
	  gcnew cli::array<Object^>{caption, message});
}



void Views::MainView::FecharLoteButtonClicked(Object^ sender, EventArgs^ e)
{
    if (QuantidadeLotesBox->SelectedItem == nullptr) {
	  App::Show(Common::Caption::Error, "Escolha a quantidade de lotes a ser fechado!");
	  return;
    }

    auto quantidadeLote{ INT32::Parse(QuantidadeLotesBox->SelectedItem->ToString()) };

    if (CodigosListView->Items->Count < quantidadeLote) {
	  App::Show(Common::Caption::Error, "Não existem códigos o suficiente para fechar o lote com " + quantidadeLote);
	  return;
    }
}
