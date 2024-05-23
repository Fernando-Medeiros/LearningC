#pragma once
#include"Context.h"
#include"Entity.h"

namespace TodoWF {

	using namespace Context;
	using namespace Entity;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		User^ user{};

		LoginForm(void) {
			InitializeComponent();
			user = gcnew User();
		}

	protected:
		~LoginForm() { if (components) delete components; }

	private: System::Windows::Forms::Label^ EmailLbl;
	private: System::Windows::Forms::Label^ PasswordLbl;
	private: System::Windows::Forms::TextBox^ EmailEntry;
	private: System::Windows::Forms::TextBox^ PasswordEntry;
	private: System::Windows::Forms::Label^ TitleLbl;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ LoginBtn;
	private: System::Windows::Forms::Button^ CancelBtn;
	private: System::Windows::Forms::CheckBox^ RememberCbx;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   this->EmailLbl = (gcnew System::Windows::Forms::Label());
			   this->PasswordLbl = (gcnew System::Windows::Forms::Label());
			   this->EmailEntry = (gcnew System::Windows::Forms::TextBox());
			   this->PasswordEntry = (gcnew System::Windows::Forms::TextBox());
			   this->TitleLbl = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->LoginBtn = (gcnew System::Windows::Forms::Button());
			   this->CancelBtn = (gcnew System::Windows::Forms::Button());
			   this->RememberCbx = (gcnew System::Windows::Forms::CheckBox());
			   this->tableLayoutPanel1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // EmailLbl
			   // 
			   this->EmailLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->EmailLbl->AutoSize = true;
			   this->EmailLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->EmailLbl->Location = System::Drawing::Point(12, 68);
			   this->EmailLbl->Name = L"EmailLbl";
			   this->EmailLbl->Size = System::Drawing::Size(45, 16);
			   this->EmailLbl->TabIndex = 0;
			   this->EmailLbl->Text = L"E-mail";
			   // 
			   // PasswordLbl
			   // 
			   this->PasswordLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->PasswordLbl->AutoSize = true;
			   this->PasswordLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PasswordLbl->Location = System::Drawing::Point(12, 120);
			   this->PasswordLbl->Name = L"PasswordLbl";
			   this->PasswordLbl->Size = System::Drawing::Size(67, 16);
			   this->PasswordLbl->TabIndex = 1;
			   this->PasswordLbl->Text = L"Password";
			   // 
			   // EmailEntry
			   // 
			   this->EmailEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->EmailEntry->Location = System::Drawing::Point(15, 87);
			   this->EmailEntry->Name = L"EmailEntry";
			   this->EmailEntry->Size = System::Drawing::Size(419, 20);
			   this->EmailEntry->TabIndex = 2;
			   // 
			   // PasswordEntry
			   // 
			   this->PasswordEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->PasswordEntry->Location = System::Drawing::Point(15, 139);
			   this->PasswordEntry->Name = L"PasswordEntry";
			   this->PasswordEntry->PasswordChar = '*';
			   this->PasswordEntry->Size = System::Drawing::Size(419, 20);
			   this->PasswordEntry->TabIndex = 3;
			   // 
			   // TitleLbl
			   // 
			   this->TitleLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->TitleLbl->AutoSize = true;
			   this->TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TitleLbl->Location = System::Drawing::Point(11, 23);
			   this->TitleLbl->Name = L"TitleLbl";
			   this->TitleLbl->Size = System::Drawing::Size(65, 25);
			   this->TitleLbl->TabIndex = 4;
			   this->TitleLbl->Text = L"Login";
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel1->ColumnCount = 2;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel1->Controls->Add(this->LoginBtn, 0, 0);
			   this->tableLayoutPanel1->Controls->Add(this->CancelBtn, 1, 0);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(15, 208);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 1;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(419, 41);
			   this->tableLayoutPanel1->TabIndex = 5;
			   // 
			   // LoginBtn
			   // 
			   this->LoginBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->LoginBtn->BackColor = System::Drawing::Color::DarkSeaGreen;
			   this->LoginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LoginBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LoginBtn->Location = System::Drawing::Point(3, 3);
			   this->LoginBtn->Name = L"LoginBtn";
			   this->LoginBtn->Size = System::Drawing::Size(203, 35);
			   this->LoginBtn->TabIndex = 0;
			   this->LoginBtn->Text = L"Login";
			   this->LoginBtn->UseVisualStyleBackColor = false;
			   this->LoginBtn->Click += gcnew System::EventHandler(this, &LoginForm::LoginBtnCommand);
			   // 
			   // CancelBtn
			   // 
			   this->CancelBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->CancelBtn->BackColor = System::Drawing::Color::DarkSalmon;
			   this->CancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CancelBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->CancelBtn->Location = System::Drawing::Point(212, 3);
			   this->CancelBtn->Name = L"CancelBtn";
			   this->CancelBtn->Size = System::Drawing::Size(204, 35);
			   this->CancelBtn->TabIndex = 1;
			   this->CancelBtn->Text = L"Cancel";
			   this->CancelBtn->UseVisualStyleBackColor = false;
			   this->CancelBtn->Click += gcnew System::EventHandler(this, &LoginForm::CancelBtnCommand);
			   // 
			   // RememberCbx
			   // 
			   this->RememberCbx->AutoSize = true;
			   this->RememberCbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->RememberCbx->Location = System::Drawing::Point(15, 176);
			   this->RememberCbx->Name = L"RememberCbx";
			   this->RememberCbx->Size = System::Drawing::Size(94, 20);
			   this->RememberCbx->TabIndex = 6;
			   this->RememberCbx->Text = L"Remember";
			   this->RememberCbx->UseVisualStyleBackColor = true;
			   // 
			   // LoginView
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSize = true;
			   this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(459, 261);
			   this->Controls->Add(this->RememberCbx);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Controls->Add(this->TitleLbl);
			   this->Controls->Add(this->PasswordEntry);
			   this->Controls->Add(this->EmailEntry);
			   this->Controls->Add(this->PasswordLbl);
			   this->Controls->Add(this->EmailLbl);
			   this->Name = L"LoginView";
			   this->Text = L"Login";
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void LoginBtnCommand(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM @table WHERE email='@email' AND password='@password'";
		query = query->Replace("@table", "users");
		query = query->Replace("@email", this->EmailEntry->Text);
		query = query->Replace("@password", this->PasswordEntry->Text);

		Client^ client = gcnew Client();
		client->Write(query);
		client->Close();

		auto payload = client->Ready(query);

		if (payload->Read()) {
			user->id = payload->GetInt32(0);
			user->name = payload->GetString(1);
			user->email = payload->GetString(2);
			user->password = payload->GetString(3);
			client->Close();
			Close();
		}
		client->Close();
	}

	private: System::Void CancelBtnCommand(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	};
}
