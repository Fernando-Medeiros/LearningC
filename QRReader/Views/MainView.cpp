#include "../App.h"
#include "../Core/CommReader.h"
#include "../Tool/Tools.h"
#include "MainView.h"
#include <basetsd.h>
#include <synchapi.h>

using
System::Void,
System::String;

Views::MainView::MainView()
{
    InitializeComponent();

    Core::CommReader::OnBytesChanged += gcnew Tool::BufferChanged(InvokeCodePushBack);
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
    App::Log->write(Tool::Caption::Input, message);
}

void Views::MainView::InvokeCodePushBack(String^ message) {
    while (App::Main->CodigosListView->InvokeRequired == false) {
	  Sleep(1);
    }

    if (App::Main->CodigosListView->InvokeRequired)
    {
	  App::Main->CodigosListView->Invoke(gcnew Tool::BufferChanged(&CodePushBack), message);
    }
}

Void Views::MainView::FecharLoteButtonClicked(Object^ sender, EventArgs^ e)
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

    return Void();
}
