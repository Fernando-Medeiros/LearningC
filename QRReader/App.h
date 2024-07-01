#pragma once
#include "Core/CommReader.h"
#include "Views/MainView.h"

using
System::String,
System::Windows::Forms::MessageBox,
System::Windows::Forms::MessageBoxIcon,
System::Windows::Forms::MessageBoxButtons;

static ref class App {
public:
    static Views::MainView^ Main;

    static void Initialize()
    {
	  Main = gcnew Views::MainView();

	  Core::CommReader::OnMessageRead += gcnew Core::CommReaderChanged(App::ShowMessageBox);
    }

    static void ShowMessageBox(String^ message)
    {
	  MessageBox::Show(message, "", MessageBoxButtons::OK);
    }
};

