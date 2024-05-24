#pragma once
#include "Context.h";
#include "Entity.h";

namespace TodoWF {
	using namespace Context;
	using namespace Entity;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		MainForm(User^ _user) {
			InitializeComponent();
			user = _user;
			NameLbl->Text->Concat(user->name);
			IdentityLbl->Text->Concat(user->id.ToString());
		}

	protected:
		~MainForm() {
			delete user;
			if (components) { delete components; }
		}

	private: System::Windows::Forms::Label^ NameLbl;
	private: System::Windows::Forms::Button^ NewTaskBtn;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Label^ IdentityLbl;
	private: System::Windows::Forms::TextBox^ TaskNameEntry;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->NameLbl = (gcnew System::Windows::Forms::Label());
			   this->NewTaskBtn = (gcnew System::Windows::Forms::Button());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->ExitBtn = (gcnew System::Windows::Forms::Button());
			   this->IdentityLbl = (gcnew System::Windows::Forms::Label());
			   this->TaskNameEntry = (gcnew System::Windows::Forms::TextBox());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tableLayoutPanel1->SuspendLayout();
			   this->tableLayoutPanel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // NameLbl
			   // 
			   this->NameLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->NameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NameLbl->Location = System::Drawing::Point(3, 0);
			   this->NameLbl->Name = L"NameLbl";
			   this->NameLbl->Size = System::Drawing::Size(505, 38);
			   this->NameLbl->TabIndex = 0;
			   this->NameLbl->Text = L"Name: ";
			   this->NameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // NewTaskBtn
			   // 
			   this->NewTaskBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->NewTaskBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->NewTaskBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NewTaskBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->NewTaskBtn->Location = System::Drawing::Point(505, 3);
			   this->NewTaskBtn->Name = L"NewTaskBtn";
			   this->NewTaskBtn->Size = System::Drawing::Size(97, 32);
			   this->NewTaskBtn->TabIndex = 1;
			   this->NewTaskBtn->Text = L"New";
			   this->NewTaskBtn->UseVisualStyleBackColor = false;
			   this->NewTaskBtn->Click += gcnew System::EventHandler(this, &MainForm::NewTaskCommand);
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel1->AutoSize = true;
			   this->tableLayoutPanel1->ColumnCount = 2;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   84.58646F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   15.41353F)));
			   this->tableLayoutPanel1->Controls->Add(this->ExitBtn, 1, 1);
			   this->tableLayoutPanel1->Controls->Add(this->IdentityLbl, 1, 0);
			   this->tableLayoutPanel1->Controls->Add(this->NameLbl, 0, 0);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 2;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(605, 84);
			   this->tableLayoutPanel1->TabIndex = 2;
			   // 
			   // ExitBtn
			   // 
			   this->ExitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ExitBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->ExitBtn->Location = System::Drawing::Point(514, 41);
			   this->ExitBtn->Name = L"ExitBtn";
			   this->ExitBtn->Size = System::Drawing::Size(88, 40);
			   this->ExitBtn->TabIndex = 2;
			   this->ExitBtn->Text = L"Exit";
			   this->ExitBtn->UseVisualStyleBackColor = false;
			   this->ExitBtn->Click += gcnew System::EventHandler(this, &MainForm::ExitCommand);
			   // 
			   // IdentityLbl
			   // 
			   this->IdentityLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->IdentityLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->IdentityLbl->Location = System::Drawing::Point(514, 0);
			   this->IdentityLbl->Name = L"IdentityLbl";
			   this->IdentityLbl->Size = System::Drawing::Size(88, 38);
			   this->IdentityLbl->TabIndex = 1;
			   this->IdentityLbl->Text = L"Id: ";
			   this->IdentityLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // TaskNameEntry
			   // 
			   this->TaskNameEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->TaskNameEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TaskNameEntry->Location = System::Drawing::Point(3, 3);
			   this->TaskNameEntry->Name = L"TaskNameEntry";
			   this->TaskNameEntry->Size = System::Drawing::Size(488, 29);
			   this->TaskNameEntry->TabIndex = 5;
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel2->AutoSize = true;
			   this->tableLayoutPanel2->ColumnCount = 3;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   98.21429F)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   1.785714F)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   102)));
			   this->tableLayoutPanel2->Controls->Add(this->TaskNameEntry, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->NewTaskBtn, 2, 0);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(12, 710);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 1;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(605, 38);
			   this->tableLayoutPanel2->TabIndex = 6;
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(629, 760);
			   this->Controls->Add(this->tableLayoutPanel2);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Name = L"MainForm";
			   this->Text = L"Dashboard";
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->tableLayoutPanel2->ResumeLayout(false);
			   this->tableLayoutPanel2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void NewTaskCommand(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "INSERT INTO @table VALUES ('@title', '@description', '@user_id')";

		query = query->Replace("@table", "tasks");
		query = query->Replace("@title", this->TaskNameEntry->Text);
		query = query->Replace("@description", "");
		query = query->Replace("@user_id", user->id.ToString());

		Client^ client = gcnew Client();
		client->Write(query);
		client->Close();
	}

	private: System::Void ExitCommand(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
