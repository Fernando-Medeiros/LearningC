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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	public:
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


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(177, 371);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(299, 39);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// CancelBtn
			// 
			this->CancelBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CancelBtn->BackColor = System::Drawing::Color::DarkSalmon;
			this->CancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CancelBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->CancelBtn->Location = System::Drawing::Point(152, 3);
			this->CancelBtn->Name = L"CancelBtn";
			this->CancelBtn->Size = System::Drawing::Size(144, 33);
			this->CancelBtn->TabIndex = 1;
			this->CancelBtn->Text = L"Cancel";
			this->CancelBtn->UseVisualStyleBackColor = false;
			this->CancelBtn->Click += gcnew System::EventHandler(this, &RegisterForm::CancelBtnCommand);
			// 
			// RegisterBtn
			// 
			this->RegisterBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RegisterBtn->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->RegisterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RegisterBtn->Location = System::Drawing::Point(3, 3);
			this->RegisterBtn->Name = L"RegisterBtn";
			this->RegisterBtn->Size = System::Drawing::Size(143, 33);
			this->RegisterBtn->TabIndex = 0;
			this->RegisterBtn->Text = L"Register";
			this->RegisterBtn->UseVisualStyleBackColor = false;
			this->RegisterBtn->Click += gcnew System::EventHandler(this, &RegisterForm::RegisterBtnCommand);
			// 
			// TitleLbl
			// 
			this->TitleLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleLbl->Location = System::Drawing::Point(171, 13);
			this->TitleLbl->Name = L"TitleLbl";
			this->TitleLbl->Size = System::Drawing::Size(305, 66);
			this->TitleLbl->TabIndex = 1;
			this->TitleLbl->Text = L"Register";
			this->TitleLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NameLbl
			// 
			this->NameLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->NameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLbl->Location = System::Drawing::Point(177, 79);
			this->NameLbl->Name = L"NameLbl";
			this->NameLbl->Size = System::Drawing::Size(299, 24);
			this->NameLbl->TabIndex = 2;
			this->NameLbl->Text = L"Name";
			// 
			// NameEntry
			// 
			this->NameEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NameEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameEntry->Location = System::Drawing::Point(3, 3);
			this->NameEntry->Name = L"NameEntry";
			this->NameEntry->Size = System::Drawing::Size(256, 26);
			this->NameEntry->TabIndex = 3;
			// 
			// EmailEntry
			// 
			this->EmailEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EmailEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailEntry->Location = System::Drawing::Point(3, 3);
			this->EmailEntry->Name = L"EmailEntry";
			this->EmailEntry->Size = System::Drawing::Size(256, 26);
			this->EmailEntry->TabIndex = 5;
			// 
			// EmailLbl
			// 
			this->EmailLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->EmailLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailLbl->Location = System::Drawing::Point(177, 144);
			this->EmailLbl->Name = L"EmailLbl";
			this->EmailLbl->Size = System::Drawing::Size(299, 24);
			this->EmailLbl->TabIndex = 4;
			this->EmailLbl->Text = L"E-mail";
			// 
			// PasswordEntry
			// 
			this->PasswordEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PasswordEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordEntry->Location = System::Drawing::Point(3, 3);
			this->PasswordEntry->Name = L"PasswordEntry";
			this->PasswordEntry->PasswordChar = '*';
			this->PasswordEntry->Size = System::Drawing::Size(256, 26);
			this->PasswordEntry->TabIndex = 7;
			// 
			// PasswordLbl
			// 
			this->PasswordLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->PasswordLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLbl->Location = System::Drawing::Point(177, 208);
			this->PasswordLbl->Name = L"PasswordLbl";
			this->PasswordLbl->Size = System::Drawing::Size(299, 24);
			this->PasswordLbl->TabIndex = 6;
			this->PasswordLbl->Text = L"Password";
			// 
			// ConfirmPasswordEntry
			// 
			this->ConfirmPasswordEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ConfirmPasswordEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConfirmPasswordEntry->Location = System::Drawing::Point(3, 3);
			this->ConfirmPasswordEntry->Name = L"ConfirmPasswordEntry";
			this->ConfirmPasswordEntry->PasswordChar = '*';
			this->ConfirmPasswordEntry->Size = System::Drawing::Size(256, 26);
			this->ConfirmPasswordEntry->TabIndex = 9;
			// 
			// ConfirmPasswordLbl
			// 
			this->ConfirmPasswordLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->ConfirmPasswordLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConfirmPasswordLbl->Location = System::Drawing::Point(177, 273);
			this->ConfirmPasswordLbl->Name = L"ConfirmPasswordLbl";
			this->ConfirmPasswordLbl->Size = System::Drawing::Size(299, 24);
			this->ConfirmPasswordLbl->TabIndex = 8;
			this->ConfirmPasswordLbl->Text = L"Confirm Password";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				87.8514F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.14859F)));
			this->tableLayoutPanel2->Controls->Add(this->pictureBox1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->ConfirmPasswordEntry, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(177, 297);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(299, 31);
			this->tableLayoutPanel2->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(265, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				87.8514F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.14859F)));
			this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->NameEntry, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(177, 103);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(299, 31);
			this->tableLayoutPanel3->TabIndex = 12;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(265, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				87.8514F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.14859F)));
			this->tableLayoutPanel4->Controls->Add(this->pictureBox3, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->EmailEntry, 0, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(177, 171);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(299, 31);
			this->tableLayoutPanel4->TabIndex = 12;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(265, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				87.8514F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.14859F)));
			this->tableLayoutPanel5->Controls->Add(this->pictureBox4, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->PasswordEntry, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(177, 234);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(299, 31);
			this->tableLayoutPanel5->TabIndex = 12;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(265, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(31, 25);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(12, 13);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(142, 397);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(501, 422);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->ConfirmPasswordLbl);
			this->Controls->Add(this->PasswordLbl);
			this->Controls->Add(this->EmailLbl);
			this->Controls->Add(this->NameLbl);
			this->Controls->Add(this->TitleLbl);
			this->Controls->Add(this->tableLayoutPanel1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"RegisterForm";
			this->Text = L"Register";
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
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

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
	
};
}
