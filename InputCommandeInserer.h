#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputCommandeInserer
	/// </summary>
	public ref class InputCommandeInserer : public System::Windows::Forms::Form
	{
	public:
		InputCommandeInserer(void)
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
		~InputCommandeInserer()
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
	private: System::Windows::Forms::GroupBox^ gbxFact;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ tbxTauxTVA;
	private: System::Windows::Forms::TextBox^ tbxRemise;
	private: System::Windows::Forms::TextBox^ tbxQte;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ gbxCommande;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ tbxNature;
	private: System::Windows::Forms::TextBox^ tbxRef;

	private: System::Windows::Forms::Label^ prixht;
	private: System::Windows::Forms::Label^ Produit;
	private: System::Windows::Forms::Label^ Couleur;
	private: System::Windows::Forms::Label^ Ref;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::GroupBox^ gbxAdrEntreprise;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->gbxCommande = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tbxNature = (gcnew System::Windows::Forms::TextBox());
			this->tbxRef = (gcnew System::Windows::Forms::TextBox());
			this->prixht = (gcnew System::Windows::Forms::Label());
			this->Produit = (gcnew System::Windows::Forms::Label());
			this->Couleur = (gcnew System::Windows::Forms::Label());
			this->Ref = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->gbxFact = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tbxTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->tbxRemise = (gcnew System::Windows::Forms::TextBox());
			this->tbxQte = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gbxAdrEntreprise = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->gbxMain->SuspendLayout();
			this->gbxCommande->SuspendLayout();
			this->gbxFact->SuspendLayout();
			this->gbxAdrEntreprise->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxMain
			// 
			this->gbxMain->Controls->Add(this->gbxAdrEntreprise);
			this->gbxMain->Controls->Add(this->gbxFact);
			this->gbxMain->Controls->Add(this->gbxCommande);
			this->gbxMain->Controls->Add(this->button2);
			this->gbxMain->Controls->Add(this->button1);
			this->gbxMain->Location = System::Drawing::Point(23, 12);
			this->gbxMain->Name = L"gbxMain";
			this->gbxMain->Size = System::Drawing::Size(1225, 358);
			this->gbxMain->TabIndex = 1;
			this->gbxMain->TabStop = false;
			this->gbxMain->Text = L"Insertion de commande";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(616, 251);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(590, 78);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 251);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(592, 78);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// gbxCommande
			// 
			this->gbxCommande->Controls->Add(this->dateTimePicker2);
			this->gbxCommande->Controls->Add(this->dateTimePicker1);
			this->gbxCommande->Controls->Add(this->textBox1);
			this->gbxCommande->Controls->Add(this->label1);
			this->gbxCommande->Controls->Add(this->textBox5);
			this->gbxCommande->Controls->Add(this->tbxNature);
			this->gbxCommande->Controls->Add(this->tbxRef);
			this->gbxCommande->Controls->Add(this->prixht);
			this->gbxCommande->Controls->Add(this->Produit);
			this->gbxCommande->Controls->Add(this->Couleur);
			this->gbxCommande->Controls->Add(this->Ref);
			this->gbxCommande->Controls->Add(this->nom);
			this->gbxCommande->Location = System::Drawing::Point(16, 32);
			this->gbxCommande->Name = L"gbxCommande";
			this->gbxCommande->Size = System::Drawing::Size(377, 212);
			this->gbxCommande->TabIndex = 52;
			this->gbxCommande->TabStop = false;
			this->gbxCommande->Text = L"Commande";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(123, 84);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(224, 22);
			this->dateTimePicker2->TabIndex = 58;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(121, 55);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(226, 22);
			this->dateTimePicker1->TabIndex = 57;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 169);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 22);
			this->textBox1->TabIndex = 56;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 17);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Prix total";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(133, 141);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(214, 22);
			this->textBox5->TabIndex = 54;
			// 
			// tbxNature
			// 
			this->tbxNature->Location = System::Drawing::Point(121, 113);
			this->tbxNature->Name = L"tbxNature";
			this->tbxNature->Size = System::Drawing::Size(226, 22);
			this->tbxNature->TabIndex = 53;
			// 
			// tbxRef
			// 
			this->tbxRef->Location = System::Drawing::Point(110, 22);
			this->tbxRef->Name = L"tbxRef";
			this->tbxRef->Size = System::Drawing::Size(237, 22);
			this->tbxRef->TabIndex = 52;
			// 
			// prixht
			// 
			this->prixht->AutoSize = true;
			this->prixht->Location = System::Drawing::Point(30, 146);
			this->prixht->Name = L"prixht";
			this->prixht->Size = System::Drawing::Size(97, 17);
			this->prixht->TabIndex = 51;
			this->prixht->Text = L"Prix de la TVA";
			// 
			// Produit
			// 
			this->Produit->AutoSize = true;
			this->Produit->Location = System::Drawing::Point(30, 116);
			this->Produit->Name = L"Produit";
			this->Produit->Size = System::Drawing::Size(85, 17);
			this->Produit->TabIndex = 50;
			this->Produit->Text = L"Prix total HT";
			// 
			// Couleur
			// 
			this->Couleur->AutoSize = true;
			this->Couleur->Location = System::Drawing::Point(30, 87);
			this->Couleur->Name = L"Couleur";
			this->Couleur->Size = System::Drawing::Size(87, 17);
			this->Couleur->TabIndex = 49;
			this->Couleur->Text = L"Date d\'envoi";
			// 
			// Ref
			// 
			this->Ref->AutoSize = true;
			this->Ref->Location = System::Drawing::Point(30, 55);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(94, 17);
			this->Ref->TabIndex = 48;
			this->Ref->Text = L"Date livraison";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(30, 25);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(74, 17);
			this->nom->TabIndex = 47;
			this->nom->Text = L"Reférence";
			// 
			// gbxFact
			// 
			this->gbxFact->Controls->Add(this->comboBox2);
			this->gbxFact->Controls->Add(this->dateTimePicker3);
			this->gbxFact->Controls->Add(this->label7);
			this->gbxFact->Controls->Add(this->label6);
			this->gbxFact->Controls->Add(this->comboBox1);
			this->gbxFact->Controls->Add(this->tbxTauxTVA);
			this->gbxFact->Controls->Add(this->tbxRemise);
			this->gbxFact->Controls->Add(this->tbxQte);
			this->gbxFact->Controls->Add(this->label2);
			this->gbxFact->Controls->Add(this->label3);
			this->gbxFact->Controls->Add(this->label4);
			this->gbxFact->Controls->Add(this->label5);
			this->gbxFact->Location = System::Drawing::Point(421, 32);
			this->gbxFact->Name = L"gbxFact";
			this->gbxFact->Size = System::Drawing::Size(357, 212);
			this->gbxFact->TabIndex = 53;
			this->gbxFact->TabStop = false;
			this->gbxFact->Text = L"Facturation";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(132, 170);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(221, 22);
			this->dateTimePicker3->TabIndex = 63;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 17);
			this->label7->TabIndex = 62;
			this->label7->Text = L"Date de paiement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 17);
			this->label6->TabIndex = 60;
			this->label6->Text = L"Moyen de paiement";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(171, 78);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 24);
			this->comboBox1->TabIndex = 59;
			// 
			// tbxTauxTVA
			// 
			this->tbxTauxTVA->Location = System::Drawing::Point(159, 109);
			this->tbxTauxTVA->Name = L"tbxTauxTVA";
			this->tbxTauxTVA->Size = System::Drawing::Size(194, 22);
			this->tbxTauxTVA->TabIndex = 58;
			// 
			// tbxRemise
			// 
			this->tbxRemise->Location = System::Drawing::Point(134, 48);
			this->tbxRemise->Name = L"tbxRemise";
			this->tbxRemise->Size = System::Drawing::Size(219, 22);
			this->tbxRemise->TabIndex = 57;
			// 
			// tbxQte
			// 
			this->tbxQte->Location = System::Drawing::Point(142, 18);
			this->tbxQte->Name = L"tbxQte";
			this->tbxQte->Size = System::Drawing::Size(211, 22);
			this->tbxQte->TabIndex = 56;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 17);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Nombre de paiements";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 17);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Client ayant commandé";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 17);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Téléphone du SAV";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 17);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Nom de société";
			// 
			// gbxAdrEntreprise
			// 
			this->gbxAdrEntreprise->Controls->Add(this->label9);
			this->gbxAdrEntreprise->Controls->Add(this->textBox6);
			this->gbxAdrEntreprise->Controls->Add(this->textBox7);
			this->gbxAdrEntreprise->Controls->Add(this->label10);
			this->gbxAdrEntreprise->Controls->Add(this->textBox8);
			this->gbxAdrEntreprise->Controls->Add(this->label11);
			this->gbxAdrEntreprise->Controls->Add(this->label12);
			this->gbxAdrEntreprise->Controls->Add(this->textBox9);
			this->gbxAdrEntreprise->Controls->Add(this->label13);
			this->gbxAdrEntreprise->Controls->Add(this->textBox10);
			this->gbxAdrEntreprise->Controls->Add(this->label14);
			this->gbxAdrEntreprise->Controls->Add(this->comboBox3);
			this->gbxAdrEntreprise->Controls->Add(this->label15);
			this->gbxAdrEntreprise->Controls->Add(this->label16);
			this->gbxAdrEntreprise->Controls->Add(this->comboBox4);
			this->gbxAdrEntreprise->Controls->Add(this->comboBox5);
			this->gbxAdrEntreprise->Location = System::Drawing::Point(821, 32);
			this->gbxAdrEntreprise->Margin = System::Windows::Forms::Padding(4);
			this->gbxAdrEntreprise->Name = L"gbxAdrEntreprise";
			this->gbxAdrEntreprise->Padding = System::Windows::Forms::Padding(4);
			this->gbxAdrEntreprise->Size = System::Drawing::Size(385, 212);
			this->gbxAdrEntreprise->TabIndex = 54;
			this->gbxAdrEntreprise->TabStop = false;
			this->gbxAdrEntreprise->Text = L"Adresse de l\'entreprise";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(137, 158);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 17);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Résidence";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(223, 154);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(145, 22);
			this->textBox6->TabIndex = 30;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(71, 154);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(57, 22);
			this->textBox7->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 158);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Etage";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(181, 122);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(187, 22);
			this->textBox8->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(137, 126);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 17);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Rue";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 126);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 25;
			this->label12->Text = L"N° Rue";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(71, 122);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(57, 22);
			this->textBox9->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(256, 94);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 17);
			this->label13->TabIndex = 23;
			this->label13->Text = L"CP";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(292, 90);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(76, 22);
			this->textBox10->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 94);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 17);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Ville";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox3->Location = System::Drawing::Point(71, 90);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(176, 24);
			this->comboBox3->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(8, 60);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Region";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 27);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 17);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Pays";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox4->Location = System::Drawing::Point(71, 57);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(297, 24);
			this->comboBox4->TabIndex = 17;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox5->Location = System::Drawing::Point(71, 23);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(297, 24);
			this->comboBox5->TabIndex = 16;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(142, 140);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(209, 24);
			this->comboBox2->TabIndex = 64;
			// 
			// InputCommandeInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1433, 431);
			this->Controls->Add(this->gbxMain);
			this->Name = L"InputCommandeInserer";
			this->Text = L"InputCommandeInserer";
			this->gbxMain->ResumeLayout(false);
			this->gbxCommande->ResumeLayout(false);
			this->gbxCommande->PerformLayout();
			this->gbxFact->ResumeLayout(false);
			this->gbxFact->PerformLayout();
			this->gbxAdrEntreprise->ResumeLayout(false);
			this->gbxAdrEntreprise->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
