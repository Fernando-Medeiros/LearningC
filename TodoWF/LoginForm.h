#pragma once
#include"Context.h"
#include"Entity.h"
#include "RegisterForm.h"

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
	private: System::Windows::Forms::LinkLabel^ GoToRegister;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			   this->EmailLbl = (gcnew System::Windows::Forms::Label());
			   this->PasswordLbl = (gcnew System::Windows::Forms::Label());
			   this->EmailEntry = (gcnew System::Windows::Forms::TextBox());
			   this->PasswordEntry = (gcnew System::Windows::Forms::TextBox());
			   this->TitleLbl = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->LoginBtn = (gcnew System::Windows::Forms::Button());
			   this->CancelBtn = (gcnew System::Windows::Forms::Button());
			   this->RememberCbx = (gcnew System::Windows::Forms::CheckBox());
			   this->GoToRegister = (gcnew System::Windows::Forms::LinkLabel());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->tableLayoutPanel1->SuspendLayout();
			   this->tableLayoutPanel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->tableLayoutPanel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->tableLayoutPanel4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // EmailLbl
			   // 
			   this->EmailLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->EmailLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->EmailLbl->Location = System::Drawing::Point(174, 94);
			   this->EmailLbl->Name = L"EmailLbl";
			   this->EmailLbl->Size = System::Drawing::Size(306, 16);
			   this->EmailLbl->TabIndex = 0;
			   this->EmailLbl->Text = L"E-mail";
			   // 
			   // PasswordLbl
			   // 
			   this->PasswordLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->PasswordLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PasswordLbl->Location = System::Drawing::Point(174, 171);
			   this->PasswordLbl->Name = L"PasswordLbl";
			   this->PasswordLbl->Size = System::Drawing::Size(306, 18);
			   this->PasswordLbl->TabIndex = 1;
			   this->PasswordLbl->Text = L"Password";
			   // 
			   // EmailEntry
			   // 
			   this->EmailEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->EmailEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->EmailEntry->Location = System::Drawing::Point(3, 3);
			   this->EmailEntry->Name = L"EmailEntry";
			   this->EmailEntry->Size = System::Drawing::Size(262, 26);
			   this->EmailEntry->TabIndex = 1;
			   // 
			   // PasswordEntry
			   // 
			   this->PasswordEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->PasswordEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PasswordEntry->Location = System::Drawing::Point(3, 3);
			   this->PasswordEntry->Name = L"PasswordEntry";
			   this->PasswordEntry->PasswordChar = '*';
			   this->PasswordEntry->Size = System::Drawing::Size(263, 26);
			   this->PasswordEntry->TabIndex = 2;
			   // 
			   // TitleLbl
			   // 
			   this->TitleLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->TitleLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TitleLbl->Location = System::Drawing::Point(174, 9);
			   this->TitleLbl->Name = L"TitleLbl";
			   this->TitleLbl->Size = System::Drawing::Size(309, 70);
			   this->TitleLbl->TabIndex = 4;
			   this->TitleLbl->Text = L"Login";
			   this->TitleLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			   this->tableLayoutPanel1->Location = System::Drawing::Point(174, 361);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 1;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(309, 41);
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
			   this->LoginBtn->Size = System::Drawing::Size(148, 35);
			   this->LoginBtn->TabIndex = 5;
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
			   this->CancelBtn->Location = System::Drawing::Point(157, 3);
			   this->CancelBtn->Name = L"CancelBtn";
			   this->CancelBtn->Size = System::Drawing::Size(149, 35);
			   this->CancelBtn->TabIndex = 6;
			   this->CancelBtn->Text = L"Cancel";
			   this->CancelBtn->UseVisualStyleBackColor = false;
			   this->CancelBtn->Click += gcnew System::EventHandler(this, &LoginForm::CancelBtnCommand);
			   // 
			   // RememberCbx
			   // 
			   this->RememberCbx->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left));
			   this->RememberCbx->AutoSize = true;
			   this->RememberCbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->RememberCbx->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RememberCbx->Location = System::Drawing::Point(3, 3);
			   this->RememberCbx->Name = L"RememberCbx";
			   this->RememberCbx->Size = System::Drawing::Size(101, 22);
			   this->RememberCbx->TabIndex = 3;
			   this->RememberCbx->Text = L"Remember";
			   this->RememberCbx->UseVisualStyleBackColor = true;
			   // 
			   // GoToRegister
			   // 
			   this->GoToRegister->ActiveLinkColor = System::Drawing::Color::CornflowerBlue;
			   this->GoToRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->GoToRegister->AutoSize = true;
			   this->GoToRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->GoToRegister->LinkColor = System::Drawing::Color::White;
			   this->GoToRegister->Location = System::Drawing::Point(156, 4);
			   this->GoToRegister->Name = L"GoToRegister";
			   this->GoToRegister->Size = System::Drawing::Size(147, 20);
			   this->GoToRegister->TabIndex = 4;
			   this->GoToRegister->TabStop = true;
			   this->GoToRegister->Text = L"Register";
			   this->GoToRegister->TextAlign = System::Drawing::ContentAlignment::TopRight;
			   this->GoToRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::GoToRegisterCommand);
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel2->ColumnCount = 2;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel2->Controls->Add(this->GoToRegister, 1, 0);
			   this->tableLayoutPanel2->Controls->Add(this->RememberCbx, 0, 0);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(174, 259);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 1;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(306, 28);
			   this->tableLayoutPanel2->TabIndex = 12;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left));
			   this->pictureBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(13, 12);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(142, 396);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 13;
			   this->pictureBox1->TabStop = false;
			   // 
			   // tableLayoutPanel3
			   // 
			   this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel3->ColumnCount = 2;
			   this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   88.16568F)));
			   this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   11.83432F)));
			   this->tableLayoutPanel3->Controls->Add(this->PasswordEntry, 0, 0);
			   this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 1, 0);
			   this->tableLayoutPanel3->Location = System::Drawing::Point(174, 191);
			   this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			   this->tableLayoutPanel3->RowCount = 1;
			   this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			   this->tableLayoutPanel3->Size = System::Drawing::Size(306, 31);
			   this->tableLayoutPanel3->TabIndex = 14;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(272, 3);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(31, 25);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 4;
			   this->pictureBox2->TabStop = false;
			   // 
			   // tableLayoutPanel4
			   // 
			   this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel4->ColumnCount = 2;
			   this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   87.68328F)));
			   this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   12.31672F)));
			   this->tableLayoutPanel4->Controls->Add(this->EmailEntry, 0, 0);
			   this->tableLayoutPanel4->Controls->Add(this->pictureBox3, 1, 0);
			   this->tableLayoutPanel4->Location = System::Drawing::Point(174, 116);
			   this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			   this->tableLayoutPanel4->RowCount = 1;
			   this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel4->Size = System::Drawing::Size(306, 30);
			   this->tableLayoutPanel4->TabIndex = 15;
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(271, 3);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(32, 24);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 3;
			   this->pictureBox3->TabStop = false;
			   // 
			   // LoginForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSize = true;
			   this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->ClientSize = System::Drawing::Size(508, 414);
			   this->Controls->Add(this->tableLayoutPanel4);
			   this->Controls->Add(this->tableLayoutPanel3);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->tableLayoutPanel2);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Controls->Add(this->TitleLbl);
			   this->Controls->Add(this->PasswordLbl);
			   this->Controls->Add(this->EmailLbl);
			   this->Name = L"LoginForm";
			   this->Text = L"Login";
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->tableLayoutPanel2->ResumeLayout(false);
			   this->tableLayoutPanel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->tableLayoutPanel3->ResumeLayout(false);
			   this->tableLayoutPanel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->tableLayoutPanel4->ResumeLayout(false);
			   this->tableLayoutPanel4->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);

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

	private: System::Void GoToRegisterCommand(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		TodoWF::RegisterForm registerForm;
		Hide();

		registerForm.ShowDialog();

		EmailEntry->Text = registerForm.email;
		PasswordEntry->Text = registerForm.password;
		Show();
	}

	};
}
