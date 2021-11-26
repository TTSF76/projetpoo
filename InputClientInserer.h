#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputClientInserer
	/// </summary>
	public ref class InputClientInserer : public System::Windows::Forms::Form
	{
	public:
		InputClientInserer(void)
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
		~InputClientInserer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbxInputClientInserer;
	private: System::Windows::Forms::TextBox^ tbxPrenom;





	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::GroupBox^ gbxAdrLiv;



	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ lblAnniversaire;
	private: System::Windows::Forms::GroupBox^ gbxAdrFac;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

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
			this->gbxInputClientInserer = (gcnew System::Windows::Forms::GroupBox());
			this->gbxAdrLiv = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->lblAnniversaire = (gcnew System::Windows::Forms::Label());
			this->gbxAdrFac = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->gbxInputClientInserer->SuspendLayout();
			this->gbxAdrLiv->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxInputClientInserer
			// 
			this->gbxInputClientInserer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gbxInputClientInserer->Controls->Add(this->gbxAdrFac);
			this->gbxInputClientInserer->Controls->Add(this->lblAnniversaire);
			this->gbxInputClientInserer->Controls->Add(this->gbxAdrLiv);
			this->gbxInputClientInserer->Controls->Add(this->dateTimePicker1);
			this->gbxInputClientInserer->Controls->Add(this->tbxPrenom);
			this->gbxInputClientInserer->Controls->Add(this->tbxNom);
			this->gbxInputClientInserer->Location = System::Drawing::Point(13, 12);
			this->gbxInputClientInserer->Name = L"gbxInputClientInserer";
			this->gbxInputClientInserer->Size = System::Drawing::Size(893, 262);
			this->gbxInputClientInserer->TabIndex = 0;
			this->gbxInputClientInserer->TabStop = false;
			this->gbxInputClientInserer->Text = L"Informations";
			// 
			// gbxAdrLiv
			// 
			this->gbxAdrLiv->Controls->Add(this->comboBox1);
			this->gbxAdrLiv->Location = System::Drawing::Point(232, 13);
			this->gbxAdrLiv->Name = L"gbxAdrLiv";
			this->gbxAdrLiv->Size = System::Drawing::Size(283, 243);
			this->gbxAdrLiv->TabIndex = 16;
			this->gbxAdrLiv->TabStop = false;
			this->gbxAdrLiv->Text = L"Adresse de Livraison";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(6, 101);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 15;
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->Location = System::Drawing::Point(6, 45);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(200, 20);
			this->tbxPrenom->TabIndex = 12;
			this->tbxPrenom->Text = L"Votre Prénom";
			this->tbxPrenom->Enter += gcnew System::EventHandler(this, &InputClientInserer::tbxPrenom_Enter);
			this->tbxPrenom->Leave += gcnew System::EventHandler(this, &InputClientInserer::tbxPrenom_Leave);
			// 
			// tbxNom
			// 
			this->tbxNom->Location = System::Drawing::Point(6, 19);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(200, 20);
			this->tbxNom->TabIndex = 9;
			this->tbxNom->Text = L"Votre Nom";
			this->tbxNom->Enter += gcnew System::EventHandler(this, &InputClientInserer::tbxNom_Enter);
			this->tbxNom->Leave += gcnew System::EventHandler(this, &InputClientInserer::tbxNom_Leave);
			// 
			// lblAnniversaire
			// 
			this->lblAnniversaire->AutoSize = true;
			this->lblAnniversaire->Location = System::Drawing::Point(6, 85);
			this->lblAnniversaire->Name = L"lblAnniversaire";
			this->lblAnniversaire->Size = System::Drawing::Size(98, 13);
			this->lblAnniversaire->TabIndex = 17;
			this->lblAnniversaire->Text = L"Date de Naissance";
			// 
			// gbxAdrFac
			// 
			this->gbxAdrFac->Location = System::Drawing::Point(521, 13);
			this->gbxAdrFac->Name = L"gbxAdrFac";
			this->gbxAdrFac->Size = System::Drawing::Size(283, 243);
			this->gbxAdrFac->TabIndex = 18;
			this->gbxAdrFac->TabStop = false;
			this->gbxAdrFac->Text = L"Adresse de Facturation";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox1->Location = System::Drawing::Point(7, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(270, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// InputClientInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(918, 286);
			this->Controls->Add(this->gbxInputClientInserer);
			this->Name = L"InputClientInserer";
			this->Text = L"InputClientInserer";
			this->gbxInputClientInserer->ResumeLayout(false);
			this->gbxInputClientInserer->PerformLayout();
			this->gbxAdrLiv->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void tbxNom_Enter(System::Object^ sender, System::EventArgs^ e) { if (this->tbxNom->Text == "Votre Nom") this->tbxNom->Text = ""; }
	private: System::Void tbxNom_Leave(System::Object^ sender, System::EventArgs^ e) { if (this->tbxNom->Text->Trim() == "") this->tbxNom->Text = L"Votre Nom"; }
	private: System::Void tbxPrenom_Enter(System::Object^ sender, System::EventArgs^ e) { if (this->tbxPrenom->Text == "Votre Prénom") this->tbxPrenom->Text = ""; }
	private: System::Void tbxPrenom_Leave(System::Object^ sender, System::EventArgs^ e) { if (this->tbxPrenom->Text->Trim() == "") this->tbxPrenom->Text = L"Votre Prénom"; }
};
}
