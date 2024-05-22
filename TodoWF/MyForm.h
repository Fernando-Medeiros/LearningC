#pragma once

namespace TodoWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TitleLbl;
	private: System::Windows::Forms::Label^ DescriptionLbl;
	private: System::Windows::Forms::TextBox^ DescriptionEntry;
	private: System::Windows::Forms::TextBox^ TitleEntry;
	private: System::Windows::Forms::Label^ DateLbl;
	private: System::Windows::Forms::DateTimePicker^ DateEntry;
	private: System::Windows::Forms::Button^ AppendTodoBtn;




	protected:




	protected:


	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TitleLbl = (gcnew System::Windows::Forms::Label());
			this->DescriptionLbl = (gcnew System::Windows::Forms::Label());
			this->DescriptionEntry = (gcnew System::Windows::Forms::TextBox());
			this->TitleEntry = (gcnew System::Windows::Forms::TextBox());
			this->DateLbl = (gcnew System::Windows::Forms::Label());
			this->DateEntry = (gcnew System::Windows::Forms::DateTimePicker());
			this->AppendTodoBtn = (gcnew System::Windows::Forms::Button());
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
			this->TitleLbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// DescriptionLbl
			// 
			this->DescriptionLbl->AutoSize = true;
			this->DescriptionLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescriptionLbl->Location = System::Drawing::Point(29, 85);
			this->DescriptionLbl->Name = L"DescriptionLbl";
			this->DescriptionLbl->Size = System::Drawing::Size(75, 16);
			this->DescriptionLbl->TabIndex = 1;
			this->DescriptionLbl->Text = L"Description";
			// 
			// DescriptionEntry
			// 
			this->DescriptionEntry->Location = System::Drawing::Point(110, 85);
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
			this->TitleEntry->TextChanged += gcnew System::EventHandler(this, &MyForm::TitleEntry_TextChanged);
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
			this->DateLbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
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
			this->AppendTodoBtn->Location = System::Drawing::Point(110, 157);
			this->AppendTodoBtn->Name = L"AppendTodoBtn";
			this->AppendTodoBtn->Size = System::Drawing::Size(260, 32);
			this->AppendTodoBtn->TabIndex = 6;
			this->AppendTodoBtn->Text = L"Append";
			this->AppendTodoBtn->UseVisualStyleBackColor = false;
			this->AppendTodoBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(829, 481);
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TitleEntry_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
