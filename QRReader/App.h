#pragma once
#include "Core/Logger.h"
#include "Views/MainView.h"

using
System::String,
System::Windows::Forms::MessageBox,
System::Windows::Forms::MessageBoxIcon,
System::Windows::Forms::MessageBoxButtons;

static ref class App {
public:
    static Core::Logger^ Log;
    static Views::MainView^ Main;
    static void Start();
    static void Close();
    static void ShowMessageBox(String^ caption, String^ message);
};
