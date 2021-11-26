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
	private: System::Windows::Forms::DateTimePicker^ dtpAnniversaire;




	private: System::Windows::Forms::Label^ lblAnniversaire;
	private: System::Windows::Forms::GroupBox^ gbxAdrFac;
	private: System::Windows::Forms::ComboBox^ cbxAdrLivPays;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
















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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lblAnniversaire = (gcnew System::Windows::Forms::Label());
			this->dtpAnniversaire = (gcnew System::Windows::Forms::DateTimePicker());
			this->gbxAdrFac = (gcnew System::Windows::Forms::GroupBox());
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
			this->gbxInputClientInserer->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->gbxAdrFac->SuspendLayout();
			this->gbxAdrLiv->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxInputClientInserer
			// 
			this->gbxInputClientInserer->Controls->Add(this->button2);
			this->gbxInputClientInserer->Controls->Add(this->button1);
			this->gbxInputClientInserer->Controls->Add(this->groupBox1);
			this->gbxInputClientInserer->Controls->Add(this->gbxAdrFac);
			this->gbxInputClientInserer->Controls->Add(this->gbxAdrLiv);
			this->gbxInputClientInserer->Location = System::Drawing::Point(13, 12);
			this->gbxInputClientInserer->Name = L"gbxInputClientInserer";
			this->gbxInputClientInserer->Size = System::Drawing::Size(874, 242);
			this->gbxInputClientInserer->TabIndex = 0;
			this->gbxInputClientInserer->TabStop = false;
			this->gbxInputClientInserer->Text = L"Informations";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(440, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(428, 63);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InputClientInserer::inputInserer_Annuler);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(427, 63);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputClientInserer::inputClientInserer_Valider);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->tbxNom);
			this->groupBox1->Controls->Add(this->tbxPrenom);
			this->groupBox1->Controls->Add(this->lblAnniversaire);
			this->groupBox1->Controls->Add(this->dtpAnniversaire);
			this->groupBox1->Location = System::Drawing::Point(6, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 153);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Infos Principales";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 22);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 49);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Prénom";
			// 
			// tbxNom
			// 
			this->tbxNom->Location = System::Drawing::Point(55, 19);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(222, 20);
			this->tbxNom->TabIndex = 9;
			this->tbxNom->Enter += gcnew System::EventHandler(this, &InputClientInserer::tbxNom_Enter);
			this->tbxNom->Leave += gcnew System::EventHandler(this, &InputClientInserer::tbxNom_Leave);
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->Location = System::Drawing::Point(55, 46);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(222, 20);
			this->tbxPrenom->TabIndex = 12;
			this->tbxPrenom->Enter += gcnew System::EventHandler(this, &InputClientInserer::tbxPrenom_Enter);
			this->tbxPrenom->Leave += gcnew System::EventHandler(this, &InputClientInserer::tbxPrenom_Leave);
			// 
			// lblAnniversaire
			// 
			this->lblAnniversaire->AutoSize = true;
			this->lblAnniversaire->Location = System::Drawing::Point(6, 76);
			this->lblAnniversaire->Name = L"lblAnniversaire";
			this->lblAnniversaire->Size = System::Drawing::Size(98, 13);
			this->lblAnniversaire->TabIndex = 17;
			this->lblAnniversaire->Text = L"Date de Naissance";
			// 
			// dtpAnniversaire
			// 
			this->dtpAnniversaire->Location = System::Drawing::Point(110, 73);
			this->dtpAnniversaire->Name = L"dtpAnniversaire";
			this->dtpAnniversaire->Size = System::Drawing::Size(167, 20);
			this->dtpAnniversaire->TabIndex = 15;
			// 
			// gbxAdrFac
			// 
			this->gbxAdrFac->Controls->Add(this->label9);
			this->gbxAdrFac->Controls->Add(this->textBox6);
			this->gbxAdrFac->Controls->Add(this->textBox7);
			this->gbxAdrFac->Controls->Add(this->label10);
			this->gbxAdrFac->Controls->Add(this->textBox8);
			this->gbxAdrFac->Controls->Add(this->label11);
			this->gbxAdrFac->Controls->Add(this->label12);
			this->gbxAdrFac->Controls->Add(this->textBox9);
			this->gbxAdrFac->Controls->Add(this->label13);
			this->gbxAdrFac->Controls->Add(this->textBox10);
			this->gbxAdrFac->Controls->Add(this->label14);
			this->gbxAdrFac->Controls->Add(this->comboBox3);
			this->gbxAdrFac->Controls->Add(this->label15);
			this->gbxAdrFac->Controls->Add(this->label16);
			this->gbxAdrFac->Controls->Add(this->comboBox4);
			this->gbxAdrFac->Controls->Add(this->comboBox5);
			this->gbxAdrFac->Location = System::Drawing::Point(584, 13);
			this->gbxAdrFac->Name = L"gbxAdrFac";
			this->gbxAdrFac->Size = System::Drawing::Size(283, 153);
			this->gbxAdrFac->TabIndex = 18;
			this->gbxAdrFac->TabStop = false;
			this->gbxAdrFac->Text = L"Adresse de Facturation";
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
			this->gbxAdrLiv->Location = System::Drawing::Point(295, 13);
			this->gbxAdrLiv->Name = L"gbxAdrLiv";
			this->gbxAdrLiv->Size = System::Drawing::Size(283, 153);
			this->gbxAdrLiv->TabIndex = 16;
			this->gbxAdrLiv->TabStop = false;
			this->gbxAdrLiv->Text = L"Adresse de Livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(103, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Résidence";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(53, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 20);
			this->textBox4->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Etage";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(141, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(103, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"N° Rue";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(53, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 20);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(192, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"CP";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(219, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ville";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox2->Location = System::Drawing::Point(53, 73);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(133, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Region";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pays";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox1->Location = System::Drawing::Point(53, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(224, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// cbxAdrLivPays
			// 
			this->cbxAdrLivPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxAdrLivPays->FormattingEnabled = true;
			this->cbxAdrLivPays->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->cbxAdrLivPays->Location = System::Drawing::Point(53, 19);
			this->cbxAdrLivPays->Name = L"cbxAdrLivPays";
			this->cbxAdrLivPays->Size = System::Drawing::Size(224, 21);
			this->cbxAdrLivPays->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(103, 128);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Résidence";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(167, 125);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 20);
			this->textBox6->TabIndex = 30;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(53, 125);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 20);
			this->textBox7->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 128);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Etage";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(136, 99);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(141, 20);
			this->textBox8->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(103, 102);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Rue";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 102);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"N° Rue";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(53, 99);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(44, 20);
			this->textBox9->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(192, 76);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"CP";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(219, 73);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(58, 20);
			this->textBox10->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 76);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Ville";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox3->Location = System::Drawing::Point(53, 73);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(133, 21);
			this->comboBox3->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 49);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Region";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Pays";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox4->Location = System::Drawing::Point(53, 46);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(224, 21);
			this->comboBox4->TabIndex = 17;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox5->Location = System::Drawing::Point(53, 19);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(224, 21);
			this->comboBox5->TabIndex = 16;
			// 
			// InputClientInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(899, 266);
			this->Controls->Add(this->gbxInputClientInserer);
			this->Name = L"InputClientInserer";
			this->Text = L"Insérer un nouveau client";
			this->gbxInputClientInserer->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gbxAdrFac->ResumeLayout(false);
			this->gbxAdrFac->PerformLayout();
			this->gbxAdrLiv->ResumeLayout(false);
			this->gbxAdrLiv->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void tbxNom_Enter(System::Object^ sender, System::EventArgs^ e) { if (this->tbxNom->Text == "Votre Nom") this->tbxNom->Text = ""; }
	private: System::Void tbxNom_Leave(System::Object^ sender, System::EventArgs^ e) { if (this->tbxNom->Text->Trim() == "") this->tbxNom->Text = L"Votre Nom"; }
	private: System::Void tbxPrenom_Enter(System::Object^ sender, System::EventArgs^ e) { if (this->tbxPrenom->Text == "Votre Prénom") this->tbxPrenom->Text = ""; }
	private: System::Void tbxPrenom_Leave(System::Object^ sender, System::EventArgs^ e) { if (this->tbxPrenom->Text->Trim() == "") this->tbxPrenom->Text = L"Votre Prénom"; }
	private: System::Void inputInserer_Annuler(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
	private: System::Void inputClientInserer_Valider(System::Object^ sender, System::EventArgs^ e)
	{
		// Inserer dans CLclient et CLadresse
		this->Close();
	}
};
}
