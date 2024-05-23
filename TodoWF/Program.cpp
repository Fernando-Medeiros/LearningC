#include "LoginForm.h"
#include "TaskForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TodoWF::LoginForm loginForm;
	TodoWF::TaskForm taskForm;

	loginForm.ShowDialog();

	if (loginForm.user->id == 0) {
		MessageBox::Show("N�o houve autentica��o", "Main", MessageBoxButtons::OK);
	}
	else {
		taskForm.user = loginForm.user;
		Application::Run(% taskForm);
	}
}