#pragma once
#include "Core/Logger.h"
#include "Core/ServiceHandler.h"

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
    static ArrayList^ Threads;
    static Core::Logger^ Log;
    static Core::ServiceHandler^ Service;

    static void Close();
    static void Initialize();
    static void ConfigureViews();
    static void InitializeListeners();
    static void InitializeCodeReaderThread();
    static void Show(String^ caption, String^ message);
    static void Dispatch(Form^ form, Delegate^ callback, cli::array<Object^>^ args);
};
