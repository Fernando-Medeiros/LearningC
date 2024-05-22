#pragma once

namespace TodoWF {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void) { InitializeComponent(); }

	protected:
		~MyForm() { if (components) { delete components; } }

	private: System::Windows::Forms::Label^ TitleLbl;
	private: System::Windows::Forms::Label^ DescriptionLbl;
	private: System::Windows::Forms::TextBox^ DescriptionEntry;
	private: System::Windows::Forms::TextBox^ TitleEntry;
	private: System::Windows::Forms::Label^ DateLbl;
	private: System::Windows::Forms::DateTimePicker^ DateEntry;
	private: System::Windows::Forms::Button^ AppendTodoBtn;
	private: System::Windows::Forms::CheckBox^ PriorityCheckBox;
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->TitleLbl = (gcnew System::Windows::Forms::Label());
			this->DescriptionLbl = (gcnew System::Windows::Forms::Label());
			this->DescriptionEntry = (gcnew System::Windows::Forms::TextBox());
			this->TitleEntry = (gcnew System::Windows::Forms::TextBox());
			this->DateLbl = (gcnew System::Windows::Forms::Label());
			this->DateEntry = (gcnew System::Windows::Forms::DateTimePicker());
			this->AppendTodoBtn = (gcnew System::Windows::Forms::Button());
			this->PriorityCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// TitleLbl
			// 
			this->TitleLbl->AutoSize = true;
			this->TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleLbl->Location = System::Drawing::Point(29, 18);
			this->TitleLbl->Name = L"TitleLbl";
			this->TitleLbl->Size = System::Drawing::Size(33, 16);
			this->TitleLbl->TabIndex = 0;
			this->TitleLbl->Text = L"Title";
			// 
			// DescriptionLbl
			// 
			this->DescriptionLbl->AutoSize = true;
			this->DescriptionLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescriptionLbl->Location = System::Drawing::Point(29, 120);
			this->DescriptionLbl->Name = L"DescriptionLbl";
			this->DescriptionLbl->Size = System::Drawing::Size(75, 16);
			this->DescriptionLbl->TabIndex = 1;
			this->DescriptionLbl->Text = L"Description";
			// 
			// DescriptionEntry
			// 
			this->DescriptionEntry->Location = System::Drawing::Point(110, 120);
			this->DescriptionEntry->Multiline = true;
			this->DescriptionEntry->Name = L"DescriptionEntry";
			this->DescriptionEntry->Size = System::Drawing::Size(260, 66);
			this->DescriptionEntry->TabIndex = 2;
			// 
			// TitleEntry
			// 
			this->TitleEntry->Location = System::Drawing::Point(110, 18);
			this->TitleEntry->Name = L"TitleEntry";
			this->TitleEntry->Size = System::Drawing::Size(260, 20);
			this->TitleEntry->TabIndex = 3;
			// 
			// DateLbl
			// 
			this->DateLbl->AutoSize = true;
			this->DateLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateLbl->Location = System::Drawing::Point(29, 52);
			this->DateLbl->Name = L"DateLbl";
			this->DateLbl->Size = System::Drawing::Size(36, 16);
			this->DateLbl->TabIndex = 4;
			this->DateLbl->Text = L"Date";
			// 
			// DateEntry
			// 
			this->DateEntry->Location = System::Drawing::Point(110, 52);
			this->DateEntry->MinDate = System::DateTime(2024, 5, 22, 0, 0, 0, 0);
			this->DateEntry->Name = L"DateEntry";
			this->DateEntry->Size = System::Drawing::Size(260, 20);
			this->DateEntry->TabIndex = 5;
			// 
			// AppendTodoBtn
			// 
			this->AppendTodoBtn->BackColor = System::Drawing::Color::ForestGreen;
			this->AppendTodoBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppendTodoBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AppendTodoBtn->Location = System::Drawing::Point(110, 192);
			this->AppendTodoBtn->Name = L"AppendTodoBtn";
			this->AppendTodoBtn->Size = System::Drawing::Size(260, 32);
			this->AppendTodoBtn->TabIndex = 6;
			this->AppendTodoBtn->Text = L"Append";
			this->AppendTodoBtn->UseVisualStyleBackColor = false;
			this->AppendTodoBtn->Click += gcnew System::EventHandler(this, &MyForm::AppendCommand);
			// 
			// PriorityCheckBox
			// 
			this->PriorityCheckBox->AutoSize = true;
			this->PriorityCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PriorityCheckBox->Location = System::Drawing::Point(110, 82);
			this->PriorityCheckBox->Name = L"PriorityCheckBox";
			this->PriorityCheckBox->Size = System::Drawing::Size(67, 20);
			this->PriorityCheckBox->TabIndex = 8;
			this->PriorityCheckBox->Text = L"Priority";
			this->PriorityCheckBox->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(447, 481);
			this->Controls->Add(this->PriorityCheckBox);
			this->Controls->Add(this->AppendTodoBtn);
			this->Controls->Add(this->DateEntry);
			this->Controls->Add(this->DateLbl);
			this->Controls->Add(this->TitleEntry);
			this->Controls->Add(this->DescriptionEntry);
			this->Controls->Add(this->DescriptionLbl);
			this->Controls->Add(this->TitleLbl);
			this->Name = L"MyForm";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AppendCommand(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection context{ "" };

		String^ query = "INSERT INTO TASK VALUES ('" + this->TitleEntry->Text + "', '" + this->DescriptionEntry->Text + "')";

		SqlCommand command(query, % context);

		try {
			context.Open();
			command.ExecuteNonQuery();
			context.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}
