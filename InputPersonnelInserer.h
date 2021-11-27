#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputPersonnelInserer
	/// </summary>
	public ref class InputPersonnelInserer : public System::Windows::Forms::Form
	{
	public:
		InputPersonnelInserer(void)
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
		~InputPersonnelInserer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbxInputClientInserer;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cmbManager;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::TextBox^ tbxPrenom;
	private: System::Windows::Forms::Label^ lblAnniversaire;
	private: System::Windows::Forms::DateTimePicker^ dtpAnniversaire;
	private: System::Windows::Forms::GroupBox^ gbxAdrLiv;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ cbxAdrLivPays;
	private: System::Windows::Forms::Label^ Manager;
	private: System::Windows::Forms::Label^ Embauche;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	protected:
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
			this->gbxInputClientInserer = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Embauche = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Manager = (gcnew System::Windows::Forms::Label());
			this->cmbManager = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lblAnniversaire = (gcnew System::Windows::Forms::Label());
			this->dtpAnniversaire = (gcnew System::Windows::Forms::DateTimePicker());
			this->gbxAdrLiv = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cbxAdrLivPays = (gcnew System::Windows::Forms::ComboBox());
			this->gbxInputClientInserer->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->gbxAdrLiv->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxInputClientInserer
			// 
			this->gbxInputClientInserer->Controls->Add(this->button2);
			this->gbxInputClientInserer->Controls->Add(this->button1);
			this->gbxInputClientInserer->Controls->Add(this->groupBox1);
			this->gbxInputClientInserer->Controls->Add(this->gbxAdrLiv);
			this->gbxInputClientInserer->Location = System::Drawing::Point(13, 13);
			this->gbxInputClientInserer->Margin = System::Windows::Forms::Padding(4);
			this->gbxInputClientInserer->Name = L"gbxInputClientInserer";
			this->gbxInputClientInserer->Padding = System::Windows::Forms::Padding(4);
			this->gbxInputClientInserer->Size = System::Drawing::Size(777, 298);
			this->gbxInputClientInserer->TabIndex = 1;
			this->gbxInputClientInserer->TabStop = false;
			this->gbxInputClientInserer->Text = L"Informations";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(393, 212);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(377, 78);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 212);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(377, 78);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Embauche);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->Manager);
			this->groupBox1->Controls->Add(this->cmbManager);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->tbxNom);
			this->groupBox1->Controls->Add(this->tbxPrenom);
			this->groupBox1->Controls->Add(this->lblAnniversaire);
			this->groupBox1->Controls->Add(this->dtpAnniversaire);
			this->groupBox1->Location = System::Drawing::Point(8, 16);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(377, 188);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Infos Principales";
			// 
			// Embauche
			// 
			this->Embauche->AutoSize = true;
			this->Embauche->Location = System::Drawing::Point(8, 164);
			this->Embauche->Name = L"Embauche";
			this->Embauche->Size = System::Drawing::Size(119, 17);
			this->Embauche->TabIndex = 23;
			this->Embauche->Text = L"Date d\'embauche";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(133, 159);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(235, 22);
			this->dateTimePicker1->TabIndex = 22;
			// 
			// Manager
			// 
			this->Manager->AutoSize = true;
			this->Manager->Location = System::Drawing::Point(8, 129);
			this->Manager->Name = L"Manager";
			this->Manager->Size = System::Drawing::Size(64, 17);
			this->Manager->TabIndex = 21;
			this->Manager->Text = L"Manager";
			// 
			// cmbManager
			// 
			this->cmbManager->FormattingEnabled = true;
			this->cmbManager->Location = System::Drawing::Point(78, 126);
			this->cmbManager->Name = L"cmbManager";
			this->cmbManager->Size = System::Drawing::Size(290, 24);
			this->cmbManager->TabIndex = 20;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(8, 27);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 17);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 60);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 17);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Prénom";
			// 
			// tbxNom
			// 
			this->tbxNom->Location = System::Drawing::Point(73, 23);
			this->tbxNom->Margin = System::Windows::Forms::Padding(4);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(295, 22);
			this->tbxNom->TabIndex = 9;
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->Location = System::Drawing::Point(73, 57);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(295, 22);
			this->tbxPrenom->TabIndex = 12;
			// 
			// lblAnniversaire
			// 
			this->lblAnniversaire->AutoSize = true;
			this->lblAnniversaire->Location = System::Drawing::Point(8, 94);
			this->lblAnniversaire->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAnniversaire->Name = L"lblAnniversaire";
			this->lblAnniversaire->Size = System::Drawing::Size(128, 17);
			this->lblAnniversaire->TabIndex = 17;
			this->lblAnniversaire->Text = L"Date de Naissance";
			// 
			// dtpAnniversaire
			// 
			this->dtpAnniversaire->Location = System::Drawing::Point(147, 90);
			this->dtpAnniversaire->Margin = System::Windows::Forms::Padding(4);
			this->dtpAnniversaire->Name = L"dtpAnniversaire";
			this->dtpAnniversaire->Size = System::Drawing::Size(221, 22);
			this->dtpAnniversaire->TabIndex = 15;
			// 
			// gbxAdrLiv
			// 
			this->gbxAdrLiv->Controls->Add(this->label8);
			this->gbxAdrLiv->Controls->Add(this->textBox5);
			this->gbxAdrLiv->Controls->Add(this->textBox4);
			this->gbxAdrLiv->Controls->Add(this->label7);
			this->gbxAdrLiv->Controls->Add(this->textBox3);
			this->gbxAdrLiv->Controls->Add(this->label6);
			this->gbxAdrLiv->Controls->Add(this->label5);
			this->gbxAdrLiv->Controls->Add(this->textBox2);
			this->gbxAdrLiv->Controls->Add(this->label4);
			this->gbxAdrLiv->Controls->Add(this->textBox1);
			this->gbxAdrLiv->Controls->Add(this->label3);
			this->gbxAdrLiv->Controls->Add(this->comboBox2);
			this->gbxAdrLiv->Controls->Add(this->label2);
			this->gbxAdrLiv->Controls->Add(this->label1);
			this->gbxAdrLiv->Controls->Add(this->comboBox1);
			this->gbxAdrLiv->Controls->Add(this->cbxAdrLivPays);
			this->gbxAdrLiv->Location = System::Drawing::Point(393, 16);
			this->gbxAdrLiv->Margin = System::Windows::Forms::Padding(4);
			this->gbxAdrLiv->Name = L"gbxAdrLiv";
			this->gbxAdrLiv->Padding = System::Windows::Forms::Padding(4);
			this->gbxAdrLiv->Size = System::Drawing::Size(377, 188);
			this->gbxAdrLiv->TabIndex = 16;
			this->gbxAdrLiv->TabStop = false;
			this->gbxAdrLiv->Text = L"Adresse";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(137, 158);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Résidence";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(223, 154);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(145, 22);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(71, 154);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(57, 22);
			this->textBox4->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 158);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Etage";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(181, 122);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(187, 22);
			this->textBox3->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(137, 126);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 126);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"N° Rue";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(71, 122);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 22);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(256, 94);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"CP";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(292, 90);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 22);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 94);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ville";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox2->Location = System::Drawing::Point(71, 90);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 60);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Region";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pays";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox1->Location = System::Drawing::Point(71, 57);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(297, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// cbxAdrLivPays
			// 
			this->cbxAdrLivPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxAdrLivPays->FormattingEnabled = true;
			this->cbxAdrLivPays->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->cbxAdrLivPays->Location = System::Drawing::Point(71, 23);
			this->cbxAdrLivPays->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrLivPays->Name = L"cbxAdrLivPays";
			this->cbxAdrLivPays->Size = System::Drawing::Size(297, 24);
			this->cbxAdrLivPays->TabIndex = 0;
			// 
			// InputPersonnelInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 326);
			this->Controls->Add(this->gbxInputClientInserer);
			this->Name = L"InputPersonnelInserer";
			this->Text = L"InputPersonnelInserer";
			this->gbxInputClientInserer->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gbxAdrLiv->ResumeLayout(false);
			this->gbxAdrLiv->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
