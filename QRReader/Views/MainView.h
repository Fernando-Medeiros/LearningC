#pragma once

namespace Views {
    using
	  System::Void,
	  System::String,
	  System::Object,
	  System::EventArgs,
	  System::Windows::Forms::Form,
	  System::Windows::Forms::Label,
	  System::Windows::Forms::ListView;

    public ref class MainView : public Form
    {
    public:
	  MainView();
	  ~MainView();
	  static void CodePushBack(String^ message);
	  static void InvokeCodePushBack(String^ message);
	  Void FecharLoteButtonClicked(Object^ sender, EventArgs^ e);

#pragma endregion
    private: System::Windows::Forms::TabControl^ Guias;
    private: System::Windows::Forms::TabPage^ GuiaCodigos;
    private: System::Windows::Forms::TabPage^ GuiaRelatorio;
    private: System::Windows::Forms::TableLayoutPanel^ CodigosPanel;
    private: System::Windows::Forms::TableLayoutPanel^ QuantidadeTagPanel;
    private: System::Windows::Forms::Label^ QuantidadeCodigosTagLabel;
    private: System::Windows::Forms::Label^ QuantidadeCodigosLabel;
    private: System::Windows::Forms::ListView^ CodigosListView;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ FecharLoteButton;
    private: System::Windows::Forms::ComboBox^ QuantidadeLotesBox;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Label^ QuantidadeLotesLabel;
    private: System::ComponentModel::Container^ components;
#pragma endregion
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
		   this->QuantidadeLotesBox = (gcnew System::Windows::Forms::ComboBox());
		   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		   this->FecharLoteButton = (gcnew System::Windows::Forms::Button());
		   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
		   this->QuantidadeLotesLabel = (gcnew System::Windows::Forms::Label());
		   this->Guias->SuspendLayout();
		   this->GuiaCodigos->SuspendLayout();
		   this->CodigosPanel->SuspendLayout();
		   this->QuantidadeTagPanel->SuspendLayout();
		   this->GuiaRelatorio->SuspendLayout();
		   this->tableLayoutPanel1->SuspendLayout();
		   this->tableLayoutPanel2->SuspendLayout();
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
		   this->Guias->Size = System::Drawing::Size(578, 307);
		   this->Guias->TabIndex = 1;
		   // 
		   // GuiaCodigos
		   // 
		   this->GuiaCodigos->Controls->Add(this->CodigosPanel);
		   this->GuiaCodigos->Controls->Add(this->QuantidadeTagPanel);
		   this->GuiaCodigos->Location = System::Drawing::Point(4, 25);
		   this->GuiaCodigos->Name = L"GuiaCodigos";
		   this->GuiaCodigos->Padding = System::Windows::Forms::Padding(3);
		   this->GuiaCodigos->Size = System::Drawing::Size(570, 278);
		   this->GuiaCodigos->TabIndex = 0;
		   this->GuiaCodigos->Text = L"Placas";
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
		   this->CodigosPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 208)));
		   this->CodigosPanel->Size = System::Drawing::Size(200, 222);
		   this->CodigosPanel->TabIndex = 1;
		   // 
		   // CodigosListView
		   // 
		   this->CodigosListView->Alignment = System::Windows::Forms::ListViewAlignment::SnapToGrid;
		   this->CodigosListView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			 | System::Windows::Forms::AnchorStyles::Left)
			 | System::Windows::Forms::AnchorStyles::Right));
		   this->CodigosListView->BackColor = System::Drawing::SystemColors::Window;
		   this->CodigosListView->HideSelection = false;
		   this->CodigosListView->Location = System::Drawing::Point(4, 4);
		   this->CodigosListView->Name = L"CodigosListView";
		   this->CodigosListView->Size = System::Drawing::Size(192, 214);
		   this->CodigosListView->TabIndex = 1;
		   this->CodigosListView->UseCompatibleStateImageBehavior = false;
		   this->CodigosListView->View = System::Windows::Forms::View::List;
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
		   this->GuiaRelatorio->Controls->Add(this->tableLayoutPanel2);
		   this->GuiaRelatorio->Controls->Add(this->tableLayoutPanel1);
		   this->GuiaRelatorio->Location = System::Drawing::Point(4, 25);
		   this->GuiaRelatorio->Name = L"GuiaRelatorio";
		   this->GuiaRelatorio->Padding = System::Windows::Forms::Padding(3);
		   this->GuiaRelatorio->Size = System::Drawing::Size(570, 278);
		   this->GuiaRelatorio->TabIndex = 1;
		   this->GuiaRelatorio->Text = L"Lotes";
		   this->GuiaRelatorio->UseVisualStyleBackColor = true;
		   // 
		   // QuantidadeLotesBox
		   // 
		   this->QuantidadeLotesBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			 | System::Windows::Forms::AnchorStyles::Left)
			 | System::Windows::Forms::AnchorStyles::Right));
		   this->QuantidadeLotesBox->BackColor = System::Drawing::SystemColors::HighlightText;
		   this->QuantidadeLotesBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		   this->QuantidadeLotesBox->FormattingEnabled = true;
		   this->QuantidadeLotesBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"25", L"50", L"75", L"100" });
		   this->QuantidadeLotesBox->Location = System::Drawing::Point(3, 32);
		   this->QuantidadeLotesBox->Name = L"QuantidadeLotesBox";
		   this->QuantidadeLotesBox->Size = System::Drawing::Size(120, 24);
		   this->QuantidadeLotesBox->TabIndex = 1;
		   // 
		   // tableLayoutPanel1
		   // 
		   this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
			 | System::Windows::Forms::AnchorStyles::Right));
		   this->tableLayoutPanel1->ColumnCount = 1;
		   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			 50)));
		   this->tableLayoutPanel1->Controls->Add(this->FecharLoteButton, 0, 0);
		   this->tableLayoutPanel1->Location = System::Drawing::Point(3, 237);
		   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		   this->tableLayoutPanel1->RowCount = 1;
		   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		   this->tableLayoutPanel1->Size = System::Drawing::Size(564, 38);
		   this->tableLayoutPanel1->TabIndex = 0;
		   // 
		   // FecharLoteButton
		   // 
		   this->FecharLoteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			 | System::Windows::Forms::AnchorStyles::Left)
			 | System::Windows::Forms::AnchorStyles::Right));
		   this->FecharLoteButton->BackColor = System::Drawing::Color::LightSeaGreen;
		   this->FecharLoteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			 static_cast<System::Byte>(0)));
		   this->FecharLoteButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
		   this->FecharLoteButton->Location = System::Drawing::Point(3, 3);
		   this->FecharLoteButton->Name = L"FecharLoteButton";
		   this->FecharLoteButton->Size = System::Drawing::Size(558, 32);
		   this->FecharLoteButton->TabIndex = 0;
		   this->FecharLoteButton->Text = L"Fechar Lote";
		   this->FecharLoteButton->UseVisualStyleBackColor = false;
		   this->FecharLoteButton->Click += gcnew System::EventHandler(this, &MainView::FecharLoteButtonClicked);
		   // 
		   // tableLayoutPanel2
		   // 
		   this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			 | System::Windows::Forms::AnchorStyles::Right));
		   this->tableLayoutPanel2->ColumnCount = 1;
		   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			 50)));
		   this->tableLayoutPanel2->Controls->Add(this->QuantidadeLotesBox, 0, 1);
		   this->tableLayoutPanel2->Controls->Add(this->QuantidadeLotesLabel, 0, 0);
		   this->tableLayoutPanel2->Location = System::Drawing::Point(441, 6);
		   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
		   this->tableLayoutPanel2->RowCount = 2;
		   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		   this->tableLayoutPanel2->Size = System::Drawing::Size(126, 59);
		   this->tableLayoutPanel2->TabIndex = 2;
		   // 
		   // QuantidadeLotesLabel
		   // 
		   this->QuantidadeLotesLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			 | System::Windows::Forms::AnchorStyles::Left)
			 | System::Windows::Forms::AnchorStyles::Right));
		   this->QuantidadeLotesLabel->AutoSize = true;
		   this->QuantidadeLotesLabel->Location = System::Drawing::Point(3, 3);
		   this->QuantidadeLotesLabel->Margin = System::Windows::Forms::Padding(3);
		   this->QuantidadeLotesLabel->Name = L"QuantidadeLotesLabel";
		   this->QuantidadeLotesLabel->Size = System::Drawing::Size(120, 23);
		   this->QuantidadeLotesLabel->TabIndex = 2;
		   this->QuantidadeLotesLabel->Text = L"Quantidade Lote:";
		   this->QuantidadeLotesLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		   // 
		   // MainView
		   // 
		   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		   this->ClientSize = System::Drawing::Size(603, 332);
		   this->Controls->Add(this->Guias);
		   this->Name = L"MainView";
		   this->Text = L"MainView";
		   this->Guias->ResumeLayout(false);
		   this->GuiaCodigos->ResumeLayout(false);
		   this->CodigosPanel->ResumeLayout(false);
		   this->QuantidadeTagPanel->ResumeLayout(false);
		   this->QuantidadeTagPanel->PerformLayout();
		   this->GuiaRelatorio->ResumeLayout(false);
		   this->tableLayoutPanel1->ResumeLayout(false);
		   this->tableLayoutPanel2->ResumeLayout(false);
		   this->tableLayoutPanel2->PerformLayout();
		   this->ResumeLayout(false);

	     }
#pragma endregion
    };
}
