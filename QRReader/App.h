#pragma once
#include "Core/Logger.h"
#include "Views/MainView.h"

using
System::String,
System::Delegate,
System::DateTime,
System::Threading::Thread,
System::Windows::Forms::Form,
System::Collections::ArrayList,
System::Threading::ParameterizedThreadStart,
System::Windows::Forms::MessageBox,
System::Windows::Forms::MessageBoxIcon,
System::Windows::Forms::MessageBoxButtons;

ref class App {
public:
    static Core::Logger^ Log;
    static ArrayList^ Threads;
    static Views::MainView^ Main;
    static void Close();
    static void Initialize();
    static void InitializeListeners();
    static void InitializeCodeReaderThread();
    static void Show(String^ caption, String^ message);
    static void Dispatch(Form^ form, Delegate^ callback, cli::array<Object^>^ args);
};
