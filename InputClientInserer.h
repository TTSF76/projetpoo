#pragma once

#include "CLconnect.h"
#include "CLclient.h"
#include "UIAction.h"
#include "CLserviceutilitaire.h"


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
			NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_ville;
			list_ville = ville->repertorierVilles(list_ville);
			for (int i = 0; i < list_ville.size(); i++) {
				this->cbxAdrLivVille->Items->Add(gcnew String(list_ville[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_pays;
			list_pays= pays->repertorierPays(list_pays);
			for (int i = 0; i < list_pays.size(); i++) {
				this->cbxAdrLivPays->Items->Add(gcnew String(list_pays[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ code_postal = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_code_postaux;
			list_code_postaux = code_postal->repertorierCodePostaux(list_code_postaux);
			for (int i = 0; i < list_code_postaux.size(); i++) {
				this->cbxAdrLivCP->Items->Add(gcnew String(list_code_postaux[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_region;
			list_region = region->repertorierRegion(list_region);
			for (int i = 0; i < list_region.size(); i++) {
				this->cbxAdrLivRegion->Items->Add(gcnew String(list_region[i].c_str()));
			}
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




	private: System::Windows::Forms::ComboBox^ cbxAdrLivPays;
	private: System::Windows::Forms::ComboBox^ cbxAdrLivRegion;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbxResidenceL;

	private: System::Windows::Forms::TextBox^ tbxEtageL;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbxRueL;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbxNRueL;



	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::ComboBox^ cbxAdrLivVille;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbxResidenceF;

	private: System::Windows::Forms::TextBox^ tbxEtageF;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbxRueF;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tbxNRueF;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::TextBox^ tbxPrenom;
	private: System::Windows::Forms::Label^ lblAnniversaire;
	private: System::Windows::Forms::DateTimePicker^ dtpAnniversaire;
	private: System::Windows::Forms::Label^ label_information_generale;
	private: System::Windows::Forms::Label^ label_adresse_facturation;
	private: System::Windows::Forms::Label^ label_adresse_livraison;
private: System::Windows::Forms::ComboBox^ cbxAdrLivCP;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputClientInserer::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbxResidenceF = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtageF = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbxRueF = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbxNRueF = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbxResidenceL = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtageL = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbxRueL = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbxNRueL = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbxAdrLivVille = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbxAdrLivRegion = (gcnew System::Windows::Forms::ComboBox());
			this->cbxAdrLivPays = (gcnew System::Windows::Forms::ComboBox());
			this->dtpAnniversaire = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblAnniversaire = (gcnew System::Windows::Forms::Label());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label_information_generale = (gcnew System::Windows::Forms::Label());
			this->label_adresse_facturation = (gcnew System::Windows::Forms::Label());
			this->label_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->cbxAdrLivCP = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(983, 284);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 28);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &InputClientInserer::inputInserer_Annuler);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(801, 284);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 28);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InputClientInserer::inputClientInserer_Valider);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(950, 190);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 17);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Résidence";
			// 
			// tbxResidenceF
			// 
			this->tbxResidenceF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidenceF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidenceF->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidenceF->Location = System::Drawing::Point(1037, 192);
			this->tbxResidenceF->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceF->Name = L"tbxResidenceF";
			this->tbxResidenceF->Size = System::Drawing::Size(145, 15);
			this->tbxResidenceF->TabIndex = 30;
			// 
			// tbxEtageF
			// 
			this->tbxEtageF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageF->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageF->Location = System::Drawing::Point(873, 192);
			this->tbxEtageF->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageF->Name = L"tbxEtageF";
			this->tbxEtageF->Size = System::Drawing::Size(57, 15);
			this->tbxEtageF->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(811, 190);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Etage";
			// 
			// tbxRueF
			// 
			this->tbxRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueF->Location = System::Drawing::Point(995, 160);
			this->tbxRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueF->Name = L"tbxRueF";
			this->tbxRueF->Size = System::Drawing::Size(187, 15);
			this->tbxRueF->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(950, 158);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 17);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Rue";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Silver;
			this->label12->Location = System::Drawing::Point(811, 158);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 25;
			this->label12->Text = L"N° Rue";
			// 
			// tbxNRueF
			// 
			this->tbxNRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueF->Location = System::Drawing::Point(873, 160);
			this->tbxNRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueF->Name = L"tbxNRueF";
			this->tbxNRueF->Size = System::Drawing::Size(57, 15);
			this->tbxNRueF->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Silver;
			this->label13->Location = System::Drawing::Point(1070, 126);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 17);
			this->label13->TabIndex = 23;
			this->label13->Text = L"CP";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->ForeColor = System::Drawing::Color::Silver;
			this->textBox10->Location = System::Drawing::Point(1106, 128);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(76, 15);
			this->textBox10->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(811, 126);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 17);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Ville";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->ForeColor = System::Drawing::Color::Silver;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox3->Location = System::Drawing::Point(872, 123);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(176, 24);
			this->comboBox3->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Silver;
			this->label15->Location = System::Drawing::Point(811, 92);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Region";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Silver;
			this->label16->Location = System::Drawing::Point(811, 59);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 17);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Pays";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->ForeColor = System::Drawing::Color::Silver;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox4->Location = System::Drawing::Point(872, 90);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(297, 24);
			this->comboBox4->TabIndex = 17;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->ForeColor = System::Drawing::Color::Silver;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->comboBox5->Location = System::Drawing::Point(872, 56);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(297, 24);
			this->comboBox5->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(547, 192);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Résidence";
			// 
			// tbxResidenceL
			// 
			this->tbxResidenceL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidenceL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidenceL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxResidenceL->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidenceL->Location = System::Drawing::Point(633, 192);
			this->tbxResidenceL->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceL->Name = L"tbxResidenceL";
			this->tbxResidenceL->Size = System::Drawing::Size(145, 15);
			this->tbxResidenceL->TabIndex = 14;
			// 
			// tbxEtageL
			// 
			this->tbxEtageL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageL->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageL->Location = System::Drawing::Point(481, 192);
			this->tbxEtageL->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageL->Name = L"tbxEtageL";
			this->tbxEtageL->Size = System::Drawing::Size(57, 15);
			this->tbxEtageL->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(420, 192);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Etage";
			// 
			// tbxRueL
			// 
			this->tbxRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueL->Location = System::Drawing::Point(591, 160);
			this->tbxRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueL->Name = L"tbxRueL";
			this->tbxRueL->Size = System::Drawing::Size(187, 15);
			this->tbxRueL->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(547, 158);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(419, 156);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"N° Rue";
			// 
			// tbxNRueL
			// 
			this->tbxNRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueL->Location = System::Drawing::Point(481, 158);
			this->tbxNRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueL->Name = L"tbxNRueL";
			this->tbxNRueL->Size = System::Drawing::Size(57, 15);
			this->tbxNRueL->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(640, 122);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"CP";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(420, 126);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ville";
			// 
			// cbxAdrLivVille
			// 
			this->cbxAdrLivVille->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbxAdrLivVille->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxAdrLivVille->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrLivVille->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrLivVille->FormattingEnabled = true;
			this->cbxAdrLivVille->Location = System::Drawing::Point(481, 118);
			this->cbxAdrLivVille->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrLivVille->Name = L"cbxAdrLivVille";
			this->cbxAdrLivVille->Size = System::Drawing::Size(151, 24);
			this->cbxAdrLivVille->TabIndex = 4;
			this->cbxAdrLivVille->SelectedIndexChanged += gcnew System::EventHandler(this, &InputClientInserer::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(420, 92);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Region";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(420, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pays";
			// 
			// cbxAdrLivRegion
			// 
			this->cbxAdrLivRegion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrLivRegion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxAdrLivRegion->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrLivRegion->FormattingEnabled = true;
			this->cbxAdrLivRegion->Location = System::Drawing::Point(481, 85);
			this->cbxAdrLivRegion->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrLivRegion->Name = L"cbxAdrLivRegion";
			this->cbxAdrLivRegion->Size = System::Drawing::Size(297, 24);
			this->cbxAdrLivRegion->TabIndex = 1;
			// 
			// cbxAdrLivPays
			// 
			this->cbxAdrLivPays->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrLivPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxAdrLivPays->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrLivPays->FormattingEnabled = true;
			this->cbxAdrLivPays->Location = System::Drawing::Point(481, 51);
			this->cbxAdrLivPays->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrLivPays->Name = L"cbxAdrLivPays";
			this->cbxAdrLivPays->Size = System::Drawing::Size(297, 24);
			this->cbxAdrLivPays->TabIndex = 0;
			// 
			// dtpAnniversaire
			// 
			this->dtpAnniversaire->CalendarForeColor = System::Drawing::Color::White;
			this->dtpAnniversaire->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->dtpAnniversaire->Location = System::Drawing::Point(172, 145);
			this->dtpAnniversaire->Margin = System::Windows::Forms::Padding(4);
			this->dtpAnniversaire->Name = L"dtpAnniversaire";
			this->dtpAnniversaire->Size = System::Drawing::Size(230, 22);
			this->dtpAnniversaire->TabIndex = 15;
			// 
			// lblAnniversaire
			// 
			this->lblAnniversaire->AutoSize = true;
			this->lblAnniversaire->ForeColor = System::Drawing::Color::Silver;
			this->lblAnniversaire->Location = System::Drawing::Point(33, 148);
			this->lblAnniversaire->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAnniversaire->Name = L"lblAnniversaire";
			this->lblAnniversaire->Size = System::Drawing::Size(128, 17);
			this->lblAnniversaire->TabIndex = 17;
			this->lblAnniversaire->Text = L"Date de Naissance";
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrenom->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenom->Location = System::Drawing::Point(98, 85);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(295, 15);
			this->tbxPrenom->TabIndex = 12;
			this->tbxPrenom->Enter += gcnew System::EventHandler(this, &InputClientInserer::tbxPrenom_Enter);
			this->tbxPrenom->Leave += gcnew System::EventHandler(this, &InputClientInserer::tbxPrenom_Leave);
			// 
			// tbxNom
			// 
			this->tbxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(98, 60);
			this->tbxNom->Margin = System::Windows::Forms::Padding(4);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(295, 15);
			this->tbxNom->TabIndex = 9;
			this->tbxNom->Enter += gcnew System::EventHandler(this, &InputClientInserer::tbxNom_Enter);
			this->tbxNom->Leave += gcnew System::EventHandler(this, &InputClientInserer::tbxNom_Leave);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(33, 88);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 17);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Prénom";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(33, 55);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 17);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Nom";
			// 
			// label_information_generale
			// 
			this->label_information_generale->AutoSize = true;
			this->label_information_generale->ForeColor = System::Drawing::Color::Silver;
			this->label_information_generale->Location = System::Drawing::Point(58, 9);
			this->label_information_generale->Name = L"label_information_generale";
			this->label_information_generale->Size = System::Drawing::Size(155, 17);
			this->label_information_generale->TabIndex = 32;
			this->label_information_generale->Text = L"Informations Générales";
			// 
			// label_adresse_facturation
			// 
			this->label_adresse_facturation->AutoSize = true;
			this->label_adresse_facturation->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_facturation->Location = System::Drawing::Point(869, 9);
			this->label_adresse_facturation->Name = L"label_adresse_facturation";
			this->label_adresse_facturation->Size = System::Drawing::Size(155, 17);
			this->label_adresse_facturation->TabIndex = 33;
			this->label_adresse_facturation->Text = L"Adresse de Facturation";
			// 
			// label_adresse_livraison
			// 
			this->label_adresse_livraison->AutoSize = true;
			this->label_adresse_livraison->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_livraison->Location = System::Drawing::Point(478, 9);
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Size = System::Drawing::Size(141, 17);
			this->label_adresse_livraison->TabIndex = 34;
			this->label_adresse_livraison->Text = L"Adresse de Livraison";
			// 
			// cbxAdrLivCP
			// 
			this->cbxAdrLivCP->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxAdrLivCP->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxAdrLivCP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrLivCP->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrLivCP->FormattingEnabled = true;
			this->cbxAdrLivCP->Location = System::Drawing::Point(674, 118);
			this->cbxAdrLivCP->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrLivCP->Name = L"cbxAdrLivCP";
			this->cbxAdrLivCP->Size = System::Drawing::Size(104, 24);
			this->cbxAdrLivCP->TabIndex = 35;
			this->cbxAdrLivCP->SelectedIndexChanged += gcnew System::EventHandler(this, &InputClientInserer::cbxAdrLivCP_SelectedIndexChanged);
			// 
			// InputClientInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1201, 353);
			this->Controls->Add(this->cbxAdrLivCP);
			this->Controls->Add(this->label_adresse_livraison);
			this->Controls->Add(this->label_adresse_facturation);
			this->Controls->Add(this->label_information_generale);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbxResidenceF);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->tbxEtageF);
			this->Controls->Add(this->tbxResidenceL);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tbxRueF);
			this->Controls->Add(this->tbxEtageL);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbxNRueF);
			this->Controls->Add(this->dtpAnniversaire);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tbxRueL);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->tbxNom);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->lblAnniversaire);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->tbxPrenom);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->tbxNRueL);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->cbxAdrLivPays);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cbxAdrLivRegion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbxAdrLivVille);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1219, 400);
			this->MinimumSize = System::Drawing::Size(1219, 400);
			this->Name = L"InputClientInserer";
			this->Text = L"Insérer un nouveau client";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void tbxNom_Enter(System::Object^ sender, System::EventArgs^ e) { if (this->tbxNom->Text == "Votre Nom") this->tbxNom->Text = ""; }
	private: System::Void tbxNom_Leave(System::Object^ sender, System::EventArgs^ e) { if (this->tbxNom->Text->Trim() == "") this->tbxNom->Text = L"Votre Nom"; }
	private: System::Void tbxPrenom_Enter(System::Object^ sender, System::EventArgs^ e) { if (this->tbxPrenom->Text == "Votre Prénom") this->tbxPrenom->Text = ""; }
	private: System::Void tbxPrenom_Leave(System::Object^ sender, System::EventArgs^ e) { if (this->tbxPrenom->Text->Trim() == "") this->tbxPrenom->Text = L"Votre Prénom"; }
	private: System::Void inputInserer_Annuler(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
	private: System::Void inputClientInserer_Valider(System::Object^ sender, System::EventArgs^ e)
	{
		NS_map_client::CLclient^ client = gcnew NS_map_client::CLclient;
		if (tbxNom->Text->Length == 0 || tbxPrenom->Text->Length == 0 || tbxNRueL->Text->Length == 0 || tbxRueL->Text->Length == 0 || tbxEtageL->Text->Length == 0 ||
			tbxNRueF->Text->Length == 0 || tbxRueF->Text->Length == 0 || tbxEtageF->Text->Length == 0 || tbxResidenceF->Text->Length == 0) {
			MessageBox::Show("Vous n'avez pas renseigné tous les champs", "Erreur", MessageBoxButtons::OK);
			return;
		}
		CLadresse^ adresse_facturation = gcnew CLadresse;
		CLadresse^ adresse_livraison = gcnew CLadresse;
		client->setNom(this->tbxNom->Text);
		client->setPrenom(this->tbxPrenom->Text);
		client->setDateNaissance(this->dtpAnniversaire->Value.ToString("yyyy-MM-dd"));
		adresse_livraison->setVille(1);
		adresse_livraison->setNumeroRue(tbxNRueL->Text);
		adresse_livraison->setRue(tbxRueL->Text);
		adresse_livraison->setNumeroEtage(int::Parse(tbxEtageL->Text));
		adresse_livraison->setNomResidence(tbxResidenceL->Text);
		adresse_facturation->setVille(1);
		adresse_facturation->setNumeroRue(tbxNRueF->Text);
		adresse_facturation->setRue(tbxRueF->Text);
		adresse_facturation->setNumeroEtage(int::Parse(tbxEtageF->Text));
		adresse_facturation->setNomResidence(tbxResidenceF->Text);
		client->setAdresseLivraison(adresse_livraison);
		client->setAdresseFacturation(adresse_facturation);
		UIAction::validerButtonClient(this, client);
		this->Close();
	}
private: System::Void gbxInputClientInserer_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox_CP_liv_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}



private: System::Void cbxAdrLivCP_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();

	std::vector<std::string> vecteur_ville;
	std::vector<std::string> vecteur_region;
	std::vector<std::string> vecteur_pays;

		cbxAdrLivVille->Enabled = false;
		cbxAdrLivVille->Items->Clear();
		vecteur_ville = ville->miseAjourVilleCBCP(vecteur_ville, this->cbxAdrLivCP->Text);
		for (int i = 0; i < vecteur_ville.size(); i++) {
			this->cbxAdrLivVille->Items->Add(gcnew String(vecteur_ville[i].c_str()));
		}

		cbxAdrLivRegion->Enabled = false;
		cbxAdrLivRegion->Items->Clear();
		vecteur_region = region->miseAjourRegionCBCP(vecteur_region, this->cbxAdrLivCP->Text);
		for (int i = 0; i < vecteur_region.size(); i++) {
			this->cbxAdrLivRegion->Items->Add(gcnew String(vecteur_region[i].c_str()));
		}

		cbxAdrLivPays->Enabled = false;
		cbxAdrLivPays->Items->Clear();
		vecteur_pays = pays->miseAjourPaysCBCP(vecteur_pays, this->cbxAdrLivCP->Text);
		for (int i = 0; i < vecteur_region.size(); i++) {
			this->cbxAdrLivPays->Items->Add(gcnew String(vecteur_pays[i].c_str()));
		}


	cbxAdrLivVille->Enabled = true;
	cbxAdrLivRegion->Enabled = true;
	cbxAdrLivPays->Enabled = true;
}
};
}

