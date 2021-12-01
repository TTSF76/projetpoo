#pragma once

#include "CLconnect.h"
#include "CLcommande.h"
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
			NS_Utilitaire_svc::CLserviceutilitaire^ id_client = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_id_client;
			list_id_client = id_client->repertorierIdClients(list_id_client);
			for (int i = 0; i < list_id_client.size(); i++) {
				this->cbxIdClient->Items->Add(gcnew String(list_id_client[i].c_str()));
		
			}

			/*NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_facturation = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_id_adresse_facturation;
			list_id_adresse_facturation= id_adresse_facturation->repertorierIdAdresseFacturation(list_id_adresse_facturation);
			for (int i = 0; i < list_id_client.size(); i++) {
				this->cbxIdClient->Items->Add(gcnew String(list_id_client[i].c_str()));

			}*/
			
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


	protected:






















	private: System::Windows::Forms::DateTimePicker^ dtpPaiementDate;



	private: System::Windows::Forms::Label^ lblPaiementDate;

	private: System::Windows::Forms::Label^ lblPaiementMoyen;
	private: System::Windows::Forms::ComboBox^ cbxIdClient;

	private: System::Windows::Forms::TextBox^ tbxPaiementNombre;






	private: System::Windows::Forms::Label^ lblPaiementNombre;
	private: System::Windows::Forms::Label^ lblClient;



	private: System::Windows::Forms::DateTimePicker^ dtpEnvoi;

	private: System::Windows::Forms::DateTimePicker^ dtpLivraison;











	private: System::Windows::Forms::TextBox^ tbxRef;



	private: System::Windows::Forms::Label^ Couleur;
	private: System::Windows::Forms::Label^ Ref;
	private: System::Windows::Forms::Label^ nom;

























private: System::Windows::Forms::ComboBox^ cbxPaiementMoyen;
private: System::Windows::Forms::Button^ btnValider;
private: System::Windows::Forms::Button^ btnAnnuler;

private: System::Windows::Forms::Label^ label_tire_commande;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ tbxNom;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ tbxPrenom;

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

private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;


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

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;


private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::ComboBox^ cbxIdLivraison;
private: System::Windows::Forms::Label^ label_idLivraison;
private: System::Windows::Forms::Label^ label_IDFacturation;
private: System::Windows::Forms::ComboBox^ cbxIdFacturation;
private: System::Windows::Forms::TextBox^ tbxPaysF;
private: System::Windows::Forms::TextBox^ tbxRegionF;
private: System::Windows::Forms::TextBox^ tbxVilleF;
private: System::Windows::Forms::TextBox^ tbxCPF;
private: System::Windows::Forms::TextBox^ tbxVilleL;
private: System::Windows::Forms::TextBox^ tbxCPL;
private: System::Windows::Forms::TextBox^ tbxPaysL;
private: System::Windows::Forms::TextBox^ tbxRegionL;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputCommandeInserer::typeid));
			this->cbxPaiementMoyen = (gcnew System::Windows::Forms::ComboBox());
			this->dtpPaiementDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblPaiementDate = (gcnew System::Windows::Forms::Label());
			this->lblPaiementMoyen = (gcnew System::Windows::Forms::Label());
			this->lblPaiementNombre = (gcnew System::Windows::Forms::Label());
			this->lblClient = (gcnew System::Windows::Forms::Label());
			this->cbxIdClient = (gcnew System::Windows::Forms::ComboBox());
			this->tbxPaiementNombre = (gcnew System::Windows::Forms::TextBox());
			this->dtpEnvoi = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbxRef = (gcnew System::Windows::Forms::TextBox());
			this->Couleur = (gcnew System::Windows::Forms::Label());
			this->Ref = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->label_tire_commande = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->cbxIdLivraison = (gcnew System::Windows::Forms::ComboBox());
			this->label_idLivraison = (gcnew System::Windows::Forms::Label());
			this->label_IDFacturation = (gcnew System::Windows::Forms::Label());
			this->cbxIdFacturation = (gcnew System::Windows::Forms::ComboBox());
			this->tbxPaysF = (gcnew System::Windows::Forms::TextBox());
			this->tbxRegionF = (gcnew System::Windows::Forms::TextBox());
			this->tbxVilleF = (gcnew System::Windows::Forms::TextBox());
			this->tbxCPF = (gcnew System::Windows::Forms::TextBox());
			this->tbxVilleL = (gcnew System::Windows::Forms::TextBox());
			this->tbxCPL = (gcnew System::Windows::Forms::TextBox());
			this->tbxPaysL = (gcnew System::Windows::Forms::TextBox());
			this->tbxRegionL = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cbxPaiementMoyen
			// 
			this->cbxPaiementMoyen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxPaiementMoyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbxPaiementMoyen->ForeColor = System::Drawing::Color::Silver;
			this->cbxPaiementMoyen->FormattingEnabled = true;
			this->cbxPaiementMoyen->Location = System::Drawing::Point(197, 396);
			this->cbxPaiementMoyen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbxPaiementMoyen->Name = L"cbxPaiementMoyen";
			this->cbxPaiementMoyen->Size = System::Drawing::Size(229, 24);
			this->cbxPaiementMoyen->TabIndex = 64;
			// 
			// dtpPaiementDate
			// 
			this->dtpPaiementDate->Location = System::Drawing::Point(197, 431);
			this->dtpPaiementDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpPaiementDate->Name = L"dtpPaiementDate";
			this->dtpPaiementDate->Size = System::Drawing::Size(229, 22);
			this->dtpPaiementDate->TabIndex = 63;
			// 
			// lblPaiementDate
			// 
			this->lblPaiementDate->AutoSize = true;
			this->lblPaiementDate->ForeColor = System::Drawing::Color::Silver;
			this->lblPaiementDate->Location = System::Drawing::Point(35, 436);
			this->lblPaiementDate->Name = L"lblPaiementDate";
			this->lblPaiementDate->Size = System::Drawing::Size(120, 17);
			this->lblPaiementDate->TabIndex = 62;
			this->lblPaiementDate->Text = L"Date de paiement";
			// 
			// lblPaiementMoyen
			// 
			this->lblPaiementMoyen->AutoSize = true;
			this->lblPaiementMoyen->ForeColor = System::Drawing::Color::Silver;
			this->lblPaiementMoyen->Location = System::Drawing::Point(35, 400);
			this->lblPaiementMoyen->Name = L"lblPaiementMoyen";
			this->lblPaiementMoyen->Size = System::Drawing::Size(132, 17);
			this->lblPaiementMoyen->TabIndex = 60;
			this->lblPaiementMoyen->Text = L"Moyen de paiement";
			// 
			// lblPaiementNombre
			// 
			this->lblPaiementNombre->AutoSize = true;
			this->lblPaiementNombre->ForeColor = System::Drawing::Color::Silver;
			this->lblPaiementNombre->Location = System::Drawing::Point(35, 369);
			this->lblPaiementNombre->Name = L"lblPaiementNombre";
			this->lblPaiementNombre->Size = System::Drawing::Size(147, 17);
			this->lblPaiementNombre->TabIndex = 55;
			this->lblPaiementNombre->Text = L"Nombre de paiements";
			// 
			// lblClient
			// 
			this->lblClient->AutoSize = true;
			this->lblClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->lblClient->ForeColor = System::Drawing::Color::Silver;
			this->lblClient->Location = System::Drawing::Point(31, 212);
			this->lblClient->Name = L"lblClient";
			this->lblClient->Size = System::Drawing::Size(60, 17);
			this->lblClient->TabIndex = 54;
			this->lblClient->Text = L"id_client\r\n";
			this->lblClient->Click += gcnew System::EventHandler(this, &InputCommandeInserer::lblClient_Click);
			// 
			// cbxIdClient
			// 
			this->cbxIdClient->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbxIdClient->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxIdClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxIdClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbxIdClient->ForeColor = System::Drawing::Color::Silver;
			this->cbxIdClient->FormattingEnabled = true;
			this->cbxIdClient->Location = System::Drawing::Point(136, 205);
			this->cbxIdClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbxIdClient->Name = L"cbxIdClient";
			this->cbxIdClient->Size = System::Drawing::Size(93, 24);
			this->cbxIdClient->TabIndex = 59;
			this->cbxIdClient->SelectedIndexChanged += gcnew System::EventHandler(this, &InputCommandeInserer::cbxIdClient_SelectedIndexChanged);
			// 
			// tbxPaiementNombre
			// 
			this->tbxPaiementNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaiementNombre->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaiementNombre->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaiementNombre->Location = System::Drawing::Point(197, 372);
			this->tbxPaiementNombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxPaiementNombre->Name = L"tbxPaiementNombre";
			this->tbxPaiementNombre->Size = System::Drawing::Size(229, 15);
			this->tbxPaiementNombre->TabIndex = 58;
			// 
			// dtpEnvoi
			// 
			this->dtpEnvoi->Location = System::Drawing::Point(136, 169);
			this->dtpEnvoi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpEnvoi->Name = L"dtpEnvoi";
			this->dtpEnvoi->Size = System::Drawing::Size(271, 22);
			this->dtpEnvoi->TabIndex = 58;
			// 
			// dtpLivraison
			// 
			this->dtpLivraison->Location = System::Drawing::Point(136, 121);
			this->dtpLivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpLivraison->Name = L"dtpLivraison";
			this->dtpLivraison->Size = System::Drawing::Size(271, 22);
			this->dtpLivraison->TabIndex = 57;
			// 
			// tbxRef
			// 
			this->tbxRef->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRef->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRef->Enabled = false;
			this->tbxRef->ForeColor = System::Drawing::Color::Silver;
			this->tbxRef->Location = System::Drawing::Point(136, 90);
			this->tbxRef->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxRef->Name = L"tbxRef";
			this->tbxRef->Size = System::Drawing::Size(271, 15);
			this->tbxRef->TabIndex = 52;
			// 
			// Couleur
			// 
			this->Couleur->AutoSize = true;
			this->Couleur->ForeColor = System::Drawing::Color::Silver;
			this->Couleur->Location = System::Drawing::Point(31, 174);
			this->Couleur->Name = L"Couleur";
			this->Couleur->Size = System::Drawing::Size(87, 17);
			this->Couleur->TabIndex = 49;
			this->Couleur->Text = L"Date d\'envoi";
			// 
			// Ref
			// 
			this->Ref->AutoSize = true;
			this->Ref->ForeColor = System::Drawing::Color::Silver;
			this->Ref->Location = System::Drawing::Point(31, 126);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(94, 17);
			this->Ref->TabIndex = 48;
			this->Ref->Text = L"Date livraison";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->ForeColor = System::Drawing::Color::Silver;
			this->nom->Location = System::Drawing::Point(31, 88);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(74, 17);
			this->nom->TabIndex = 47;
			this->nom->Text = L"Reférence";
			// 
			// btnValider
			// 
			this->btnValider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->ForeColor = System::Drawing::Color::White;
			this->btnValider->Location = System::Drawing::Point(450, 597);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 22;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputCommandeInserer::btnValider_Click);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(632, 597);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 23;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputCommandeInserer::btnAnnuler_Click_1);
			// 
			// label_tire_commande
			// 
			this->label_tire_commande->AutoSize = true;
			this->label_tire_commande->ForeColor = System::Drawing::Color::Silver;
			this->label_tire_commande->Location = System::Drawing::Point(12, 9);
			this->label_tire_commande->Name = L"label_tire_commande";
			this->label_tire_commande->Size = System::Drawing::Size(79, 17);
			this->label_tire_commande->TabIndex = 66;
			this->label_tire_commande->Text = L"Commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(34, 277);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 68;
			this->label2->Text = L"Nom";
			// 
			// tbxNom
			// 
			this->tbxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNom->Enabled = false;
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(136, 277);
			this->tbxNom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(133, 15);
			this->tbxNom->TabIndex = 69;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(34, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 70;
			this->label3->Text = L"Prénom";
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrenom->Enabled = false;
			this->tbxPrenom->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenom->Location = System::Drawing::Point(136, 248);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(133, 15);
			this->tbxPrenom->TabIndex = 71;
			// 
			// label_adresse_livraison
			// 
			this->label_adresse_livraison->AutoSize = true;
			this->label_adresse_livraison->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_livraison->Location = System::Drawing::Point(509, 47);
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Size = System::Drawing::Size(141, 17);
			this->label_adresse_livraison->TabIndex = 88;
			this->label_adresse_livraison->Text = L"Adresse de Livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(575, 274);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 17);
			this->label8->TabIndex = 87;
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
			this->tbxResidenceL->Location = System::Drawing::Point(661, 274);
			this->tbxResidenceL->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceL->Name = L"tbxResidenceL";
			this->tbxResidenceL->Size = System::Drawing::Size(145, 15);
			this->tbxResidenceL->TabIndex = 86;
			// 
			// tbxEtageL
			// 
			this->tbxEtageL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageL->Enabled = false;
			this->tbxEtageL->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageL->Location = System::Drawing::Point(509, 274);
			this->tbxEtageL->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageL->Name = L"tbxEtageL";
			this->tbxEtageL->Size = System::Drawing::Size(57, 15);
			this->tbxEtageL->TabIndex = 85;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(448, 274);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 84;
			this->label7->Text = L"Etage";
			// 
			// tbxRueL
			// 
			this->tbxRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueL->Enabled = false;
			this->tbxRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueL->Location = System::Drawing::Point(619, 242);
			this->tbxRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueL->Name = L"tbxRueL";
			this->tbxRueL->Size = System::Drawing::Size(187, 15);
			this->tbxRueL->TabIndex = 83;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(575, 240);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 82;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(447, 238);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 81;
			this->label5->Text = L"N° Rue";
			// 
			// tbxNRueL
			// 
			this->tbxNRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueL->Enabled = false;
			this->tbxNRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueL->Location = System::Drawing::Point(509, 240);
			this->tbxNRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueL->Name = L"tbxNRueL";
			this->tbxNRueL->Size = System::Drawing::Size(57, 15);
			this->tbxNRueL->TabIndex = 80;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(693, 205);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 79;
			this->label4->Text = L"CP";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(448, 141);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 75;
			this->label1->Text = L"Pays";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(448, 208);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 17);
			this->label9->TabIndex = 78;
			this->label9->Text = L"Ville";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(448, 174);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 17);
			this->label10->TabIndex = 76;
			this->label10->Text = L"Region";
			// 
			// label_adresse_facturation
			// 
			this->label_adresse_facturation->AutoSize = true;
			this->label_adresse_facturation->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_facturation->Location = System::Drawing::Point(495, 334);
			this->label_adresse_facturation->Name = L"label_adresse_facturation";
			this->label_adresse_facturation->Size = System::Drawing::Size(155, 17);
			this->label_adresse_facturation->TabIndex = 105;
			this->label_adresse_facturation->Text = L"Adresse de Facturation";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(574, 539);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 17);
			this->label11->TabIndex = 104;
			this->label11->Text = L"Résidence";
			// 
			// tbxResidenceF
			// 
			this->tbxResidenceF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidenceF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidenceF->Enabled = false;
			this->tbxResidenceF->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidenceF->Location = System::Drawing::Point(661, 539);
			this->tbxResidenceF->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceF->Name = L"tbxResidenceF";
			this->tbxResidenceF->Size = System::Drawing::Size(145, 15);
			this->tbxResidenceF->TabIndex = 103;
			// 
			// tbxEtageF
			// 
			this->tbxEtageF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageF->Enabled = false;
			this->tbxEtageF->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageF->Location = System::Drawing::Point(509, 539);
			this->tbxEtageF->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageF->Name = L"tbxEtageF";
			this->tbxEtageF->Size = System::Drawing::Size(57, 15);
			this->tbxEtageF->TabIndex = 102;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Silver;
			this->label12->Location = System::Drawing::Point(448, 539);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 17);
			this->label12->TabIndex = 101;
			this->label12->Text = L"Etage";
			// 
			// tbxRueF
			// 
			this->tbxRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueF->Enabled = false;
			this->tbxRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueF->Location = System::Drawing::Point(619, 509);
			this->tbxRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueF->Name = L"tbxRueF";
			this->tbxRueF->Size = System::Drawing::Size(187, 15);
			this->tbxRueF->TabIndex = 100;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Silver;
			this->label13->Location = System::Drawing::Point(574, 507);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 17);
			this->label13->TabIndex = 99;
			this->label13->Text = L"Rue";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(447, 507);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 17);
			this->label14->TabIndex = 98;
			this->label14->Text = L"N° Rue";
			// 
			// tbxNRueF
			// 
			this->tbxNRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueF->Enabled = false;
			this->tbxNRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueF->Location = System::Drawing::Point(509, 507);
			this->tbxNRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueF->Name = L"tbxNRueF";
			this->tbxNRueF->Size = System::Drawing::Size(57, 15);
			this->tbxNRueF->TabIndex = 97;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Silver;
			this->label15->Location = System::Drawing::Point(693, 473);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 17);
			this->label15->TabIndex = 96;
			this->label15->Text = L"CP";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Silver;
			this->label16->Location = System::Drawing::Point(447, 473);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 17);
			this->label16->TabIndex = 95;
			this->label16->Text = L"Ville";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(448, 439);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 17);
			this->label17->TabIndex = 93;
			this->label17->Text = L"Region";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(447, 407);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 17);
			this->label18->TabIndex = 92;
			this->label18->Text = L"Pays";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Silver;
			this->label19->Location = System::Drawing::Point(76, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(161, 17);
			this->label19->TabIndex = 107;
			this->label19->Text = L"Informations principales ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Silver;
			this->label20->Location = System::Drawing::Point(76, 334);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 17);
			this->label20->TabIndex = 108;
			this->label20->Text = L"Paiement";
			// 
			// cbxIdLivraison
			// 
			this->cbxIdLivraison->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxIdLivraison->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxIdLivraison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxIdLivraison->ForeColor = System::Drawing::Color::Silver;
			this->cbxIdLivraison->FormattingEnabled = true;
			this->cbxIdLivraison->Location = System::Drawing::Point(532, 93);
			this->cbxIdLivraison->Margin = System::Windows::Forms::Padding(4);
			this->cbxIdLivraison->Name = L"cbxIdLivraison";
			this->cbxIdLivraison->Size = System::Drawing::Size(104, 24);
			this->cbxIdLivraison->TabIndex = 109;
			this->cbxIdLivraison->SelectedIndexChanged += gcnew System::EventHandler(this, &InputCommandeInserer::cbxIdLivraison_SelectedIndexChanged);
			// 
			// label_idLivraison
			// 
			this->label_idLivraison->AutoSize = true;
			this->label_idLivraison->ForeColor = System::Drawing::Color::Silver;
			this->label_idLivraison->Location = System::Drawing::Point(448, 93);
			this->label_idLivraison->Name = L"label_idLivraison";
			this->label_idLivraison->Size = System::Drawing::Size(78, 17);
			this->label_idLivraison->TabIndex = 110;
			this->label_idLivraison->Text = L"Id_adresse";
			// 
			// label_IDFacturation
			// 
			this->label_IDFacturation->AutoSize = true;
			this->label_IDFacturation->ForeColor = System::Drawing::Color::Silver;
			this->label_IDFacturation->Location = System::Drawing::Point(444, 362);
			this->label_IDFacturation->Name = L"label_IDFacturation";
			this->label_IDFacturation->Size = System::Drawing::Size(78, 17);
			this->label_IDFacturation->TabIndex = 112;
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
			this->cbxIdFacturation->Location = System::Drawing::Point(528, 362);
			this->cbxIdFacturation->Margin = System::Windows::Forms::Padding(4);
			this->cbxIdFacturation->Name = L"cbxIdFacturation";
			this->cbxIdFacturation->Size = System::Drawing::Size(104, 24);
			this->cbxIdFacturation->TabIndex = 111;
			this->cbxIdFacturation->SelectedIndexChanged += gcnew System::EventHandler(this, &InputCommandeInserer::cbxIdFacturation_SelectedIndexChanged);
			// 
			// tbxPaysF
			// 
			this->tbxPaysF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaysF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaysF->Enabled = false;
			this->tbxPaysF->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaysF->Location = System::Drawing::Point(509, 405);
			this->tbxPaysF->Margin = System::Windows::Forms::Padding(4);
			this->tbxPaysF->Name = L"tbxPaysF";
			this->tbxPaysF->Size = System::Drawing::Size(187, 15);
			this->tbxPaysF->TabIndex = 113;
			// 
			// tbxRegionF
			// 
			this->tbxRegionF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRegionF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRegionF->Enabled = false;
			this->tbxRegionF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRegionF->Location = System::Drawing::Point(509, 441);
			this->tbxRegionF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRegionF->Name = L"tbxRegionF";
			this->tbxRegionF->Size = System::Drawing::Size(187, 15);
			this->tbxRegionF->TabIndex = 114;
			// 
			// tbxVilleF
			// 
			this->tbxVilleF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxVilleF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxVilleF->Enabled = false;
			this->tbxVilleF->ForeColor = System::Drawing::Color::Silver;
			this->tbxVilleF->Location = System::Drawing::Point(509, 475);
			this->tbxVilleF->Margin = System::Windows::Forms::Padding(4);
			this->tbxVilleF->Name = L"tbxVilleF";
			this->tbxVilleF->Size = System::Drawing::Size(127, 15);
			this->tbxVilleF->TabIndex = 115;
			// 
			// tbxCPF
			// 
			this->tbxCPF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCPF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCPF->Enabled = false;
			this->tbxCPF->ForeColor = System::Drawing::Color::Silver;
			this->tbxCPF->Location = System::Drawing::Point(733, 475);
			this->tbxCPF->Margin = System::Windows::Forms::Padding(4);
			this->tbxCPF->Name = L"tbxCPF";
			this->tbxCPF->Size = System::Drawing::Size(73, 15);
			this->tbxCPF->TabIndex = 116;
			// 
			// tbxVilleL
			// 
			this->tbxVilleL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxVilleL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxVilleL->Enabled = false;
			this->tbxVilleL->ForeColor = System::Drawing::Color::Silver;
			this->tbxVilleL->Location = System::Drawing::Point(509, 209);
			this->tbxVilleL->Margin = System::Windows::Forms::Padding(4);
			this->tbxVilleL->Name = L"tbxVilleL";
			this->tbxVilleL->Size = System::Drawing::Size(127, 15);
			this->tbxVilleL->TabIndex = 117;
			// 
			// tbxCPL
			// 
			this->tbxCPL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCPL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCPL->Enabled = false;
			this->tbxCPL->ForeColor = System::Drawing::Color::Silver;
			this->tbxCPL->Location = System::Drawing::Point(733, 210);
			this->tbxCPL->Margin = System::Windows::Forms::Padding(4);
			this->tbxCPL->Name = L"tbxCPL";
			this->tbxCPL->Size = System::Drawing::Size(73, 15);
			this->tbxCPL->TabIndex = 118;
			// 
			// tbxPaysL
			// 
			this->tbxPaysL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaysL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaysL->Enabled = false;
			this->tbxPaysL->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaysL->Location = System::Drawing::Point(509, 141);
			this->tbxPaysL->Margin = System::Windows::Forms::Padding(4);
			this->tbxPaysL->Name = L"tbxPaysL";
			this->tbxPaysL->Size = System::Drawing::Size(187, 15);
			this->tbxPaysL->TabIndex = 119;
			// 
			// tbxRegionL
			// 
			this->tbxRegionL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRegionL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRegionL->Enabled = false;
			this->tbxRegionL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRegionL->Location = System::Drawing::Point(509, 174);
			this->tbxRegionL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRegionL->Name = L"tbxRegionL";
			this->tbxRegionL->Size = System::Drawing::Size(187, 15);
			this->tbxRegionL->TabIndex = 120;
			// 
			// InputCommandeInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(828, 646);
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
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
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
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tbxPrenom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbxNom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_tire_commande);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->cbxPaiementMoyen);
			this->Controls->Add(this->dtpEnvoi);
			this->Controls->Add(this->dtpPaiementDate);
			this->Controls->Add(this->lblPaiementDate);
			this->Controls->Add(this->dtpLivraison);
			this->Controls->Add(this->lblPaiementMoyen);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->Ref);
			this->Controls->Add(this->lblPaiementNombre);
			this->Controls->Add(this->lblClient);
			this->Controls->Add(this->Couleur);
			this->Controls->Add(this->cbxIdClient);
			this->Controls->Add(this->tbxPaiementNombre);
			this->Controls->Add(this->tbxRef);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(846, 693);
			this->MinimumSize = System::Drawing::Size(846, 693);
			this->Name = L"InputCommandeInserer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Insérer une commande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		NS_map_commande::CLcommande^ commande= gcnew NS_map_commande::CLcommande;
		if ( tbxRef->Text-> Length == 0 ||cbxIdClient->SelectedIndex < 0 || tbxPrenom->Text->Length == 0 ||
			tbxNom->Text->Length == 0 || tbxPaiementNombre->Text->Length == 0 || cbxPaiementMoyen->Text->Length == 0) {
			MessageBox::Show("Vous n'avez pas renseigné tous les champs", "Erreur", MessageBoxButtons::OK);
			return;
		}
		
		commande->setIdClient(int::Parse(cbxIdClient->Text));
		commande->setNombrePaiement(int::Parse(tbxPaiementNombre->Text));
		commande->setDateLivraison(this->dtpLivraison->Value.ToString("yyyy-MM-dd"));
		commande->setDateEmission(this->dtpEnvoi->Value.ToString("yyyy-MM-dd"));
		commande->setIdAdresseLivraison(int::Parse(cbxIdLivraison->Text));

		/*adresse_livraison->setNumeroRue(tbxNRueL->Text);
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
		UIAction::validerButtonClient(this, client);*/
		this->Close();
	}
	private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}


private: System::Void cbxCP_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
/*	NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();

	std::vector<std::string> vecteur_ville;
	std::vector<std::string> vecteur_region;
	std::vector<std::string> vecteur_pays;

	cbxVille->Enabled = false;
	cbxVille->Items->Clear();
	vecteur_ville = ville->miseAjourVilleCBCP(vecteur_ville, this->cbxCP->Text);
	for (int i = 0; i < vecteur_ville.size(); i++) {
		this->cbxVille->Items->Add(gcnew String(vecteur_ville[i].c_str()));
	}

	cbxRegion->Enabled = false;
	cbxRegion->Items->Clear();
	vecteur_region = region->miseAjourRegionCBCP(vecteur_region, this->cbxCP->Text);
	for (int i = 0; i < vecteur_region.size(); i++) {
		this->cbxRegion->Items->Add(gcnew String(vecteur_region[i].c_str()));
	}

	cbxPays->Enabled = false;
	cbxPays->Items->Clear();
	vecteur_pays = pays->miseAjourPaysCBCP(vecteur_pays, this->cbxCP->Text);
	for (int i = 0; i < vecteur_region.size(); i++) {
		this->cbxPays->Items->Add(gcnew String(vecteur_pays[i].c_str()));
	}


	cbxVille->Enabled = true;
	cbxRegion->Enabled = true;
	cbxPays->Enabled = true;*/
}

private: System::Void lblClient_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void cbxIdClient_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	cbxIdLivraison->Items->Clear();
	cbxIdFacturation->Items->Clear();
	tbxRef->Clear();

	NS_Utilitaire_svc::CLserviceutilitaire^ nomprenom = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_nom_prenom;
	vecteur_nom_prenom = nomprenom->miseAjourNomPrenom(vecteur_nom_prenom, int::Parse(this->cbxIdClient->Text));
		
			this->tbxPrenom->Text = (gcnew String(vecteur_nom_prenom[1].c_str()));
			this->tbxNom->Text = (gcnew String(vecteur_nom_prenom[0].c_str()));

	NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_facturation = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_id_adresse_facturation;
	vecteur_id_adresse_facturation = id_adresse_facturation->repertorierIdAdresseFacturation(vecteur_id_adresse_facturation, int::Parse(this->cbxIdClient->Text));
	 this->cbxIdFacturation->Items->Add(gcnew String(vecteur_id_adresse_facturation[0].c_str()));


	 NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_livraison = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	 std::vector<std::string> vecteur_id_adresse_livraison;
	 vecteur_id_adresse_livraison = id_adresse_livraison->repertorierIdAdresseLivraison(vecteur_id_adresse_livraison, int::Parse(this->cbxIdClient->Text));
	 this->cbxIdLivraison->Items->Add(gcnew String(vecteur_id_adresse_livraison[0].c_str()));
}

private: System::Void btnAnnuler_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
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

};
}
