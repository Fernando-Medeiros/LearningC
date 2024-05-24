#pragma once
#include "Context.h";

namespace TodoWF {

	using namespace Context;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		String^ email{};
		String^ password{};
		RegisterForm(void) { InitializeComponent(); }

	protected:
		~RegisterForm() { if (components) { delete components; } }
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ CancelBtn;
	private: System::Windows::Forms::Button^ RegisterBtn;
	private: System::Windows::Forms::Label^ TitleLbl;
	private: System::Windows::Forms::Label^ NameLbl;
	private: System::Windows::Forms::TextBox^ NameEntry;
	private: System::Windows::Forms::TextBox^ EmailEntry;
	private: System::Windows::Forms::Label^ EmailLbl;
	private: System::Windows::Forms::TextBox^ PasswordEntry;
	private: System::Windows::Forms::Label^ PasswordLbl;
	private: System::Windows::Forms::TextBox^ ConfirmPasswordEntry;
	private: System::Windows::Forms::Label^ ConfirmPasswordLbl;
	private: System::Windows::Forms::LinkLabel^ GoToLogin;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CancelBtn = (gcnew System::Windows::Forms::Button());
			this->RegisterBtn = (gcnew System::Windows::Forms::Button());
			this->TitleLbl = (gcnew System::Windows::Forms::Label());
			this->NameLbl = (gcnew System::Windows::Forms::Label());
			this->NameEntry = (gcnew System::Windows::Forms::TextBox());
			this->EmailEntry = (gcnew System::Windows::Forms::TextBox());
			this->EmailLbl = (gcnew System::Windows::Forms::Label());
			this->PasswordEntry = (gcnew System::Windows::Forms::TextBox());
			this->PasswordLbl = (gcnew System::Windows::Forms::Label());
			this->ConfirmPasswordEntry = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->GoToLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
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
			this->tableLayoutPanel1->Controls->Add(this->CancelBtn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->RegisterBtn, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(51, 319);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(392, 39);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// CancelBtn
			// 
			this->CancelBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CancelBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CancelBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->CancelBtn->Location = System::Drawing::Point(199, 3);
			this->CancelBtn->Name = L"CancelBtn";
			this->CancelBtn->Size = System::Drawing::Size(190, 33);
			this->CancelBtn->TabIndex = 1;
			this->CancelBtn->Text = L"Cancel";
			this->CancelBtn->UseVisualStyleBackColor = false;
			this->CancelBtn->Click += gcnew System::EventHandler(this, &RegisterForm::CancelBtnCommand);
			// 
			// RegisterBtn
			// 
			this->RegisterBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RegisterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->RegisterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RegisterBtn->Location = System::Drawing::Point(3, 3);
			this->RegisterBtn->Name = L"RegisterBtn";
			this->RegisterBtn->Size = System::Drawing::Size(190, 33);
			this->RegisterBtn->TabIndex = 0;
			this->RegisterBtn->Text = L"Register";
			this->RegisterBtn->UseVisualStyleBackColor = false;
			this->RegisterBtn->Click += gcnew System::EventHandler(this, &RegisterForm::RegisterBtnCommand);
			// 
			// TitleLbl
			// 
			this->TitleLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleLbl->Location = System::Drawing::Point(12, 13);
			this->TitleLbl->Name = L"TitleLbl";
			this->TitleLbl->Size = System::Drawing::Size(476, 38);
			this->TitleLbl->TabIndex = 1;
			this->TitleLbl->Text = L"Register";
			this->TitleLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// NameLbl
			// 
			this->NameLbl->AutoSize = true;
			this->NameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLbl->Location = System::Drawing::Point(48, 75);
			this->NameLbl->Name = L"NameLbl";
			this->NameLbl->Size = System::Drawing::Size(44, 16);
			this->NameLbl->TabIndex = 2;
			this->NameLbl->Text = L"Name";
			// 
			// NameEntry
			// 
			this->NameEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->NameEntry->Location = System::Drawing::Point(51, 94);
			this->NameEntry->Name = L"NameEntry";
			this->NameEntry->Size = System::Drawing::Size(392, 20);
			this->NameEntry->TabIndex = 3;
			this->NameEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EmailEntry
			// 
			this->EmailEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->EmailEntry->Location = System::Drawing::Point(51, 144);
			this->EmailEntry->Name = L"EmailEntry";
			this->EmailEntry->Size = System::Drawing::Size(390, 20);
			this->EmailEntry->TabIndex = 5;
			this->EmailEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EmailLbl
			// 
			this->EmailLbl->AutoSize = true;
			this->EmailLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailLbl->Location = System::Drawing::Point(48, 125);
			this->EmailLbl->Name = L"EmailLbl";
			this->EmailLbl->Size = System::Drawing::Size(45, 16);
			this->EmailLbl->TabIndex = 4;
			this->EmailLbl->Text = L"E-mail";
			// 
			// PasswordEntry
			// 
			this->PasswordEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->PasswordEntry->Location = System::Drawing::Point(51, 196);
			this->PasswordEntry->Name = L"PasswordEntry";
			this->PasswordEntry->PasswordChar = '*';
			this->PasswordEntry->Size = System::Drawing::Size(390, 20);
			this->PasswordEntry->TabIndex = 7;
			this->PasswordEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PasswordLbl
			// 
			this->PasswordLbl->AutoSize = true;
			this->PasswordLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLbl->Location = System::Drawing::Point(48, 177);
			this->PasswordLbl->Name = L"PasswordLbl";
			this->PasswordLbl->Size = System::Drawing::Size(67, 16);
			this->PasswordLbl->TabIndex = 6;
			this->PasswordLbl->Text = L"Password";
			// 
			// ConfirmPasswordEntry
			// 
			this->ConfirmPasswordEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->ConfirmPasswordEntry->Location = System::Drawing::Point(51, 245);
			this->ConfirmPasswordEntry->Name = L"ConfirmPasswordEntry";
			this->ConfirmPasswordEntry->PasswordChar = '*';
			this->ConfirmPasswordEntry->Size = System::Drawing::Size(390, 20);
			this->ConfirmPasswordEntry->TabIndex = 9;
			this->ConfirmPasswordEntry->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ConfirmPasswordLbl
			// 
			this->ConfirmPasswordLbl->AutoSize = true;
			this->ConfirmPasswordLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConfirmPasswordLbl->Location = System::Drawing::Point(48, 226);
			this->ConfirmPasswordLbl->Name = L"ConfirmPasswordLbl";
			this->ConfirmPasswordLbl->Size = System::Drawing::Size(115, 16);
			this->ConfirmPasswordLbl->TabIndex = 8;
			this->ConfirmPasswordLbl->Text = L"Confirm Password";
			// 
			// GoToLogin
			// 
			this->GoToLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->GoToLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GoToLogin->Location = System::Drawing::Point(250, 284);
			this->GoToLogin->Name = L"GoToLogin";
			this->GoToLogin->Size = System::Drawing::Size(193, 23);
			this->GoToLogin->TabIndex = 10;
			this->GoToLogin->TabStop = true;
			this->GoToLogin->Text = L"Login";
			this->GoToLogin->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->GoToLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::GoToLoginCommand);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(500, 370);
			this->Controls->Add(this->GoToLogin);
			this->Controls->Add(this->ConfirmPasswordEntry);
			this->Controls->Add(this->ConfirmPasswordLbl);
			this->Controls->Add(this->PasswordEntry);
			this->Controls->Add(this->PasswordLbl);
			this->Controls->Add(this->EmailEntry);
			this->Controls->Add(this->EmailLbl);
			this->Controls->Add(this->NameEntry);
			this->Controls->Add(this->NameLbl);
			this->Controls->Add(this->TitleLbl);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void CancelBtnCommand(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void RegisterBtnCommand(System::Object^ sender, System::EventArgs^ e) {
		if (NameEntry->Text->Length >= 3 &&
			EmailEntry->Text->Length >= 7 &&
			PasswordEntry->Text->Length >= 8 &&
			PasswordEntry->Text == ConfirmPasswordEntry->Text) {

			String^ query = "INSERT INTO @table VALUES ('@name', '@email', '@password')";

			query = query->Replace("@table", "users");
			query = query->Replace("@name", this->NameEntry->Text);
			query = query->Replace("@email", this->EmailEntry->Text);
			query = query->Replace("@password", this->PasswordEntry->Text);

			Client^ client = gcnew Client();
			client->Write(query);
			client->Close();
			email = EmailEntry->Text;
			password = PasswordEntry->Text;
			Close();
		}
		else {
			MessageBox::Show("Dados invalidos!", "Register", MessageBoxButtons::OK);
		}
	}

	private: System::Void GoToLoginCommand(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		Close();
	}
	};
}
