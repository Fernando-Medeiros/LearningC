#include "App.h"
#include "Views/MainView.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();

    App::Initialize();
    App::ConfigureViews();
    App::InitializeListeners();
    App::InitializeCodeReaderThread();

    Application::Run(
	  (Views::MainView^)App::Service->Get(Views::MainView::typeid));

    App::Close();
}