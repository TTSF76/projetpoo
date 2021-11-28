#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputStockSupprimer
	/// </summary>
	public ref class InputStockSupprimer : public System::Windows::Forms::Form
	{
	public:
		InputStockSupprimer(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InputStockSupprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbxMain;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbxPersonel;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbxMain = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbxPersonel = (gcnew System::Windows::Forms::ComboBox());
			this->gbxMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxMain
			// 
			this->gbxMain->Controls->Add(this->button2);
			this->gbxMain->Controls->Add(this->button1);
			this->gbxMain->Controls->Add(this->label1);
			this->gbxMain->Controls->Add(this->cbxPersonel);
			this->gbxMain->Location = System::Drawing::Point(12, 12);
			this->gbxMain->Name = L"gbxMain";
			this->gbxMain->Size = System::Drawing::Size(384, 120);
			this->gbxMain->TabIndex = 3;
			this->gbxMain->TabStop = false;
			this->gbxMain->Text = L"Supprimer un article";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(198, 76);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 36);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 76);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 36);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Article à supprimer:";
			// 
			// cbxPersonel
			// 
			this->cbxPersonel->FormattingEnabled = true;
			this->cbxPersonel->Location = System::Drawing::Point(176, 45);
			this->cbxPersonel->Name = L"cbxPersonel";
			this->cbxPersonel->Size = System::Drawing::Size(195, 24);
			this->cbxPersonel->TabIndex = 0;
			// 
			// InputStockSupprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 253);
			this->Controls->Add(this->gbxMain);
			this->Name = L"InputStockSupprimer";
			this->Text = L"InputStockSupprimer";
			this->gbxMain->ResumeLayout(false);
			this->gbxMain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
