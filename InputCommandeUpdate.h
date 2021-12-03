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
	/// Description résumée de InputCommandeUpdate
	/// </summary>
	public ref class InputCommandeUpdate : public System::Windows::Forms::Form
	{
	public:
		InputCommandeUpdate(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		
			NS_Utilitaire_svc::CLserviceutilitaire^ info_client = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> liste_info_client;
			liste_info_client = info_client->recupererInfoClient(liste_info_client,NS_map_commande::CLcommande::covalue);
			this->tbxIdClient->Text = (gcnew String(liste_info_client[0].c_str()));
			this->tbxNomClient->Text = gcnew String(liste_info_client[1].c_str());
			this->tbxPrenomClient->Text = gcnew String(liste_info_client[2].c_str());



		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InputCommandeUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAnnuler;
	protected:
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbxIdClient;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ tbxNomClient;
	private: System::Windows::Forms::TextBox^ tbxPrenomClient;


	private: System::Windows::Forms::Label^ label_idLivraison;
	private: System::Windows::Forms::ComboBox^ cbxIdLivraison;
	private: System::Windows::Forms::Label^ label_adresse_livraison;
	private: System::Windows::Forms::TextBox^ tbxRegionL;
	private: System::Windows::Forms::TextBox^ tbxPaysL;
	private: System::Windows::Forms::TextBox^ tbxCPL;
	private: System::Windows::Forms::TextBox^ tbxVilleL;
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
	private: System::Windows::Forms::Label^ label_IDFacturation;
	private: System::Windows::Forms::ComboBox^ cbxIdFacturation;
	private: System::Windows::Forms::Label^ label_adresse_facturation;
	private: System::Windows::Forms::TextBox^ tbxCPF;
	private: System::Windows::Forms::TextBox^ tbxVilleF;
	private: System::Windows::Forms::TextBox^ tbxRegionF;
	private: System::Windows::Forms::TextBox^ tbxPaysF;
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label_infos_adresses;
	private: System::Windows::Forms::Label^ label_titre_infos_articles;
	private: System::Windows::Forms::ComboBox^ cbxNomArticle;
	private: System::Windows::Forms::Label^ label_nom_article;
	private: System::Windows::Forms::Label^ label_qte_article;
	private: System::Windows::Forms::Label^ label_couleur_article;
	private: System::Windows::Forms::Label^ label_prix_HT;













	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ tbxTauxTVA;

	private: System::Windows::Forms::Label^ label_taux_TVA;



	private: System::Windows::Forms::Button^ button_delete_article;
	private: System::Windows::Forms::Button^ button_add_article;
private: System::Windows::Forms::TextBox^ tbxPrixHT;
private: System::Windows::Forms::TextBox^ tbxTotalTTC;





private: System::Windows::Forms::Label^ label_total_TTC;

	private: System::Windows::Forms::TextBox^ tbxCouleurArticle;

	private: System::Windows::Forms::TextBox^ tbxQteArticle;

	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputCommandeUpdate::typeid));
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbxIdClient = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbxNomClient = (gcnew System::Windows::Forms::TextBox());
			this->tbxPrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->label_idLivraison = (gcnew System::Windows::Forms::Label());
			this->cbxIdLivraison = (gcnew System::Windows::Forms::ComboBox());
			this->label_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->tbxRegionL = (gcnew System::Windows::Forms::TextBox());
			this->tbxPaysL = (gcnew System::Windows::Forms::TextBox());
			this->tbxCPL = (gcnew System::Windows::Forms::TextBox());
			this->tbxVilleL = (gcnew System::Windows::Forms::TextBox());
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
			this->label_IDFacturation = (gcnew System::Windows::Forms::Label());
			this->cbxIdFacturation = (gcnew System::Windows::Forms::ComboBox());
			this->label_adresse_facturation = (gcnew System::Windows::Forms::Label());
			this->tbxCPF = (gcnew System::Windows::Forms::TextBox());
			this->tbxVilleF = (gcnew System::Windows::Forms::TextBox());
			this->tbxRegionF = (gcnew System::Windows::Forms::TextBox());
			this->tbxPaysF = (gcnew System::Windows::Forms::TextBox());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label_infos_adresses = (gcnew System::Windows::Forms::Label());
			this->label_titre_infos_articles = (gcnew System::Windows::Forms::Label());
			this->cbxNomArticle = (gcnew System::Windows::Forms::ComboBox());
			this->label_nom_article = (gcnew System::Windows::Forms::Label());
			this->label_qte_article = (gcnew System::Windows::Forms::Label());
			this->label_couleur_article = (gcnew System::Windows::Forms::Label());
			this->label_prix_HT = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tbxTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->label_taux_TVA = (gcnew System::Windows::Forms::Label());
			this->button_delete_article = (gcnew System::Windows::Forms::Button());
			this->button_add_article = (gcnew System::Windows::Forms::Button());
			this->tbxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->tbxTotalTTC = (gcnew System::Windows::Forms::TextBox());
			this->label_total_TTC = (gcnew System::Windows::Forms::Label());
			this->tbxCouleurArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbxQteArticle = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(608, 776);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 178;
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
			this->btnValider->Location = System::Drawing::Point(426, 776);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 177;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 25);
			this->label1->TabIndex = 179;
			this->label1->Text = L"Commande";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(9, 104);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 17);
			this->label3->TabIndex = 187;
			this->label3->Text = L"ID du client";
			// 
			// tbxIdClient
			// 
			this->tbxIdClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxIdClient->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxIdClient->Enabled = false;
			this->tbxIdClient->ForeColor = System::Drawing::Color::Silver;
			this->tbxIdClient->Location = System::Drawing::Point(101, 104);
			this->tbxIdClient->Margin = System::Windows::Forms::Padding(4);
			this->tbxIdClient->Name = L"tbxIdClient";
			this->tbxIdClient->ReadOnly = true;
			this->tbxIdClient->Size = System::Drawing::Size(268, 15);
			this->tbxIdClient->TabIndex = 186;
			this->tbxIdClient->TextChanged += gcnew System::EventHandler(this, &InputCommandeUpdate::tbxIdClient_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(9, 126);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 17);
			this->label18->TabIndex = 184;
			this->label18->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(9, 159);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 17);
			this->label17->TabIndex = 183;
			this->label17->Text = L"Prénom";
			// 
			// tbxNomClient
			// 
			this->tbxNomClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNomClient->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNomClient->Enabled = false;
			this->tbxNomClient->ForeColor = System::Drawing::Color::Silver;
			this->tbxNomClient->Location = System::Drawing::Point(74, 131);
			this->tbxNomClient->Margin = System::Windows::Forms::Padding(4);
			this->tbxNomClient->Name = L"tbxNomClient";
			this->tbxNomClient->Size = System::Drawing::Size(295, 15);
			this->tbxNomClient->TabIndex = 181;
			// 
			// tbxPrenomClient
			// 
			this->tbxPrenomClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrenomClient->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrenomClient->Enabled = false;
			this->tbxPrenomClient->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenomClient->Location = System::Drawing::Point(74, 161);
			this->tbxPrenomClient->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrenomClient->Name = L"tbxPrenomClient";
			this->tbxPrenomClient->Size = System::Drawing::Size(295, 15);
			this->tbxPrenomClient->TabIndex = 182;
			// 
			// label_idLivraison
			// 
			this->label_idLivraison->AutoSize = true;
			this->label_idLivraison->ForeColor = System::Drawing::Color::Silver;
			this->label_idLivraison->Location = System::Drawing::Point(15, 305);
			this->label_idLivraison->Name = L"label_idLivraison";
			this->label_idLivraison->Size = System::Drawing::Size(78, 17);
			this->label_idLivraison->TabIndex = 190;
			this->label_idLivraison->Text = L"id_adresse";
			// 
			// cbxIdLivraison
			// 
			this->cbxIdLivraison->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxIdLivraison->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxIdLivraison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxIdLivraison->ForeColor = System::Drawing::Color::Silver;
			this->cbxIdLivraison->FormattingEnabled = true;
			this->cbxIdLivraison->Location = System::Drawing::Point(115, 302);
			this->cbxIdLivraison->Margin = System::Windows::Forms::Padding(4);
			this->cbxIdLivraison->Name = L"cbxIdLivraison";
			this->cbxIdLivraison->Size = System::Drawing::Size(92, 24);
			this->cbxIdLivraison->TabIndex = 189;
			this->cbxIdLivraison->SelectedIndexChanged += gcnew System::EventHandler(this, &InputCommandeUpdate::cbxIdLivraison_SelectedIndexChanged);
			// 
			// label_adresse_livraison
			// 
			this->label_adresse_livraison->AutoSize = true;
			this->label_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_adresse_livraison->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_livraison->Location = System::Drawing::Point(15, 270);
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Size = System::Drawing::Size(161, 17);
			this->label_adresse_livraison->TabIndex = 188;
			this->label_adresse_livraison->Text = L"Adresse de Livraison";
			// 
			// tbxRegionL
			// 
			this->tbxRegionL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRegionL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRegionL->Enabled = false;
			this->tbxRegionL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRegionL->Location = System::Drawing::Point(80, 379);
			this->tbxRegionL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRegionL->Name = L"tbxRegionL";
			this->tbxRegionL->Size = System::Drawing::Size(187, 15);
			this->tbxRegionL->TabIndex = 206;
			// 
			// tbxPaysL
			// 
			this->tbxPaysL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaysL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaysL->Enabled = false;
			this->tbxPaysL->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaysL->Location = System::Drawing::Point(80, 346);
			this->tbxPaysL->Margin = System::Windows::Forms::Padding(4);
			this->tbxPaysL->Name = L"tbxPaysL";
			this->tbxPaysL->Size = System::Drawing::Size(187, 15);
			this->tbxPaysL->TabIndex = 205;
			// 
			// tbxCPL
			// 
			this->tbxCPL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCPL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCPL->Enabled = false;
			this->tbxCPL->ForeColor = System::Drawing::Color::Silver;
			this->tbxCPL->Location = System::Drawing::Point(304, 415);
			this->tbxCPL->Margin = System::Windows::Forms::Padding(4);
			this->tbxCPL->Name = L"tbxCPL";
			this->tbxCPL->Size = System::Drawing::Size(73, 15);
			this->tbxCPL->TabIndex = 204;
			// 
			// tbxVilleL
			// 
			this->tbxVilleL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxVilleL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxVilleL->Enabled = false;
			this->tbxVilleL->ForeColor = System::Drawing::Color::Silver;
			this->tbxVilleL->Location = System::Drawing::Point(80, 414);
			this->tbxVilleL->Margin = System::Windows::Forms::Padding(4);
			this->tbxVilleL->Name = L"tbxVilleL";
			this->tbxVilleL->Size = System::Drawing::Size(127, 15);
			this->tbxVilleL->TabIndex = 203;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(155, 479);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 17);
			this->label8->TabIndex = 202;
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
			this->tbxResidenceL->Location = System::Drawing::Point(232, 479);
			this->tbxResidenceL->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceL->Name = L"tbxResidenceL";
			this->tbxResidenceL->Size = System::Drawing::Size(145, 15);
			this->tbxResidenceL->TabIndex = 201;
			// 
			// tbxEtageL
			// 
			this->tbxEtageL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageL->Enabled = false;
			this->tbxEtageL->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageL->Location = System::Drawing::Point(80, 479);
			this->tbxEtageL->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageL->Name = L"tbxEtageL";
			this->tbxEtageL->Size = System::Drawing::Size(57, 15);
			this->tbxEtageL->TabIndex = 200;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(19, 479);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 199;
			this->label7->Text = L"Etage";
			// 
			// tbxRueL
			// 
			this->tbxRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueL->Enabled = false;
			this->tbxRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueL->Location = System::Drawing::Point(190, 447);
			this->tbxRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueL->Name = L"tbxRueL";
			this->tbxRueL->Size = System::Drawing::Size(187, 15);
			this->tbxRueL->TabIndex = 198;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(155, 443);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 197;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(18, 443);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 196;
			this->label5->Text = L"N° Rue";
			// 
			// tbxNRueL
			// 
			this->tbxNRueL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueL->Enabled = false;
			this->tbxNRueL->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueL->Location = System::Drawing::Point(80, 445);
			this->tbxNRueL->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueL->Name = L"tbxNRueL";
			this->tbxNRueL->Size = System::Drawing::Size(57, 15);
			this->tbxNRueL->TabIndex = 195;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(270, 415);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 194;
			this->label4->Text = L"CP";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(19, 346);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 17);
			this->label9->TabIndex = 191;
			this->label9->Text = L"Pays";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(19, 413);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 17);
			this->label10->TabIndex = 193;
			this->label10->Text = L"Ville";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Silver;
			this->label19->Location = System::Drawing::Point(19, 379);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 17);
			this->label19->TabIndex = 192;
			this->label19->Text = L"Region";
			// 
			// label_IDFacturation
			// 
			this->label_IDFacturation->AutoSize = true;
			this->label_IDFacturation->ForeColor = System::Drawing::Color::Silver;
			this->label_IDFacturation->Location = System::Drawing::Point(398, 305);
			this->label_IDFacturation->Name = L"label_IDFacturation";
			this->label_IDFacturation->Size = System::Drawing::Size(78, 17);
			this->label_IDFacturation->TabIndex = 209;
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
			this->cbxIdFacturation->Location = System::Drawing::Point(483, 298);
			this->cbxIdFacturation->Margin = System::Windows::Forms::Padding(4);
			this->cbxIdFacturation->Name = L"cbxIdFacturation";
			this->cbxIdFacturation->Size = System::Drawing::Size(104, 24);
			this->cbxIdFacturation->TabIndex = 208;
			this->cbxIdFacturation->SelectedIndexChanged += gcnew System::EventHandler(this, &InputCommandeUpdate::cbxIdFacturation_SelectedIndexChanged);
			// 
			// label_adresse_facturation
			// 
			this->label_adresse_facturation->AutoSize = true;
			this->label_adresse_facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_adresse_facturation->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse_facturation->Location = System::Drawing::Point(398, 270);
			this->label_adresse_facturation->Name = L"label_adresse_facturation";
			this->label_adresse_facturation->Size = System::Drawing::Size(177, 17);
			this->label_adresse_facturation->TabIndex = 207;
			this->label_adresse_facturation->Text = L"Adresse de Facturation";
			// 
			// tbxCPF
			// 
			this->tbxCPF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCPF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCPF->Enabled = false;
			this->tbxCPF->ForeColor = System::Drawing::Color::Silver;
			this->tbxCPF->Location = System::Drawing::Point(684, 417);
			this->tbxCPF->Margin = System::Windows::Forms::Padding(4);
			this->tbxCPF->Name = L"tbxCPF";
			this->tbxCPF->Size = System::Drawing::Size(86, 15);
			this->tbxCPF->TabIndex = 225;
			// 
			// tbxVilleF
			// 
			this->tbxVilleF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxVilleF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxVilleF->Enabled = false;
			this->tbxVilleF->ForeColor = System::Drawing::Color::Silver;
			this->tbxVilleF->Location = System::Drawing::Point(460, 417);
			this->tbxVilleF->Margin = System::Windows::Forms::Padding(4);
			this->tbxVilleF->Name = L"tbxVilleF";
			this->tbxVilleF->Size = System::Drawing::Size(140, 15);
			this->tbxVilleF->TabIndex = 224;
			// 
			// tbxRegionF
			// 
			this->tbxRegionF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRegionF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRegionF->Enabled = false;
			this->tbxRegionF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRegionF->Location = System::Drawing::Point(460, 383);
			this->tbxRegionF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRegionF->Name = L"tbxRegionF";
			this->tbxRegionF->Size = System::Drawing::Size(200, 15);
			this->tbxRegionF->TabIndex = 223;
			// 
			// tbxPaysF
			// 
			this->tbxPaysF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaysF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaysF->Enabled = false;
			this->tbxPaysF->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaysF->Location = System::Drawing::Point(460, 347);
			this->tbxPaysF->Margin = System::Windows::Forms::Padding(4);
			this->tbxPaysF->Name = L"tbxPaysF";
			this->tbxPaysF->Size = System::Drawing::Size(200, 15);
			this->tbxPaysF->TabIndex = 222;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(535, 481);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 17);
			this->label11->TabIndex = 221;
			this->label11->Text = L"Résidence";
			// 
			// tbxResidenceF
			// 
			this->tbxResidenceF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidenceF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidenceF->Enabled = false;
			this->tbxResidenceF->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidenceF->Location = System::Drawing::Point(612, 481);
			this->tbxResidenceF->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidenceF->Name = L"tbxResidenceF";
			this->tbxResidenceF->Size = System::Drawing::Size(158, 15);
			this->tbxResidenceF->TabIndex = 220;
			// 
			// tbxEtageF
			// 
			this->tbxEtageF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtageF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtageF->Enabled = false;
			this->tbxEtageF->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtageF->Location = System::Drawing::Point(460, 481);
			this->tbxEtageF->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtageF->Name = L"tbxEtageF";
			this->tbxEtageF->Size = System::Drawing::Size(70, 15);
			this->tbxEtageF->TabIndex = 219;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Silver;
			this->label12->Location = System::Drawing::Point(399, 481);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 17);
			this->label12->TabIndex = 218;
			this->label12->Text = L"Etage";
			// 
			// tbxRueF
			// 
			this->tbxRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueF->Enabled = false;
			this->tbxRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueF->Location = System::Drawing::Point(570, 451);
			this->tbxRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueF->Name = L"tbxRueF";
			this->tbxRueF->Size = System::Drawing::Size(200, 15);
			this->tbxRueF->TabIndex = 217;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Silver;
			this->label13->Location = System::Drawing::Point(535, 449);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 17);
			this->label13->TabIndex = 216;
			this->label13->Text = L"Rue";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(398, 449);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 17);
			this->label14->TabIndex = 215;
			this->label14->Text = L"N° Rue";
			// 
			// tbxNRueF
			// 
			this->tbxNRueF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRueF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRueF->Enabled = false;
			this->tbxNRueF->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRueF->Location = System::Drawing::Point(460, 449);
			this->tbxNRueF->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRueF->Name = L"tbxNRueF";
			this->tbxNRueF->Size = System::Drawing::Size(70, 15);
			this->tbxNRueF->TabIndex = 214;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Silver;
			this->label15->Location = System::Drawing::Point(644, 415);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 17);
			this->label15->TabIndex = 213;
			this->label15->Text = L"CP";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Silver;
			this->label16->Location = System::Drawing::Point(398, 415);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 17);
			this->label16->TabIndex = 212;
			this->label16->Text = L"Ville";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(399, 381);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 211;
			this->label2->Text = L"Region";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Silver;
			this->label21->Location = System::Drawing::Point(398, 349);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(39, 17);
			this->label21->TabIndex = 210;
			this->label21->Text = L"Pays";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Silver;
			this->label20->Location = System::Drawing::Point(12, 63);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(149, 20);
			this->label20->TabIndex = 226;
			this->label20->Text = L"Informations Client";
			// 
			// label_infos_adresses
			// 
			this->label_infos_adresses->AutoSize = true;
			this->label_infos_adresses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_infos_adresses->ForeColor = System::Drawing::Color::Silver;
			this->label_infos_adresses->Location = System::Drawing::Point(13, 228);
			this->label_infos_adresses->Name = L"label_infos_adresses";
			this->label_infos_adresses->Size = System::Drawing::Size(177, 20);
			this->label_infos_adresses->TabIndex = 227;
			this->label_infos_adresses->Text = L"Informations Adresses";
			// 
			// label_titre_infos_articles
			// 
			this->label_titre_infos_articles->AutoSize = true;
			this->label_titre_infos_articles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_titre_infos_articles->ForeColor = System::Drawing::Color::Silver;
			this->label_titre_infos_articles->Location = System::Drawing::Point(281, 526);
			this->label_titre_infos_articles->Name = L"label_titre_infos_articles";
			this->label_titre_infos_articles->Size = System::Drawing::Size(163, 20);
			this->label_titre_infos_articles->TabIndex = 228;
			this->label_titre_infos_articles->Text = L"Informations Articles";
			// 
			// cbxNomArticle
			// 
			this->cbxNomArticle->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxNomArticle->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxNomArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxNomArticle->ForeColor = System::Drawing::Color::Silver;
			this->cbxNomArticle->FormattingEnabled = true;
			this->cbxNomArticle->Location = System::Drawing::Point(406, 611);
			this->cbxNomArticle->Margin = System::Windows::Forms::Padding(4);
			this->cbxNomArticle->Name = L"cbxNomArticle";
			this->cbxNomArticle->Size = System::Drawing::Size(92, 24);
			this->cbxNomArticle->TabIndex = 229;
			// 
			// label_nom_article
			// 
			this->label_nom_article->AutoSize = true;
			this->label_nom_article->ForeColor = System::Drawing::Color::Silver;
			this->label_nom_article->Location = System::Drawing::Point(293, 615);
			this->label_nom_article->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_nom_article->Name = L"label_nom_article";
			this->label_nom_article->Size = System::Drawing::Size(84, 17);
			this->label_nom_article->TabIndex = 230;
			this->label_nom_article->Text = L"Nom Article ";
			// 
			// label_qte_article
			// 
			this->label_qte_article->AutoSize = true;
			this->label_qte_article->ForeColor = System::Drawing::Color::Silver;
			this->label_qte_article->Location = System::Drawing::Point(292, 657);
			this->label_qte_article->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_qte_article->Name = L"label_qte_article";
			this->label_qte_article->Size = System::Drawing::Size(109, 17);
			this->label_qte_article->TabIndex = 231;
			this->label_qte_article->Text = L"Quantité Article ";
			this->label_qte_article->Click += gcnew System::EventHandler(this, &InputCommandeUpdate::label25_Click);
			// 
			// label_couleur_article
			// 
			this->label_couleur_article->AutoSize = true;
			this->label_couleur_article->ForeColor = System::Drawing::Color::Silver;
			this->label_couleur_article->Location = System::Drawing::Point(292, 701);
			this->label_couleur_article->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_couleur_article->Name = L"label_couleur_article";
			this->label_couleur_article->Size = System::Drawing::Size(100, 17);
			this->label_couleur_article->TabIndex = 233;
			this->label_couleur_article->Text = L"Couleur Article";
			// 
			// label_prix_HT
			// 
			this->label_prix_HT->AutoSize = true;
			this->label_prix_HT->ForeColor = System::Drawing::Color::Silver;
			this->label_prix_HT->Location = System::Drawing::Point(590, 611);
			this->label_prix_HT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_prix_HT->Name = L"label_prix_HT";
			this->label_prix_HT->Size = System::Drawing::Size(54, 17);
			this->label_prix_HT->TabIndex = 236;
			this->label_prix_HT->Text = L"Prix HT";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::Color::Silver;
			this->label28->Location = System::Drawing::Point(590, 654);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 17);
			this->label28->TabIndex = 238;
			// 
			// tbxTauxTVA
			// 
			this->tbxTauxTVA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxTauxTVA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxTauxTVA->Enabled = false;
			this->tbxTauxTVA->ForeColor = System::Drawing::Color::Silver;
			this->tbxTauxTVA->Location = System::Drawing::Point(664, 652);
			this->tbxTauxTVA->Margin = System::Windows::Forms::Padding(4);
			this->tbxTauxTVA->Name = L"tbxTauxTVA";
			this->tbxTauxTVA->Size = System::Drawing::Size(92, 15);
			this->tbxTauxTVA->TabIndex = 239;
			// 
			// label_taux_TVA
			// 
			this->label_taux_TVA->AutoSize = true;
			this->label_taux_TVA->ForeColor = System::Drawing::Color::Silver;
			this->label_taux_TVA->Location = System::Drawing::Point(590, 650);
			this->label_taux_TVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_taux_TVA->Name = L"label_taux_TVA";
			this->label_taux_TVA->Size = System::Drawing::Size(70, 17);
			this->label_taux_TVA->TabIndex = 240;
			this->label_taux_TVA->Text = L"Taux TVA";
			// 
			// button_delete_article
			// 
			this->button_delete_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->button_delete_article->FlatAppearance->BorderSize = 0;
			this->button_delete_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_delete_article->ForeColor = System::Drawing::Color::Black;
			this->button_delete_article->Location = System::Drawing::Point(16, 609);
			this->button_delete_article->Margin = System::Windows::Forms::Padding(4);
			this->button_delete_article->Name = L"button_delete_article";
			this->button_delete_article->Size = System::Drawing::Size(174, 28);
			this->button_delete_article->TabIndex = 242;
			this->button_delete_article->Text = L"Supprimer Article";
			this->button_delete_article->UseVisualStyleBackColor = false;
			// 
			// button_add_article
			// 
			this->button_add_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->button_add_article->FlatAppearance->BorderSize = 0;
			this->button_add_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_add_article->ForeColor = System::Drawing::Color::Black;
			this->button_add_article->Location = System::Drawing::Point(17, 679);
			this->button_add_article->Margin = System::Windows::Forms::Padding(4);
			this->button_add_article->Name = L"button_add_article";
			this->button_add_article->Size = System::Drawing::Size(174, 28);
			this->button_add_article->TabIndex = 241;
			this->button_add_article->Text = L"Ajouter Article";
			this->button_add_article->UseVisualStyleBackColor = false;
			// 
			// tbxPrixHT
			// 
			this->tbxPrixHT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrixHT->Enabled = false;
			this->tbxPrixHT->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrixHT->Location = System::Drawing::Point(664, 613);
			this->tbxPrixHT->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrixHT->Name = L"tbxPrixHT";
			this->tbxPrixHT->Size = System::Drawing::Size(92, 15);
			this->tbxPrixHT->TabIndex = 243;
			// 
			// tbxTotalTTC
			// 
			this->tbxTotalTTC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxTotalTTC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxTotalTTC->Enabled = false;
			this->tbxTotalTTC->ForeColor = System::Drawing::Color::Silver;
			this->tbxTotalTTC->Location = System::Drawing::Point(664, 692);
			this->tbxTotalTTC->Margin = System::Windows::Forms::Padding(4);
			this->tbxTotalTTC->Name = L"tbxTotalTTC";
			this->tbxTotalTTC->Size = System::Drawing::Size(92, 15);
			this->tbxTotalTTC->TabIndex = 244;
			// 
			// label_total_TTC
			// 
			this->label_total_TTC->AutoSize = true;
			this->label_total_TTC->ForeColor = System::Drawing::Color::Silver;
			this->label_total_TTC->Location = System::Drawing::Point(586, 690);
			this->label_total_TTC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_total_TTC->Name = L"label_total_TTC";
			this->label_total_TTC->Size = System::Drawing::Size(71, 17);
			this->label_total_TTC->TabIndex = 245;
			this->label_total_TTC->Text = L"Total TTC";
			// 
			// tbxCouleurArticle
			// 
			this->tbxCouleurArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCouleurArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCouleurArticle->Enabled = false;
			this->tbxCouleurArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxCouleurArticle->Location = System::Drawing::Point(406, 703);
			this->tbxCouleurArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxCouleurArticle->Name = L"tbxCouleurArticle";
			this->tbxCouleurArticle->Size = System::Drawing::Size(92, 15);
			this->tbxCouleurArticle->TabIndex = 246;
			// 
			// tbxQteArticle
			// 
			this->tbxQteArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxQteArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxQteArticle->Enabled = false;
			this->tbxQteArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxQteArticle->Location = System::Drawing::Point(406, 659);
			this->tbxQteArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxQteArticle->Name = L"tbxQteArticle";
			this->tbxQteArticle->Size = System::Drawing::Size(92, 15);
			this->tbxQteArticle->TabIndex = 247;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://i.imgur.com/8U0xiHQ.png";
			this->pictureBox1->Location = System::Drawing::Point(538, 72);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 185);
			this->pictureBox1->TabIndex = 248;
			this->pictureBox1->TabStop = false;
			// 
			// InputCommandeUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(790, 818);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tbxQteArticle);
			this->Controls->Add(this->tbxCouleurArticle);
			this->Controls->Add(this->label_total_TTC);
			this->Controls->Add(this->tbxTotalTTC);
			this->Controls->Add(this->tbxPrixHT);
			this->Controls->Add(this->button_delete_article);
			this->Controls->Add(this->button_add_article);
			this->Controls->Add(this->label_taux_TVA);
			this->Controls->Add(this->tbxTauxTVA);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label_prix_HT);
			this->Controls->Add(this->label_couleur_article);
			this->Controls->Add(this->label_qte_article);
			this->Controls->Add(this->label_nom_article);
			this->Controls->Add(this->cbxNomArticle);
			this->Controls->Add(this->label_titre_infos_articles);
			this->Controls->Add(this->label_infos_adresses);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->tbxCPF);
			this->Controls->Add(this->tbxVilleF);
			this->Controls->Add(this->tbxRegionF);
			this->Controls->Add(this->tbxPaysF);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label_IDFacturation);
			this->Controls->Add(this->cbxIdFacturation);
			this->Controls->Add(this->label_adresse_facturation);
			this->Controls->Add(this->tbxRegionL);
			this->Controls->Add(this->tbxPaysL);
			this->Controls->Add(this->tbxCPL);
			this->Controls->Add(this->tbxVilleL);
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
			this->Controls->Add(this->label_idLivraison);
			this->Controls->Add(this->cbxIdLivraison);
			this->Controls->Add(this->label_adresse_livraison);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbxIdClient);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->tbxNomClient);
			this->Controls->Add(this->tbxPrenomClient);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(808, 865);
			this->MinimumSize = System::Drawing::Size(808, 865);
			this->Name = L"InputCommandeUpdate";
			this->Text = L"Mise à jour Commande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void tbxIdClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	cbxIdLivraison->Items->Clear();
	cbxIdFacturation->Items->Clear();
	cbxIdLivraison->Text ="" ;
	cbxIdFacturation->Text = "";
	this->tbxPaysL->Text = "";
	this->tbxRegionL->Text = "";
	this->tbxVilleL->Text = "";
	this->tbxCPL->Text = "";
	this->tbxNRueL->Text = "";
	this->tbxRueL->Text = "";
	this->tbxEtageL->Text = "";
	this->tbxResidenceL->Text = "";
	this->tbxPaysF->Text = "";
	this->tbxRegionF->Text = "";
	this->tbxVilleF->Text = "";
	this->tbxCPF->Text = "";
	this->tbxNRueF->Text = "";
	this->tbxRueF->Text = "";
	this->tbxEtageF->Text = "";
	this->tbxResidenceF->Text = "";

	NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_facturation = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_id_adresse_facturation;
	vecteur_id_adresse_facturation = id_adresse_facturation->repertorierIdAdresseFacturation(vecteur_id_adresse_facturation, int::Parse(this->tbxIdClient->Text));
	this->cbxIdFacturation->Items->Add(gcnew String(vecteur_id_adresse_facturation[0].c_str()));


	NS_Utilitaire_svc::CLserviceutilitaire^ id_adresse_livraison = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_id_adresse_livraison;
	vecteur_id_adresse_livraison = id_adresse_livraison->repertorierIdAdresseLivraison(vecteur_id_adresse_livraison, int::Parse(this->tbxIdClient->Text));
	this->cbxIdLivraison->Items->Add(gcnew String(vecteur_id_adresse_livraison[0].c_str()));
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
}
};
}
