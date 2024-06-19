#pragma once

namespace Views {

	using
		System::String,
		System::Windows::Forms::Form;

	public ref class MainView : public Form
	{
	public:
		MainView(void)
		{
			InitializeComponent();
		}

	protected:
		~MainView()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region EVENTS

#pragma endregion

	private: System::Windows::Forms::TabControl^ Guias;
	private: System::Windows::Forms::TabPage^ GuiaCodigos;
	private: System::Windows::Forms::TabPage^ GuiaRelatorio;
	private: System::Windows::Forms::TableLayoutPanel^ CodigosPanel;
	private: System::Windows::Forms::TableLayoutPanel^ QuantidadeTagPanel;
	private: System::Windows::Forms::Label^ QuantidadeCodigosTagLabel;
	private: System::Windows::Forms::Label^ QuantidadeCodigosLabel;
	private: System::Windows::Forms::ListView^ CodigosListView;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->Guias = (gcnew System::Windows::Forms::TabControl());
			   this->GuiaCodigos = (gcnew System::Windows::Forms::TabPage());
			   this->CodigosPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->CodigosListView = (gcnew System::Windows::Forms::ListView());
			   this->QuantidadeTagPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->QuantidadeCodigosLabel = (gcnew System::Windows::Forms::Label());
			   this->QuantidadeCodigosTagLabel = (gcnew System::Windows::Forms::Label());
			   this->GuiaRelatorio = (gcnew System::Windows::Forms::TabPage());
			   this->Guias->SuspendLayout();
			   this->GuiaCodigos->SuspendLayout();
			   this->CodigosPanel->SuspendLayout();
			   this->QuantidadeTagPanel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // Guias
			   // 
			   this->Guias->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->Guias->Controls->Add(this->GuiaCodigos);
			   this->Guias->Controls->Add(this->GuiaRelatorio);
			   this->Guias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Guias->Location = System::Drawing::Point(13, 13);
			   this->Guias->Name = L"Guias";
			   this->Guias->SelectedIndex = 0;
			   this->Guias->Size = System::Drawing::Size(591, 254);
			   this->Guias->TabIndex = 1;
			   // 
			   // GuiaCodigos
			   // 
			   this->GuiaCodigos->Controls->Add(this->CodigosPanel);
			   this->GuiaCodigos->Controls->Add(this->QuantidadeTagPanel);
			   this->GuiaCodigos->Location = System::Drawing::Point(4, 25);
			   this->GuiaCodigos->Name = L"GuiaCodigos";
			   this->GuiaCodigos->Padding = System::Windows::Forms::Padding(3);
			   this->GuiaCodigos->Size = System::Drawing::Size(583, 225);
			   this->GuiaCodigos->TabIndex = 0;
			   this->GuiaCodigos->Text = L"Códigos";
			   this->GuiaCodigos->UseVisualStyleBackColor = true;
			   // 
			   // CodigosPanel
			   // 
			   this->CodigosPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left));
			   this->CodigosPanel->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			   this->CodigosPanel->ColumnCount = 1;
			   this->CodigosPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			   this->CodigosPanel->Controls->Add(this->CodigosListView, 0, 0);
			   this->CodigosPanel->Location = System::Drawing::Point(7, 50);
			   this->CodigosPanel->Name = L"CodigosPanel";
			   this->CodigosPanel->RowCount = 1;
			   this->CodigosPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			   this->CodigosPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 181)));
			   this->CodigosPanel->Size = System::Drawing::Size(200, 169);
			   this->CodigosPanel->TabIndex = 1;
			   // 
			   // CodigosListView
			   // 
			   this->CodigosListView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->CodigosListView->BackColor = System::Drawing::SystemColors::Window;
			   this->CodigosListView->HideSelection = false;
			   this->CodigosListView->Location = System::Drawing::Point(4, 4);
			   this->CodigosListView->Name = L"CodigosListView";
			   this->CodigosListView->Size = System::Drawing::Size(192, 175);
			   this->CodigosListView->TabIndex = 1;
			   this->CodigosListView->UseCompatibleStateImageBehavior = false;
			   // 
			   // QuantidadeTagPanel
			   // 
			   this->QuantidadeTagPanel->BackColor = System::Drawing::Color::Transparent;
			   this->QuantidadeTagPanel->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			   this->QuantidadeTagPanel->ColumnCount = 2;
			   this->QuantidadeTagPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->QuantidadeTagPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->QuantidadeTagPanel->Controls->Add(this->QuantidadeCodigosLabel, 1, 0);
			   this->QuantidadeTagPanel->Controls->Add(this->QuantidadeCodigosTagLabel, 0, 0);
			   this->QuantidadeTagPanel->Location = System::Drawing::Point(6, 6);
			   this->QuantidadeTagPanel->Name = L"QuantidadeTagPanel";
			   this->QuantidadeTagPanel->RowCount = 1;
			   this->QuantidadeTagPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->QuantidadeTagPanel->Size = System::Drawing::Size(201, 38);
			   this->QuantidadeTagPanel->TabIndex = 0;
			   // 
			   // QuantidadeCodigosLabel
			   // 
			   this->QuantidadeCodigosLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->QuantidadeCodigosLabel->AutoSize = true;
			   this->QuantidadeCodigosLabel->Location = System::Drawing::Point(104, 4);
			   this->QuantidadeCodigosLabel->Margin = System::Windows::Forms::Padding(3);
			   this->QuantidadeCodigosLabel->Name = L"QuantidadeCodigosLabel";
			   this->QuantidadeCodigosLabel->Size = System::Drawing::Size(93, 30);
			   this->QuantidadeCodigosLabel->TabIndex = 3;
			   this->QuantidadeCodigosLabel->Text = L"0";
			   this->QuantidadeCodigosLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // QuantidadeCodigosTagLabel
			   // 
			   this->QuantidadeCodigosTagLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->QuantidadeCodigosTagLabel->AutoSize = true;
			   this->QuantidadeCodigosTagLabel->Location = System::Drawing::Point(4, 4);
			   this->QuantidadeCodigosTagLabel->Margin = System::Windows::Forms::Padding(3);
			   this->QuantidadeCodigosTagLabel->Name = L"QuantidadeCodigosTagLabel";
			   this->QuantidadeCodigosTagLabel->Size = System::Drawing::Size(93, 30);
			   this->QuantidadeCodigosTagLabel->TabIndex = 2;
			   this->QuantidadeCodigosTagLabel->Text = L"Quantidade:";
			   this->QuantidadeCodigosTagLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // GuiaRelatorio
			   // 
			   this->GuiaRelatorio->Location = System::Drawing::Point(4, 25);
			   this->GuiaRelatorio->Name = L"GuiaRelatorio";
			   this->GuiaRelatorio->Padding = System::Windows::Forms::Padding(3);
			   this->GuiaRelatorio->Size = System::Drawing::Size(583, 225);
			   this->GuiaRelatorio->TabIndex = 1;
			   this->GuiaRelatorio->Text = L"Relatórios";
			   this->GuiaRelatorio->UseVisualStyleBackColor = true;
			   // 
			   // MainView
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(616, 279);
			   this->Controls->Add(this->Guias);
			   this->Name = L"MainView";
			   this->Text = L"MainView";
			   this->Guias->ResumeLayout(false);
			   this->GuiaCodigos->ResumeLayout(false);
			   this->CodigosPanel->ResumeLayout(false);
			   this->QuantidadeTagPanel->ResumeLayout(false);
			   this->QuantidadeTagPanel->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	};
}
