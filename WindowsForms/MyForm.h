#pragma once
#include <format>

namespace SimpleWF {

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
		int count{};
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
	private: System::Windows::Forms::Label^ CountLabel;
	private: System::Windows::Forms::Button^ IncrementBtn;
	private: System::Windows::Forms::Button^ DecrementBtn;
	protected:



	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CountLabel = (gcnew System::Windows::Forms::Label());
			this->IncrementBtn = (gcnew System::Windows::Forms::Button());
			this->DecrementBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CountLabel
			// 
			this->CountLabel->AutoSize = true;
			this->CountLabel->Location = System::Drawing::Point(112, 58);
			this->CountLabel->Name = L"CountLabel";
			this->CountLabel->Size = System::Drawing::Size(47, 13);
			this->CountLabel->TabIndex = 0;
			this->CountLabel->Text = L"Count: 0";
			// 
			// IncrementBtn
			// 
			this->IncrementBtn->BackColor = System::Drawing::Color::GreenYellow;
			this->IncrementBtn->Location = System::Drawing::Point(65, 158);
			this->IncrementBtn->Name = L"IncrementBtn";
			this->IncrementBtn->Size = System::Drawing::Size(142, 23);
			this->IncrementBtn->TabIndex = 1;
			this->IncrementBtn->Text = L"INCREMENT";
			this->IncrementBtn->UseVisualStyleBackColor = false;
			this->IncrementBtn->Click += gcnew System::EventHandler(this, &MyForm::Increment);
			// 
			// DecrementBtn
			// 
			this->DecrementBtn->BackColor = System::Drawing::Color::GreenYellow;
			this->DecrementBtn->Location = System::Drawing::Point(65, 187);
			this->DecrementBtn->Name = L"DecrementBtn";
			this->DecrementBtn->Size = System::Drawing::Size(142, 23);
			this->DecrementBtn->TabIndex = 2;
			this->DecrementBtn->Text = L"DECREMENT";
			this->DecrementBtn->UseVisualStyleBackColor = false;
			this->DecrementBtn->Click += gcnew System::EventHandler(this, &MyForm::Decrement);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(269, 261);
			this->Controls->Add(this->DecrementBtn);
			this->Controls->Add(this->IncrementBtn);
			this->Controls->Add(this->CountLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"On Form Load",
			"Welcome",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	private: System::Void Increment(System::Object^ sender, System::EventArgs^ e) {
		CountLabel->Text = String::Format("Count: {0}", ++count);
	}
	private: System::Void Decrement(System::Object^ sender, System::EventArgs^ e) {
		CountLabel->Text = String::Format("Count: {0}", --count);
	}

	};
}
