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
	private: User^ user;
	private: Client^ client;

	public:
		MainForm(User^ _user) : user(_user), client(gcnew Client()) {

			InitializeComponent();

			NameLbl->Text = gcnew String("Name: " + user->name);
			EmailLbl->Text = gcnew String("E-mail: " + user->email);
			IdentityLbl->Text = gcnew String("Id: " + user->id.ToString());
		}

	protected:
		~MainForm() {
			delete user;
			delete client;
			if (components) { delete components; }
		}

	private: System::Windows::Forms::Label^ TaskLbl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ description;
	private: System::Windows::Forms::Label^ NameLbl;
	private: System::Windows::Forms::Button^ NewTaskBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Label^ IdentityLbl;
	private: System::Windows::Forms::TextBox^ TaskNameEntry;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ EmailLbl;
	private: System::Windows::Forms::DataGridView^ DataGridCollection;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   this->NameLbl = (gcnew System::Windows::Forms::Label());
			   this->NewTaskBtn = (gcnew System::Windows::Forms::Button());
			   this->ExitBtn = (gcnew System::Windows::Forms::Button());
			   this->IdentityLbl = (gcnew System::Windows::Forms::Label());
			   this->TaskNameEntry = (gcnew System::Windows::Forms::TextBox());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->EmailLbl = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->DataGridCollection = (gcnew System::Windows::Forms::DataGridView());
			   this->title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->TaskLbl = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel2->SuspendLayout();
			   this->tableLayoutPanel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridCollection))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // NameLbl
			   // 
			   this->NameLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->NameLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NameLbl->Location = System::Drawing::Point(3, 0);
			   this->NameLbl->Name = L"NameLbl";
			   this->NameLbl->Size = System::Drawing::Size(282, 51);
			   this->NameLbl->TabIndex = 0;
			   this->NameLbl->Text = L"Name: ";
			   this->NameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // NewTaskBtn
			   // 
			   this->NewTaskBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->NewTaskBtn->BackColor = System::Drawing::Color::DarkGreen;
			   this->NewTaskBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NewTaskBtn->ForeColor = System::Drawing::SystemColors::Window;
			   this->NewTaskBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewTaskBtn.Image")));
			   this->NewTaskBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->NewTaskBtn->Location = System::Drawing::Point(401, 3);
			   this->NewTaskBtn->Name = L"NewTaskBtn";
			   this->NewTaskBtn->Size = System::Drawing::Size(70, 32);
			   this->NewTaskBtn->TabIndex = 1;
			   this->NewTaskBtn->Text = L"New";
			   this->NewTaskBtn->UseVisualStyleBackColor = false;
			   this->NewTaskBtn->Click += gcnew System::EventHandler(this, &MainForm::NewTaskCommand);
			   // 
			   // ExitBtn
			   // 
			   this->ExitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->ExitBtn->BackColor = System::Drawing::Color::DarkSalmon;
			   this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ExitBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->ExitBtn->Location = System::Drawing::Point(291, 54);
			   this->ExitBtn->Name = L"ExitBtn";
			   this->ExitBtn->Size = System::Drawing::Size(74, 40);
			   this->ExitBtn->TabIndex = 2;
			   this->ExitBtn->Text = L"Logout";
			   this->ExitBtn->UseVisualStyleBackColor = false;
			   this->ExitBtn->Click += gcnew System::EventHandler(this, &MainForm::ExitCommand);
			   // 
			   // IdentityLbl
			   // 
			   this->IdentityLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->IdentityLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->IdentityLbl->Location = System::Drawing::Point(291, 0);
			   this->IdentityLbl->Name = L"IdentityLbl";
			   this->IdentityLbl->Size = System::Drawing::Size(74, 51);
			   this->IdentityLbl->TabIndex = 1;
			   this->IdentityLbl->Text = L"Id: ";
			   this->IdentityLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // TaskNameEntry
			   // 
			   this->TaskNameEntry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->TaskNameEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TaskNameEntry->Location = System::Drawing::Point(3, 3);
			   this->TaskNameEntry->Name = L"TaskNameEntry";
			   this->TaskNameEntry->Size = System::Drawing::Size(392, 31);
			   this->TaskNameEntry->TabIndex = 5;
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel2->AutoSize = true;
			   this->tableLayoutPanel2->ColumnCount = 2;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   84.13223F)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   15.86777F)));
			   this->tableLayoutPanel2->Controls->Add(this->NewTaskBtn, 1, 0);
			   this->tableLayoutPanel2->Controls->Add(this->TaskNameEntry, 0, 0);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(12, 461);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 1;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(474, 38);
			   this->tableLayoutPanel2->TabIndex = 6;
			   // 
			   // tableLayoutPanel3
			   // 
			   this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel3->ColumnCount = 2;
			   this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   78.47025F)));
			   this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   21.52975F)));
			   this->tableLayoutPanel3->Controls->Add(this->EmailLbl, 0, 1);
			   this->tableLayoutPanel3->Controls->Add(this->ExitBtn, 1, 1);
			   this->tableLayoutPanel3->Controls->Add(this->NameLbl, 0, 0);
			   this->tableLayoutPanel3->Controls->Add(this->IdentityLbl, 1, 0);
			   this->tableLayoutPanel3->Location = System::Drawing::Point(118, 12);
			   this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			   this->tableLayoutPanel3->RowCount = 2;
			   this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51)));
			   this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49)));
			   this->tableLayoutPanel3->Size = System::Drawing::Size(368, 100);
			   this->tableLayoutPanel3->TabIndex = 7;
			   // 
			   // EmailLbl
			   // 
			   this->EmailLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->EmailLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->EmailLbl->Location = System::Drawing::Point(3, 51);
			   this->EmailLbl->Name = L"EmailLbl";
			   this->EmailLbl->Size = System::Drawing::Size(282, 49);
			   this->EmailLbl->TabIndex = 3;
			   this->EmailLbl->Text = L"E-mail: ";
			   this->EmailLbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(12, 12);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(100, 100);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 8;
			   this->pictureBox1->TabStop = false;
			   // 
			   // DataGridCollection
			   // 
			   this->DataGridCollection->AllowUserToAddRows = false;
			   this->DataGridCollection->AllowUserToDeleteRows = false;
			   this->DataGridCollection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->DataGridCollection->BackgroundColor = System::Drawing::Color::LightSeaGreen;
			   this->DataGridCollection->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->DataGridCollection->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->title,
					   this->description
			   });
			   dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			   dataGridViewCellStyle1->BackColor = System::Drawing::Color::WhiteSmoke;
			   dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			   dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::MediumSeaGreen;
			   dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			   dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			   this->DataGridCollection->DefaultCellStyle = dataGridViewCellStyle1;
			   this->DataGridCollection->GridColor = System::Drawing::Color::Silver;
			   this->DataGridCollection->Location = System::Drawing::Point(12, 191);
			   this->DataGridCollection->Name = L"DataGridCollection";
			   this->DataGridCollection->ReadOnly = true;
			   dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::InfoText;
			   dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			   this->DataGridCollection->RowsDefaultCellStyle = dataGridViewCellStyle2;
			   this->DataGridCollection->Size = System::Drawing::Size(474, 252);
			   this->DataGridCollection->TabIndex = 9;
			   // 
			   // title
			   // 
			   this->title->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			   this->title->HeaderText = L"title";
			   this->title->Name = L"title";
			   this->title->ReadOnly = true;
			   // 
			   // description
			   // 
			   this->description->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			   this->description->HeaderText = L"description";
			   this->description->Name = L"description";
			   this->description->ReadOnly = true;
			   // 
			   // TaskLbl
			   // 
			   this->TaskLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->TaskLbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TaskLbl->Location = System::Drawing::Point(12, 135);
			   this->TaskLbl->Name = L"TaskLbl";
			   this->TaskLbl->Size = System::Drawing::Size(471, 50);
			   this->TaskLbl->TabIndex = 11;
			   this->TaskLbl->Text = L"Tasks";
			   this->TaskLbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->ClientSize = System::Drawing::Size(498, 511);
			   this->Controls->Add(this->TaskLbl);
			   this->Controls->Add(this->DataGridCollection);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->tableLayoutPanel3);
			   this->Controls->Add(this->tableLayoutPanel2);
			   this->Name = L"MainForm";
			   this->Text = L"Dashboard";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   this->tableLayoutPanel2->ResumeLayout(false);
			   this->tableLayoutPanel2->PerformLayout();
			   this->tableLayoutPanel3->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridCollection))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void NewTaskCommand(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "INSERT INTO @table VALUES ('@title', '@description', '@user_id')";

		query = query->Replace("@table", "tasks");
		query = query->Replace("@title", this->TaskNameEntry->Text);
		query = query->Replace("@description", " ");
		query = query->Replace("@user_id", user->id.ToString());

		client->Write(query);
		client->Close();

		auto row = DataGridCollection->Rows->Add();
		DataGridCollection->Rows[row]->Cells[0]->Value = TaskNameEntry->Text;
		DataGridCollection->Rows[row]->Cells[1]->Value = " ";

		TaskNameEntry->Text = "";
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ query{ "SELECT * FROM @table WHERE user_id=@user_id" };

		query = query->Replace("@table", "tasks");
		query = query->Replace("@user_id", user->id.ToString());

		auto payload = client->Ready(query);

		while (payload->Read()) {
			auto row = DataGridCollection->Rows->Add();
			DataGridCollection->Rows[row]->Cells[0]->Value = payload->GetString(1);
			DataGridCollection->Rows[row]->Cells[1]->Value = payload->GetString(2);
		}
		client->Close();
	}

	private: System::Void ExitCommand(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	};
}
