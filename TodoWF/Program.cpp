#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TodoWF::LoginForm loginForm;

	loginForm.ShowDialog();

	if (loginForm.user->id == 0) {
		return;
	}
	else {
		TodoWF::MainForm^ mainForm = gcnew TodoWF::MainForm(loginForm.user);
		Application::Run(mainForm);
	}
}