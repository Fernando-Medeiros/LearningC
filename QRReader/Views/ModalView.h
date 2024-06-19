#pragma once

namespace Views {

	using
		System::String,
		System::Windows::Forms::Form;

	public ref class ModalView : public Form
	{
	public:
		ModalView(void)
		{
			InitializeComponent();
		}

	protected:
		~ModalView()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region EVENTS

#pragma endregion

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code		
		   void InitializeComponent(void)
		   {
			   this->components = gcnew System::ComponentModel::Container();
			   this->Size = System::Drawing::Size(300, 300);
			   this->Text = L"ModalView";
			   this->Padding = System::Windows::Forms::Padding(0);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		   }
#pragma endregion
	};
}
