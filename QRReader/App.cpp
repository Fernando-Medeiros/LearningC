#include "App.h"
#include "Core/CommReader.h"
#include "Core/Logger.h"
#include "Tool/Tools.h"
#include "Views/MainView.h"

void App::Start()
{
    Log = gcnew Core::Logger();

    Log->write(Tool::Caption::Info, "Aplica��o iniciada");

    Main = gcnew Views::MainView();

    Core::CommReader::OnMessageChanged += gcnew Tool::MessageChanged(App::ShowMessageBox);
}

void App::Close() {
    Log->write(Tool::Caption::Info, "Aplica��o finalizada \n");
    delete Log;
    delete Main;
}

void App::ShowMessageBox(String^ caption, String^ message)
{
    Log->write(caption, message);
    MessageBox::Show(message, caption, MessageBoxButtons::OK);
}