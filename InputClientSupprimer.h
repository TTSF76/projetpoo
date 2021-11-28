#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputClientSupprimer
	/// </summary>
	public ref class InputClientSupprimer : public System::Windows::Forms::Form
	{
	public:
		InputClientSupprimer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputClientSupprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbxMain;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbxClient;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbxValeur;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateValeur;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbxMain = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxValeur = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbxClient = (gcnew System::Windows::Forms::ComboBox());
			this->dateValeur = (gcnew System::Windows::Forms::DateTimePicker());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->gbxMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxMain
			// 
			this->gbxMain->Controls->Add(this->button2);
			this->gbxMain->Controls->Add(this->button1);
			this->gbxMain->Controls->Add(this->label2);
			this->gbxMain->Controls->Add(this->tbxValeur);
			this->gbxMain->Controls->Add(this->label1);
			this->gbxMain->Controls->Add(this->cbxClient);
			this->gbxMain->Controls->Add(this->dateValeur);
			this->dateValeur->Hide();
			this->gbxMain->Location = System::Drawing::Point(58, 25);
			this->gbxMain->Name = L"gbxMain";
			this->gbxMain->Size = System::Drawing::Size(542, 191);
			this->gbxMain->TabIndex = 0;
			this->gbxMain->TabStop = false;
			this->gbxMain->Text = L"Supprimer un client";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(198, 141);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 36);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 141);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 36);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Valeur de la catégorie à supprimer";
			// 
			// tbxValeur
			// 
			this->tbxValeur->Location = System::Drawing::Point(252, 92);
			this->tbxValeur->Name = L"tbxValeur";
			this->tbxValeur->Size = System::Drawing::Size(119, 22);
			this->tbxValeur->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Identité du client";
			// 
			// cbxClient
			// 
			this->cbxClient->FormattingEnabled = true;
			this->cbxClient->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Nom ", L"Prénom", L"Date" });
			this->cbxClient->Location = System::Drawing::Point(129, 45);
			this->cbxClient->Name = L"cbxClient";
			this->cbxClient->Size = System::Drawing::Size(242, 24);
			this->cbxClient->TabIndex = 0;
			this->cbxClient->SelectionChangeCommitted += gcnew System::EventHandler(this, &InputClientSupprimer::cbxClient_SelectionChangeCommitted);
			// 
			// dateValeur
			// 
			this->dateValeur->Location = System::Drawing::Point(252, 92);
			this->dateValeur->Name = L"dateValeur";
			this->dateValeur->Size = System::Drawing::Size(230, 22);
			this->dateValeur->TabIndex = 26;
			// 
			// InputClientSupprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 232);
			this->Controls->Add(this->gbxMain);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"InputClientSupprimer";
			this->Text = L"Suppression de client";
			this->gbxMain->ResumeLayout(false);
			this->gbxMain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void cbxClient_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
	if (cbxClient->SelectedItem == "Date") {
		tbxValeur->Hide();
		dateValeur->Show();
		
	}
	else {
		dateValeur->Hide();
		tbxValeur->Show();
	}
}
};
}
