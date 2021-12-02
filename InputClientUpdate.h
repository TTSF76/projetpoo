#pragma once
#include "CLconnect.h"
#include "CLcommande.h"
#include "UIAction.h"
#include "CLserviceutilitaire.h"
#include "CLadresse.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputClientUpdate
	/// </summary>
	public ref class InputClientUpdate : public System::Windows::Forms::Form
	{
	public:
		InputClientUpdate()
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
		~InputClientUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_information_generale;
	protected:
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::DateTimePicker^ dtpAnniversaire;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::Label^ lblAnniversaire;
	private: System::Windows::Forms::TextBox^ tbxPrenom;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::Button^ btnValider;




	private: System::Windows::Forms::TextBox^ tbxIdClient;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbxRegionL;
	private: System::Windows::Forms::TextBox^ tbxPaysL;
	private: System::Windows::Forms::TextBox^ tbxCPL;
	private: System::Windows::Forms::TextBox^ tbxVilleL;
	private: System::Windows::Forms::TextBox^ tbxCPF;
	private: System::Windows::Forms::TextBox^ tbxVilleF;
	private: System::Windows::Forms::TextBox^ tbxRegionF;
	private: System::Windows::Forms::TextBox^ tbxPaysF;
	private: System::Windows::Forms::Label^ label_IDFacturation;
	private: System::Windows::Forms::ComboBox^ cbxIdFacturation;
	private: System::Windows::Forms::Label^ label_idLivraison;
	private: System::Windows::Forms::ComboBox^ cbxIdLivraison;
	private: System::Windows::Forms::Label^ label_adresse_facturation;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbxResidenceF;
	private: System::Windows::Forms::TextBox^ tbxEtageF;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tbxRueF;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tbxNRueF;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_adresse_livraison;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbxResidenceL;
	private: System::Windows::Forms::TextBox^ tbxEtageL;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbxRueL;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbxNRueL;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ suprAdrLiv;
	private: System::Windows::Forms::Button^ ajoutAdrLiv;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label20;


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
			this->label_information_generale = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dtpAnniversaire = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->lblAnniversaire = (gcnew System::Windows::Forms::Label());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->tbxIdClient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxRegionL = (gcnew System::Windows::Forms::TextBox());
			this->tbxPaysL = (gcnew System::Windows::Forms::TextBox());
			this->tbxCPL = (gcnew System::Windows::Forms::TextBox());
			this->tbxVilleL = (gcnew System::Windows::Forms::TextBox());
			this->tbxCPF = (gcnew System::Windows::Forms::TextBox());
			this->tbxVilleF = (gcnew System::Windows::Forms::TextBox());
			this->tbxRegionF = (gcnew System::Windows::Forms::TextBox());
			this->tbxPaysF = (gcnew System::Windows::Forms::TextBox());
			this->label_IDFacturation = (gcnew System::Windows::Forms::Label());
			this->cbxIdFacturation = (gcnew System::Windows::Forms::ComboBox());
			this->label_idLivraison = (gcnew System::Windows::Forms::Label());
			this->cbxIdLivraison = (gcnew System::Windows::Forms::ComboBox());
			this->label_adresse_facturation = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbxResidenceF = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtageF = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbxRueF = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbxNRueF = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbxResidenceL = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtageL = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbxRueL = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbxNRueL = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->suprAdrLiv = (gcnew System::Windows::Forms::Button());
			this->ajoutAdrLiv = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_information_generale
			// 
			this->label_information_generale->AutoSize = true;
			this->label_information_generale->ForeColor = System::Drawing::Color::Silver;
			this->label_information_generale->Location = System::Drawing::Point(23, 37);
			this->label_information_generale->Name = L"label_information_generale";
			this->label_information_generale->Size = System::Drawing::Size(155, 17);
			this->label_information_generale->TabIndex = 39;
			this->label_information_generale->Text = L"Informations Générales";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(23, 103);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 17);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(23, 136);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 17);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Prénom";
			// 
			// dtpAnniversaire
			// 
			this->dtpAnniversaire->CalendarForeColor = System::Drawing::Color::White;
			this->dtpAnniversaire->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->dtpAnniversaire->Location = System::Drawing::Point(165, 169);
			this->dtpAnniversaire->Margin = System::Windows::Forms::Padding(4);
			this->dtpAnniversaire->Name = L"dtpAnniversaire";
			this->dtpAnniversaire->Size = System::Drawing::Size(218, 22);
			this->dtpAnniversaire->TabIndex = 35;
			// 
			// tbxNom
			// 
			this->tbxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(88, 108);
			this->tbxNom->Margin = System::Windows::Forms::Padding(4);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(295, 15);
			this->tbxNom->TabIndex = 33;
			// 
			// lblAnniversaire
			// 
			this->lblAnniversaire->AutoSize = true;
			this->lblAnniversaire->ForeColor = System::Drawing::Color::Silver;
			this->lblAnniversaire->Location = System::Drawing::Point(26, 172);
			this->lblAnniversaire->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAnniversaire->Name = L"lblAnniversaire";
			this->lblAnniversaire->Size = System::Drawing::Size(128, 17);
			this->lblAnniversaire->TabIndex = 36;
			this->lblAnniversaire->Text = L"Date de Naissance";
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrenom->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenom->Location = System::Drawing::Point(88, 133);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(295, 15);
			this->tbxPrenom->TabIndex = 34;
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(305, 785);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 41;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			// 
			// btnValider
			// 
			this->btnValider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->ForeColor = System::Drawing::Color::White;
			this->btnValider->Location = System::Drawing::Point(123, 785);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 40;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputClientUpdate::btnValider_Click);
			// 
			// tbxIdClient
			// 
			this->tbxIdClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxIdClient->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxIdClient->Enabled = false;
			this->tbxIdClient->ForeColor = System::Drawing::Color::Silver;
			this->tbxIdClient->Location = System::Drawing::Point(115, 81);
			this->tbxIdClient->Margin = System::Windows::Forms::Padding(4);
			this->tbxIdClient->Name = L"tbxIdClient";
			this->tbxIdClient->ReadOnly = true;
			this->tbxIdClient->Size = System::Drawing::Size(268, 15);
			this->tbxIdClient->TabIndex = 46;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(23, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 47;
			this->label2->Text = L"ID du client";
			// 
			// tbxRegionL
			// 
			this->tbxRegionL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRegionL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRegionL->Enabled = false;
			this->tbxRegionL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRegionL->Location = System::Drawing::Point(87, 326);
			this->tbxRegionL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRegionL->Name = L"tbxRegionL";
			this->tbxRegionL->Size = System::Drawing::Size(187, 15);
			this->tbxRegionL->TabIndex = 158;
			// 
			// tbxPaysL
			// 
			this->tbxPaysL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaysL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaysL->Enabled = false;
			this->tbxPaysL->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaysL->Location = System::Drawing::Point(87, 293);
			this->tbxPaysL->Margin = System::Windows::Forms::Padding(4);
			this->tbxPaysL->Name = L"tbxPaysL";
			this->tbxPaysL->Size = System::Drawing::Size(187, 15);
			this->tbxPaysL->TabIndex = 157;
			// 
			// tbxCPL
			// 
			this->tbxCPL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCPL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCPL->Enabled = false;
			this->tbxCPL->ForeColor = System::Drawing::Color::Silver;
			this->tbxCPL->Location = System::Drawing::Point(311, 362);
			this->tbxCPL->Margin = System::Windows::Forms::Padding(4);
			this->tbxCPL->Name = L"tbxCPL";
			this->tbxCPL->Size = System::Drawing::Size(73, 15);
			this->tbxCPL->TabIndex = 156;
			// 
			// tbxVilleL
			// 
			this->tbxVilleL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxVilleL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxVilleL->Enabled = false;
			this->tbxVilleL->ForeColor = System::Drawing::Color::Silver;
			this->tbxVilleL->Location = System::Drawing::Point(87, 361);
			this->tbxVilleL->Margin = System::Windows::Forms::Padding(4);
			this->tbxVilleL->Name = L"tbxVilleL";
			this->tbxVilleL->Size = System::Drawing::Size(127, 15);
			this->tbxVilleL->TabIndex = 155;
			// 
			// tbxCPF
			// 
			this->tbxCPF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCPF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCPF->Enabled = false;
			this->tbxCPF->ForeColor = System::Drawing::Color::Silver;
			this->tbxCPF->Location = System::Drawing::Point(311, 611);
			this->tbxCPF->Margin = System::Windows::Forms::Padding(4);
			this->tbxCPF->Name = L"tbxCPF";
			this->tbxCPF->Size = System::Drawing::Size(86, 15);
			this->tbxCPF->TabIndex = 154;
			// 
			// tbxVilleF
			// 
			this->tbxVilleF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxVilleF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxVilleF->Enabled = false;
			this->tbxVilleF->ForeColor = System::Drawing::Color::Silver;
			this->tbxVilleF->Location = System::Drawing::Point(87, 611);
			this->tbxVilleF->Margin = System::Windows::Forms::Padding(4);
			this->tbxVilleF->Name = L"tbxVilleF";
			this->tbxVilleF->Size = System::Drawing::Size(140, 15);
			this->tbxVilleF->TabIndex = 153;
			// 
			// tbxRegionF
			// 
			this->tbxRegionF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRegionF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRegionF->Enabled = false;
			this->tbxRegionF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRegionF->Location = System::Drawing::Point(87, 577);
			this->tbxRegionF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRegionF->Name = L"tbxRegionF";
			this->tbxRegionF->Size = System::Drawing::Size(200, 15);
			this->tbxRegionF->TabIndex = 152;
			// 
			// tbxPaysF
			// 
			this->tbxPaysF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaysF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaysF->Enabled = false;
			this->tbxPaysF->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaysF->Location = System::Drawing::Point(87, 541);
			this->tbxPaysF->Margin = System::Windows::Forms::Padding(4);
			this->tbxPaysF->Name = L"tbxPaysF";
			this->tbxPaysF->Size = System::Drawing::Size(200, 15);
			this->tbxPaysF->TabIndex = 151;
			// 
			// label_IDFacturation
			// 
			this->label_IDFacturation->AutoSize = true;
			this->label_IDFacturation->ForeColor = System::Drawing::Color::Silver;
			this->label_IDFacturation->Location = System::Drawing::Point(22, 498);
			this->label_IDFacturation->Name = L"label_IDFacturation";
			this->label_IDFacturation->Size = System::Drawing::Size(78, 17);
			this->label_IDFacturation->TabIndex = 150;
			this->label_IDFacturation->Text = L"Id_adresse";
			// 
			// cbxIdFacturation
			// 
			this->cbxIdFacturation->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxIdFacturation->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxIdFacturation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxIdFacturation->ForeColor = System::Drawing::Color::Silver;
			this->cbxIdFacturation->FormattingEnabled = true;
			this->cbxIdFacturation->Location = System::Drawing::Point(110, 498);
			this->cbxIdFacturation->Margin = System::Windows::Forms::Padding(4);
			this->cbxIdFacturation->Name = L"cbxIdFacturation";
			this->cbxIdFacturation->Size = System::Drawing::Size(104, 24);
			this->cbxIdFacturation->TabIndex = 149;
			this->cbxIdFacturation->SelectedIndexChanged += gcnew System::EventHandler(this, &InputClientUpdate::cbxIdFacturation_SelectedIndexChanged);
			// 
			// label_idLivraison
			// 
			this->label_idLivraison->AutoSize = true;
			this->label_idLivraison->ForeColor = System::Drawing::Color::Silver;
			this->label_idLivraison->Location = System::Drawing::Point(26, 245);
			this->label_idLivraison->Name = L"label_idLivraison";
			this->label_idLivraison->Size = System::Drawing::Size(78, 17);
			this->label_idLivraison->TabIndex = 148;
			this->label_idLivraison->Text = L"Id_adresse";
			// 
			// cbxIdLivraison
			// 
			this->cbxIdLivraison->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxIdLivraison->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxIdLivraison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxIdLivraison->ForeColor = System::Drawing::Color::Silver;
			this->cbxIdLivraison->FormattingEnabled = true;
			this->cbxIdLivraison->Location = System::Drawing::Point(110, 245);
			this->cbxIdLivraison->Margin = System::Windows::Forms::Padding(4);
			this->cbxIdLivraison->Name = L"cbxIdLivraison";
			this->cbxIdLivraison->Size = System::Drawing::Size(104, 24);
			this->cbxIdLivraison->TabIndex = 147;
			this->cbxIdLivraison->SelectedIndexChanged += gcnew System::EventHandler(this, &InputClientUpdate::cbxIdLivraison_SelectedIndexChanged);
			// 
			// label_adresse_facturation
			// 
			this->label_adresse_facturation->AutoSize = true;
			this->label_adresse_facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_adresse_facturation->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_facturation->Location = System::Drawing::Point(22, 477);
			this->label_adresse_facturation->Name = L"label_adresse_facturation";
			this->label_adresse_facturation->Size = System::Drawing::Size(177, 17);
			this->label_adresse_facturation->TabIndex = 146;
			this->label_adresse_facturation->Text = L"Adresse de Facturation";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(162, 675);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 17);
			this->label11->TabIndex = 145;
			this->label11->Text = L"Résidence";
			// 
			// tbxResidenceF
			// 
			this->tbxResidenceF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidenceF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidenceF->Enabled = false;
			this->tbxResidenceF->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidenceF->Location = System::Drawing::Point(239, 675);
			this->tbxResidenceF->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceF->Name = L"tbxResidenceF";
			this->tbxResidenceF->Size = System::Drawing::Size(158, 15);
			this->tbxResidenceF->TabIndex = 144;
			// 
			// tbxEtageF
			// 
			this->tbxEtageF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageF->Enabled = false;
			this->tbxEtageF->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageF->Location = System::Drawing::Point(87, 675);
			this->tbxEtageF->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageF->Name = L"tbxEtageF";
			this->tbxEtageF->Size = System::Drawing::Size(70, 15);
			this->tbxEtageF->TabIndex = 143;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Silver;
			this->label12->Location = System::Drawing::Point(26, 675);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 17);
			this->label12->TabIndex = 142;
			this->label12->Text = L"Etage";
			// 
			// tbxRueF
			// 
			this->tbxRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueF->Enabled = false;
			this->tbxRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueF->Location = System::Drawing::Point(197, 645);
			this->tbxRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueF->Name = L"tbxRueF";
			this->tbxRueF->Size = System::Drawing::Size(200, 15);
			this->tbxRueF->TabIndex = 141;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Silver;
			this->label13->Location = System::Drawing::Point(162, 643);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 17);
			this->label13->TabIndex = 140;
			this->label13->Text = L"Rue";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(25, 643);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 17);
			this->label14->TabIndex = 139;
			this->label14->Text = L"N° Rue";
			// 
			// tbxNRueF
			// 
			this->tbxNRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueF->Enabled = false;
			this->tbxNRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueF->Location = System::Drawing::Point(87, 643);
			this->tbxNRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueF->Name = L"tbxNRueF";
			this->tbxNRueF->Size = System::Drawing::Size(70, 15);
			this->tbxNRueF->TabIndex = 138;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Silver;
			this->label15->Location = System::Drawing::Point(271, 609);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 17);
			this->label15->TabIndex = 137;
			this->label15->Text = L"CP";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Silver;
			this->label16->Location = System::Drawing::Point(25, 609);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 17);
			this->label16->TabIndex = 136;
			this->label16->Text = L"Ville";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(26, 575);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 135;
			this->label1->Text = L"Region";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(25, 543);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 17);
			this->label3->TabIndex = 134;
			this->label3->Text = L"Pays";
			// 
			// label_adresse_livraison
			// 
			this->label_adresse_livraison->AutoSize = true;
			this->label_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_adresse_livraison->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_livraison->Location = System::Drawing::Point(26, 221);
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Size = System::Drawing::Size(161, 17);
			this->label_adresse_livraison->TabIndex = 133;
			this->label_adresse_livraison->Text = L"Adresse de Livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(162, 426);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 17);
			this->label8->TabIndex = 132;
			this->label8->Text = L"Résidence";
			// 
			// tbxResidenceL
			// 
			this->tbxResidenceL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidenceL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidenceL->Enabled = false;
			this->tbxResidenceL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxResidenceL->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidenceL->Location = System::Drawing::Point(239, 426);
			this->tbxResidenceL->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceL->Name = L"tbxResidenceL";
			this->tbxResidenceL->Size = System::Drawing::Size(145, 15);
			this->tbxResidenceL->TabIndex = 131;
			// 
			// tbxEtageL
			// 
			this->tbxEtageL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageL->Enabled = false;
			this->tbxEtageL->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageL->Location = System::Drawing::Point(87, 426);
			this->tbxEtageL->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageL->Name = L"tbxEtageL";
			this->tbxEtageL->Size = System::Drawing::Size(57, 15);
			this->tbxEtageL->TabIndex = 130;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(26, 426);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 129;
			this->label7->Text = L"Etage";
			// 
			// tbxRueL
			// 
			this->tbxRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueL->Enabled = false;
			this->tbxRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueL->Location = System::Drawing::Point(197, 394);
			this->tbxRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueL->Name = L"tbxRueL";
			this->tbxRueL->Size = System::Drawing::Size(187, 15);
			this->tbxRueL->TabIndex = 128;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(162, 390);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 127;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(25, 390);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 126;
			this->label5->Text = L"N° Rue";
			// 
			// tbxNRueL
			// 
			this->tbxNRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueL->Enabled = false;
			this->tbxNRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueL->Location = System::Drawing::Point(87, 392);
			this->tbxNRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueL->Name = L"tbxNRueL";
			this->tbxNRueL->Size = System::Drawing::Size(57, 15);
			this->tbxNRueL->TabIndex = 125;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(277, 362);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 124;
			this->label4->Text = L"CP";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(26, 293);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 17);
			this->label9->TabIndex = 121;
			this->label9->Text = L"Pays";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(26, 360);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 17);
			this->label10->TabIndex = 123;
			this->label10->Text = L"Ville";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Silver;
			this->label19->Location = System::Drawing::Point(26, 326);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 17);
			this->label19->TabIndex = 122;
			this->label19->Text = L"Region";
			// 
			// suprAdrLiv
			// 
			this->suprAdrLiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->suprAdrLiv->FlatAppearance->BorderSize = 0;
			this->suprAdrLiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->suprAdrLiv->ForeColor = System::Drawing::Color::White;
			this->suprAdrLiv->Location = System::Drawing::Point(222, 245);
			this->suprAdrLiv->Margin = System::Windows::Forms::Padding(4);
			this->suprAdrLiv->Name = L"suprAdrLiv";
			this->suprAdrLiv->Size = System::Drawing::Size(174, 24);
			this->suprAdrLiv->TabIndex = 160;
			this->suprAdrLiv->Text = L"Supprimer cette adresse";
			this->suprAdrLiv->UseVisualStyleBackColor = false;
			this->suprAdrLiv->Click += gcnew System::EventHandler(this, &InputClientUpdate::suprAdrLiv_Click);
			// 
			// ajoutAdrLiv
			// 
			this->ajoutAdrLiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->ajoutAdrLiv->FlatAppearance->BorderSize = 0;
			this->ajoutAdrLiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ajoutAdrLiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5.3F));
			this->ajoutAdrLiv->ForeColor = System::Drawing::Color::White;
			this->ajoutAdrLiv->Location = System::Drawing::Point(404, 245);
			this->ajoutAdrLiv->Margin = System::Windows::Forms::Padding(4);
			this->ajoutAdrLiv->Name = L"ajoutAdrLiv";
			this->ajoutAdrLiv->Size = System::Drawing::Size(192, 24);
			this->ajoutAdrLiv->TabIndex = 159;
			this->ajoutAdrLiv->Text = L"Créer nouvelle adresse de livraison";
			this->ajoutAdrLiv->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(222, 498);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 24);
			this->button1->TabIndex = 162;
			this->button1->Text = L"Supprimer cette adresse";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InputClientUpdate::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5.3F));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(404, 498);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 24);
			this->button2->TabIndex = 161;
			this->button2->Text = L"Créer nouvelle adresse de facturation";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Yellow;
			this->label20->Location = System::Drawing::Point(12, 723);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(591, 34);
			this->label20->TabIndex = 163;
			this->label20->Text = L"Note : une adresse ne peut pas être supprimée si elle est unique pour le client. "
				L"\r\nLa suppression n\'aura aucun effet le cas échéant.";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// InputClientUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(639, 826);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->suprAdrLiv);
			this->Controls->Add(this->ajoutAdrLiv);
			this->Controls->Add(this->tbxRegionL);
			this->Controls->Add(this->tbxPaysL);
			this->Controls->Add(this->tbxCPL);
			this->Controls->Add(this->tbxVilleL);
			this->Controls->Add(this->tbxCPF);
			this->Controls->Add(this->tbxVilleF);
			this->Controls->Add(this->tbxRegionF);
			this->Controls->Add(this->tbxPaysF);
			this->Controls->Add(this->label_IDFacturation);
			this->Controls->Add(this->cbxIdFacturation);
			this->Controls->Add(this->label_idLivraison);
			this->Controls->Add(this->cbxIdLivraison);
			this->Controls->Add(this->label_adresse_facturation);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tbxResidenceF);
			this->Controls->Add(this->tbxEtageF);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->tbxRueF);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->tbxNRueF);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label_adresse_livraison);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbxResidenceL);
			this->Controls->Add(this->tbxEtageL);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbxRueL);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbxNRueL);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbxIdClient);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->label_information_generale);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->dtpAnniversaire);
			this->Controls->Add(this->tbxNom);
			this->Controls->Add(this->lblAnniversaire);
			this->Controls->Add(this->tbxPrenom);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"InputClientUpdate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InputClientUpdate";
			this->Load += gcnew System::EventHandler(this, &InputClientUpdate::InputClientUpdate_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cbxIdFacturation_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	NS_Utilitaire_svc::CLserviceutilitaire^ info_adresse = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_adresse_facturation;
	vecteur_adresse_facturation = info_adresse->miseAjourAdresseFacturation(vecteur_adresse_facturation, int::Parse(this->cbxIdFacturation->Text));

	this->tbxPaysF->Text = (gcnew String(vecteur_adresse_facturation[7].c_str()));
	this->tbxRegionF->Text = (gcnew String(vecteur_adresse_facturation[6].c_str()));
	this->tbxVilleF->Text = (gcnew String(vecteur_adresse_facturation[5].c_str()));
	this->tbxCPF->Text = (gcnew String(vecteur_adresse_facturation[4].c_str()));
	this->tbxNRueF->Text = (gcnew String(vecteur_adresse_facturation[1].c_str()));
	this->tbxRueF->Text = (gcnew String(vecteur_adresse_facturation[0].c_str()));
	this->tbxEtageF->Text = (gcnew String(vecteur_adresse_facturation[3].c_str()));
	this->tbxResidenceF->Text = (gcnew String(vecteur_adresse_facturation[2].c_str()));
}
private: System::Void cbxIdLivraison_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	NS_Utilitaire_svc::CLserviceutilitaire^ info_adresse = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_adresse_livraison;
	vecteur_adresse_livraison = info_adresse->miseAjourAdresseLivraison(vecteur_adresse_livraison, int::Parse(this->cbxIdLivraison->Text));

	this->tbxPaysL->Text = (gcnew String(vecteur_adresse_livraison[7].c_str()));
	this->tbxRegionL->Text = (gcnew String(vecteur_adresse_livraison[6].c_str()));
	this->tbxVilleL->Text = (gcnew String(vecteur_adresse_livraison[5].c_str()));
	this->tbxCPL->Text = (gcnew String(vecteur_adresse_livraison[4].c_str()));
	this->tbxNRueL->Text = (gcnew String(vecteur_adresse_livraison[1].c_str()));
	this->tbxRueL->Text = (gcnew String(vecteur_adresse_livraison[0].c_str()));
	this->tbxEtageL->Text = (gcnew String(vecteur_adresse_livraison[3].c_str()));
	this->tbxResidenceL->Text = (gcnew String(vecteur_adresse_livraison[2].c_str()));
}
private: System::Void InputClientUpdate_Load(System::Object^ sender, System::EventArgs^ e) {
	this->tbxIdClient->Text = NS_map_client::CLclient::cvalue;
	NS_Utilitaire_svc::CLserviceutilitaire^ nomprenom = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_nom_prenom;
	vecteur_nom_prenom = nomprenom->miseAjourNomPrenom(vecteur_nom_prenom, int::Parse(this->tbxIdClient->Text));

	this->tbxPrenom->Text = (gcnew String(vecteur_nom_prenom[1].c_str()));
	this->tbxNom->Text = (gcnew String(vecteur_nom_prenom[0].c_str()));
	this->dtpAnniversaire->Value = System::DateTime::Parse(gcnew String(vecteur_nom_prenom[2].c_str()));

	NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_facturation = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_id_adresse_facturation;
	vecteur_id_adresse_facturation = id_adresse_facturation->repertorierIdAdresseFacturation(vecteur_id_adresse_facturation, int::Parse(this->tbxIdClient->Text));
	this->cbxIdFacturation->Items->Add(gcnew String(vecteur_id_adresse_facturation[0].c_str()));


	NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_livraison = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_id_adresse_livraison;
	vecteur_id_adresse_livraison = id_adresse_livraison->repertorierIdAdresseLivraison(vecteur_id_adresse_livraison, int::Parse(this->tbxIdClient->Text));
	this->cbxIdLivraison->Items->Add(gcnew String(vecteur_id_adresse_livraison[0].c_str()));
}
private: System::Void suprAdrLiv_Click(System::Object^ sender, System::EventArgs^ e) {
	CLadresse^ adresse = gcnew CLadresse;
	adresse->setIdAdress(int::Parse(cbxIdLivraison->Text));
	UIAction::deleteButtonAdresseLiv(adresse);
	
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	CLadresse^ adresse = gcnew CLadresse;
	adresse->setIdAdress(int::Parse(cbxIdFacturation->Text));
	UIAction::deleteButtonAdresseFac(adresse);
	this->Close();
}
private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_map_client::CLclient^ client = gcnew NS_map_client::CLclient;
	/*CLadresse^ adresse_livraison = gcnew CLadresse;
	CLadresse^ adresse_facturation = gcnew CLadresse;
	client->setAdresseFacturation(adresse_facturation);
	client->setAdresseLivraison(adresse_livraison);*/
	client->setPrenom(tbxPrenom->Text);
	client->setNom(tbxNom->Text);
	client->setDateNaissance(this->dtpAnniversaire->Value.ToString("yyyy-MM-dd"));
	UIAction::validerUpdateButtonClient(client);
	this->Close();
}
};
}
