#pragma once
#include "Core/Logger.h"
#include "Views/MainView.h"

using
System::String,
System::DateTime,
System::Threading::Thread,
System::Collections::ArrayList,
System::Threading::ParameterizedThreadStart,
System::Windows::Forms::MessageBox,
System::Windows::Forms::MessageBoxIcon,
System::Windows::Forms::MessageBoxButtons;

static ref class App {
public:
    static Core::Logger^ Log;
    static ArrayList^ Threads;
    static Views::MainView^ Main;
    static void Start();
    static void Close();
    static void StartCommReaderThread();

    static void Show(String^ caption, String^ message);
};
