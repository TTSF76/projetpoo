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
	private: System::Windows::Forms::Button^ btnAnnuler;
	protected:



















	private: System::Windows::Forms::Button^ btnValider;

	private: System::Windows::Forms::GroupBox^ gbxFact;
	private: System::Windows::Forms::DateTimePicker^ dtpPaiementDate;



	private: System::Windows::Forms::Label^ lblPaiementDate;

	private: System::Windows::Forms::Label^ lblPaiementMoyen;
	private: System::Windows::Forms::ComboBox^ cbxClient;
	private: System::Windows::Forms::TextBox^ tbxPaiementNombre;


	private: System::Windows::Forms::TextBox^ tbxTelSAV;

	private: System::Windows::Forms::TextBox^ tbxNomSociete;

	private: System::Windows::Forms::Label^ lblPaiementNombre;
	private: System::Windows::Forms::Label^ lblClient;
	private: System::Windows::Forms::Label^ lblTelSAV;
	private: System::Windows::Forms::Label^ lblSocieteNom;
	private: System::Windows::Forms::GroupBox^ gbxCommande;
	private: System::Windows::Forms::DateTimePicker^ dtpEnvoi;

	private: System::Windows::Forms::DateTimePicker^ dtpLivraison;
	private: System::Windows::Forms::TextBox^ tbxTotalPrix;

	private: System::Windows::Forms::Label^ lblTotalPrix;




	private: System::Windows::Forms::TextBox^ tbxTVA;

	private: System::Windows::Forms::TextBox^ tbxTotalHT;

	private: System::Windows::Forms::TextBox^ tbxRef;

	private: System::Windows::Forms::Label^ prixht;
	private: System::Windows::Forms::Label^ Produit;
	private: System::Windows::Forms::Label^ Couleur;
	private: System::Windows::Forms::Label^ Ref;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::GroupBox^ gbxAdrEntreprise;
	private: System::Windows::Forms::Label^ lblResidence;
	private: System::Windows::Forms::TextBox^ tbxResidence;

	private: System::Windows::Forms::TextBox^ tbxEtage;

	private: System::Windows::Forms::Label^ lblEtage;
	private: System::Windows::Forms::TextBox^ tbxRue;

	private: System::Windows::Forms::Label^ lblRue;
	private: System::Windows::Forms::Label^ lblRueNum;
	private: System::Windows::Forms::TextBox^ tbxRueNum;

	private: System::Windows::Forms::Label^ lblCodePostal;
	private: System::Windows::Forms::TextBox^ tbxCodePostal;

	private: System::Windows::Forms::Label^ lblVille;
	private: System::Windows::Forms::ComboBox^ cbxVille;

	private: System::Windows::Forms::Label^ lblRegion;
	private: System::Windows::Forms::Label^ lblPays;
	private: System::Windows::Forms::ComboBox^ cbxRegion;

private: System::Windows::Forms::ComboBox^ cbxPays;

private: System::Windows::Forms::ComboBox^ cbxPaiementMoyen;


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
			this->gbxAdrEntreprise = (gcnew System::Windows::Forms::GroupBox());
			this->lblResidence = (gcnew System::Windows::Forms::Label());
			this->tbxResidence = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtage = (gcnew System::Windows::Forms::TextBox());
			this->lblEtage = (gcnew System::Windows::Forms::Label());
			this->tbxRue = (gcnew System::Windows::Forms::TextBox());
			this->lblRue = (gcnew System::Windows::Forms::Label());
			this->lblRueNum = (gcnew System::Windows::Forms::Label());
			this->tbxRueNum = (gcnew System::Windows::Forms::TextBox());
			this->lblCodePostal = (gcnew System::Windows::Forms::Label());
			this->tbxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->lblVille = (gcnew System::Windows::Forms::Label());
			this->cbxVille = (gcnew System::Windows::Forms::ComboBox());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->lblPays = (gcnew System::Windows::Forms::Label());
			this->cbxRegion = (gcnew System::Windows::Forms::ComboBox());
			this->cbxPays = (gcnew System::Windows::Forms::ComboBox());
			this->gbxFact = (gcnew System::Windows::Forms::GroupBox());
			this->cbxPaiementMoyen = (gcnew System::Windows::Forms::ComboBox());
			this->dtpPaiementDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblPaiementDate = (gcnew System::Windows::Forms::Label());
			this->lblPaiementMoyen = (gcnew System::Windows::Forms::Label());
			this->tbxNomSociete = (gcnew System::Windows::Forms::TextBox());
			this->lblSocieteNom = (gcnew System::Windows::Forms::Label());
			this->tbxTelSAV = (gcnew System::Windows::Forms::TextBox());
			this->lblPaiementNombre = (gcnew System::Windows::Forms::Label());
			this->lblClient = (gcnew System::Windows::Forms::Label());
			this->lblTelSAV = (gcnew System::Windows::Forms::Label());
			this->cbxClient = (gcnew System::Windows::Forms::ComboBox());
			this->tbxPaiementNombre = (gcnew System::Windows::Forms::TextBox());
			this->gbxCommande = (gcnew System::Windows::Forms::GroupBox());
			this->dtpEnvoi = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbxTotalPrix = (gcnew System::Windows::Forms::TextBox());
			this->lblTotalPrix = (gcnew System::Windows::Forms::Label());
			this->tbxTVA = (gcnew System::Windows::Forms::TextBox());
			this->tbxTotalHT = (gcnew System::Windows::Forms::TextBox());
			this->tbxRef = (gcnew System::Windows::Forms::TextBox());
			this->prixht = (gcnew System::Windows::Forms::Label());
			this->Produit = (gcnew System::Windows::Forms::Label());
			this->Couleur = (gcnew System::Windows::Forms::Label());
			this->Ref = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->gbxMain->SuspendLayout();
			this->gbxAdrEntreprise->SuspendLayout();
			this->gbxFact->SuspendLayout();
			this->gbxCommande->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxMain
			// 
			this->gbxMain->Controls->Add(this->gbxAdrEntreprise);
			this->gbxMain->Controls->Add(this->gbxFact);
			this->gbxMain->Controls->Add(this->gbxCommande);
			this->gbxMain->Controls->Add(this->btnAnnuler);
			this->gbxMain->Controls->Add(this->btnValider);
			this->gbxMain->Location = System::Drawing::Point(11, 11);
			this->gbxMain->Margin = System::Windows::Forms::Padding(2);
			this->gbxMain->Name = L"gbxMain";
			this->gbxMain->Padding = System::Windows::Forms::Padding(2);
			this->gbxMain->Size = System::Drawing::Size(887, 265);
			this->gbxMain->TabIndex = 1;
			this->gbxMain->TabStop = false;
			this->gbxMain->Text = L"Insertion de commande";
			// 
			// gbxAdrEntreprise
			// 
			this->gbxAdrEntreprise->Controls->Add(this->lblResidence);
			this->gbxAdrEntreprise->Controls->Add(this->tbxResidence);
			this->gbxAdrEntreprise->Controls->Add(this->tbxEtage);
			this->gbxAdrEntreprise->Controls->Add(this->lblEtage);
			this->gbxAdrEntreprise->Controls->Add(this->tbxRue);
			this->gbxAdrEntreprise->Controls->Add(this->lblRue);
			this->gbxAdrEntreprise->Controls->Add(this->lblRueNum);
			this->gbxAdrEntreprise->Controls->Add(this->tbxRueNum);
			this->gbxAdrEntreprise->Controls->Add(this->lblCodePostal);
			this->gbxAdrEntreprise->Controls->Add(this->tbxCodePostal);
			this->gbxAdrEntreprise->Controls->Add(this->lblVille);
			this->gbxAdrEntreprise->Controls->Add(this->cbxVille);
			this->gbxAdrEntreprise->Controls->Add(this->lblRegion);
			this->gbxAdrEntreprise->Controls->Add(this->lblPays);
			this->gbxAdrEntreprise->Controls->Add(this->cbxRegion);
			this->gbxAdrEntreprise->Controls->Add(this->cbxPays);
			this->gbxAdrEntreprise->Location = System::Drawing::Point(593, 18);
			this->gbxAdrEntreprise->Name = L"gbxAdrEntreprise";
			this->gbxAdrEntreprise->Size = System::Drawing::Size(290, 173);
			this->gbxAdrEntreprise->TabIndex = 54;
			this->gbxAdrEntreprise->TabStop = false;
			this->gbxAdrEntreprise->Text = L"Adresse de l\'entreprise";
			// 
			// lblResidence
			// 
			this->lblResidence->AutoSize = true;
			this->lblResidence->Location = System::Drawing::Point(103, 128);
			this->lblResidence->Name = L"lblResidence";
			this->lblResidence->Size = System::Drawing::Size(58, 13);
			this->lblResidence->TabIndex = 31;
			this->lblResidence->Text = L"Résidence";
			// 
			// tbxResidence
			// 
			this->tbxResidence->Location = System::Drawing::Point(167, 125);
			this->tbxResidence->Name = L"tbxResidence";
			this->tbxResidence->Size = System::Drawing::Size(110, 20);
			this->tbxResidence->TabIndex = 30;
			// 
			// tbxEtage
			// 
			this->tbxEtage->Location = System::Drawing::Point(53, 125);
			this->tbxEtage->Name = L"tbxEtage";
			this->tbxEtage->Size = System::Drawing::Size(44, 20);
			this->tbxEtage->TabIndex = 29;
			// 
			// lblEtage
			// 
			this->lblEtage->AutoSize = true;
			this->lblEtage->Location = System::Drawing::Point(6, 128);
			this->lblEtage->Name = L"lblEtage";
			this->lblEtage->Size = System::Drawing::Size(35, 13);
			this->lblEtage->TabIndex = 28;
			this->lblEtage->Text = L"Etage";
			// 
			// tbxRue
			// 
			this->tbxRue->Location = System::Drawing::Point(136, 99);
			this->tbxRue->Name = L"tbxRue";
			this->tbxRue->Size = System::Drawing::Size(141, 20);
			this->tbxRue->TabIndex = 27;
			// 
			// lblRue
			// 
			this->lblRue->AutoSize = true;
			this->lblRue->Location = System::Drawing::Point(103, 102);
			this->lblRue->Name = L"lblRue";
			this->lblRue->Size = System::Drawing::Size(27, 13);
			this->lblRue->TabIndex = 26;
			this->lblRue->Text = L"Rue";
			// 
			// lblRueNum
			// 
			this->lblRueNum->AutoSize = true;
			this->lblRueNum->Location = System::Drawing::Point(6, 102);
			this->lblRueNum->Name = L"lblRueNum";
			this->lblRueNum->Size = System::Drawing::Size(42, 13);
			this->lblRueNum->TabIndex = 25;
			this->lblRueNum->Text = L"N° Rue";
			// 
			// tbxRueNum
			// 
			this->tbxRueNum->Location = System::Drawing::Point(53, 99);
			this->tbxRueNum->Name = L"tbxRueNum";
			this->tbxRueNum->Size = System::Drawing::Size(44, 20);
			this->tbxRueNum->TabIndex = 24;
			// 
			// lblCodePostal
			// 
			this->lblCodePostal->AutoSize = true;
			this->lblCodePostal->Location = System::Drawing::Point(192, 76);
			this->lblCodePostal->Name = L"lblCodePostal";
			this->lblCodePostal->Size = System::Drawing::Size(21, 13);
			this->lblCodePostal->TabIndex = 23;
			this->lblCodePostal->Text = L"CP";
			// 
			// tbxCodePostal
			// 
			this->tbxCodePostal->Location = System::Drawing::Point(219, 73);
			this->tbxCodePostal->Name = L"tbxCodePostal";
			this->tbxCodePostal->Size = System::Drawing::Size(58, 20);
			this->tbxCodePostal->TabIndex = 22;
			// 
			// lblVille
			// 
			this->lblVille->AutoSize = true;
			this->lblVille->Location = System::Drawing::Point(6, 76);
			this->lblVille->Name = L"lblVille";
			this->lblVille->Size = System::Drawing::Size(26, 13);
			this->lblVille->TabIndex = 21;
			this->lblVille->Text = L"Ville";
			// 
			// cbxVille
			// 
			this->cbxVille->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxVille->FormattingEnabled = true;
			this->cbxVille->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->cbxVille->Location = System::Drawing::Point(53, 73);
			this->cbxVille->Name = L"cbxVille";
			this->cbxVille->Size = System::Drawing::Size(133, 21);
			this->cbxVille->TabIndex = 20;
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->Location = System::Drawing::Point(6, 49);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(41, 13);
			this->lblRegion->TabIndex = 19;
			this->lblRegion->Text = L"Region";
			// 
			// lblPays
			// 
			this->lblPays->AutoSize = true;
			this->lblPays->Location = System::Drawing::Point(6, 22);
			this->lblPays->Name = L"lblPays";
			this->lblPays->Size = System::Drawing::Size(30, 13);
			this->lblPays->TabIndex = 18;
			this->lblPays->Text = L"Pays";
			// 
			// cbxRegion
			// 
			this->cbxRegion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxRegion->FormattingEnabled = true;
			this->cbxRegion->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->cbxRegion->Location = System::Drawing::Point(53, 46);
			this->cbxRegion->Name = L"cbxRegion";
			this->cbxRegion->Size = System::Drawing::Size(224, 21);
			this->cbxRegion->TabIndex = 17;
			// 
			// cbxPays
			// 
			this->cbxPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxPays->FormattingEnabled = true;
			this->cbxPays->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->cbxPays->Location = System::Drawing::Point(53, 19);
			this->cbxPays->Name = L"cbxPays";
			this->cbxPays->Size = System::Drawing::Size(224, 21);
			this->cbxPays->TabIndex = 16;
			// 
			// gbxFact
			// 
			this->gbxFact->Controls->Add(this->cbxPaiementMoyen);
			this->gbxFact->Controls->Add(this->dtpPaiementDate);
			this->gbxFact->Controls->Add(this->lblPaiementDate);
			this->gbxFact->Controls->Add(this->lblPaiementMoyen);
			this->gbxFact->Controls->Add(this->tbxNomSociete);
			this->gbxFact->Controls->Add(this->lblSocieteNom);
			this->gbxFact->Controls->Add(this->tbxTelSAV);
			this->gbxFact->Controls->Add(this->lblPaiementNombre);
			this->gbxFact->Controls->Add(this->lblClient);
			this->gbxFact->Controls->Add(this->lblTelSAV);
			this->gbxFact->Controls->Add(this->cbxClient);
			this->gbxFact->Controls->Add(this->tbxPaiementNombre);
			this->gbxFact->Location = System::Drawing::Point(298, 17);
			this->gbxFact->Margin = System::Windows::Forms::Padding(2);
			this->gbxFact->Name = L"gbxFact";
			this->gbxFact->Padding = System::Windows::Forms::Padding(2);
			this->gbxFact->Size = System::Drawing::Size(290, 173);
			this->gbxFact->TabIndex = 53;
			this->gbxFact->TabStop = false;
			this->gbxFact->Text = L"Facturation";
			// 
			// cbxPaiementMoyen
			// 
			this->cbxPaiementMoyen->FormattingEnabled = true;
			this->cbxPaiementMoyen->Location = System::Drawing::Point(125, 114);
			this->cbxPaiementMoyen->Margin = System::Windows::Forms::Padding(2);
			this->cbxPaiementMoyen->Name = L"cbxPaiementMoyen";
			this->cbxPaiementMoyen->Size = System::Drawing::Size(161, 21);
			this->cbxPaiementMoyen->TabIndex = 64;
			// 
			// dtpPaiementDate
			// 
			this->dtpPaiementDate->Location = System::Drawing::Point(125, 139);
			this->dtpPaiementDate->Margin = System::Windows::Forms::Padding(2);
			this->dtpPaiementDate->Name = L"dtpPaiementDate";
			this->dtpPaiementDate->Size = System::Drawing::Size(161, 20);
			this->dtpPaiementDate->TabIndex = 63;
			// 
			// lblPaiementDate
			// 
			this->lblPaiementDate->AutoSize = true;
			this->lblPaiementDate->Location = System::Drawing::Point(4, 141);
			this->lblPaiementDate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPaiementDate->Name = L"lblPaiementDate";
			this->lblPaiementDate->Size = System::Drawing::Size(91, 13);
			this->lblPaiementDate->TabIndex = 62;
			this->lblPaiementDate->Text = L"Date de paiement";
			// 
			// lblPaiementMoyen
			// 
			this->lblPaiementMoyen->AutoSize = true;
			this->lblPaiementMoyen->Location = System::Drawing::Point(4, 117);
			this->lblPaiementMoyen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPaiementMoyen->Name = L"lblPaiementMoyen";
			this->lblPaiementMoyen->Size = System::Drawing::Size(100, 13);
			this->lblPaiementMoyen->TabIndex = 60;
			this->lblPaiementMoyen->Text = L"Moyen de paiement";
			// 
			// tbxNomSociete
			// 
			this->tbxNomSociete->Location = System::Drawing::Point(125, 17);
			this->tbxNomSociete->Margin = System::Windows::Forms::Padding(2);
			this->tbxNomSociete->Name = L"tbxNomSociete";
			this->tbxNomSociete->Size = System::Drawing::Size(161, 20);
			this->tbxNomSociete->TabIndex = 56;
			// 
			// lblSocieteNom
			// 
			this->lblSocieteNom->AutoSize = true;
			this->lblSocieteNom->Location = System::Drawing::Point(4, 20);
			this->lblSocieteNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSocieteNom->Name = L"lblSocieteNom";
			this->lblSocieteNom->Size = System::Drawing::Size(81, 13);
			this->lblSocieteNom->TabIndex = 52;
			this->lblSocieteNom->Text = L"Nom de société";
			// 
			// tbxTelSAV
			// 
			this->tbxTelSAV->Location = System::Drawing::Point(125, 41);
			this->tbxTelSAV->Margin = System::Windows::Forms::Padding(2);
			this->tbxTelSAV->Name = L"tbxTelSAV";
			this->tbxTelSAV->Size = System::Drawing::Size(161, 20);
			this->tbxTelSAV->TabIndex = 57;
			// 
			// lblPaiementNombre
			// 
			this->lblPaiementNombre->AutoSize = true;
			this->lblPaiementNombre->Location = System::Drawing::Point(4, 92);
			this->lblPaiementNombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPaiementNombre->Name = L"lblPaiementNombre";
			this->lblPaiementNombre->Size = System::Drawing::Size(110, 13);
			this->lblPaiementNombre->TabIndex = 55;
			this->lblPaiementNombre->Text = L"Nombre de paiements";
			// 
			// lblClient
			// 
			this->lblClient->AutoSize = true;
			this->lblClient->Location = System::Drawing::Point(4, 68);
			this->lblClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblClient->Name = L"lblClient";
			this->lblClient->Size = System::Drawing::Size(117, 13);
			this->lblClient->TabIndex = 54;
			this->lblClient->Text = L"Client ayant commandé";
			// 
			// lblTelSAV
			// 
			this->lblTelSAV->AutoSize = true;
			this->lblTelSAV->Location = System::Drawing::Point(4, 44);
			this->lblTelSAV->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTelSAV->Name = L"lblTelSAV";
			this->lblTelSAV->Size = System::Drawing::Size(97, 13);
			this->lblTelSAV->TabIndex = 53;
			this->lblTelSAV->Text = L"Téléphone du SAV";
			// 
			// cbxClient
			// 
			this->cbxClient->FormattingEnabled = true;
			this->cbxClient->Location = System::Drawing::Point(125, 65);
			this->cbxClient->Margin = System::Windows::Forms::Padding(2);
			this->cbxClient->Name = L"cbxClient";
			this->cbxClient->Size = System::Drawing::Size(161, 21);
			this->cbxClient->TabIndex = 59;
			// 
			// tbxPaiementNombre
			// 
			this->tbxPaiementNombre->Location = System::Drawing::Point(125, 90);
			this->tbxPaiementNombre->Margin = System::Windows::Forms::Padding(2);
			this->tbxPaiementNombre->Name = L"tbxPaiementNombre";
			this->tbxPaiementNombre->Size = System::Drawing::Size(161, 20);
			this->tbxPaiementNombre->TabIndex = 58;
			// 
			// gbxCommande
			// 
			this->gbxCommande->Controls->Add(this->dtpEnvoi);
			this->gbxCommande->Controls->Add(this->dtpLivraison);
			this->gbxCommande->Controls->Add(this->tbxTotalPrix);
			this->gbxCommande->Controls->Add(this->lblTotalPrix);
			this->gbxCommande->Controls->Add(this->tbxTVA);
			this->gbxCommande->Controls->Add(this->tbxTotalHT);
			this->gbxCommande->Controls->Add(this->tbxRef);
			this->gbxCommande->Controls->Add(this->prixht);
			this->gbxCommande->Controls->Add(this->Produit);
			this->gbxCommande->Controls->Add(this->Couleur);
			this->gbxCommande->Controls->Add(this->Ref);
			this->gbxCommande->Controls->Add(this->nom);
			this->gbxCommande->Location = System::Drawing::Point(4, 17);
			this->gbxCommande->Margin = System::Windows::Forms::Padding(2);
			this->gbxCommande->Name = L"gbxCommande";
			this->gbxCommande->Padding = System::Windows::Forms::Padding(2);
			this->gbxCommande->Size = System::Drawing::Size(290, 173);
			this->gbxCommande->TabIndex = 52;
			this->gbxCommande->TabStop = false;
			this->gbxCommande->Text = L"Commande";
			// 
			// dtpEnvoi
			// 
			this->dtpEnvoi->Location = System::Drawing::Point(82, 65);
			this->dtpEnvoi->Margin = System::Windows::Forms::Padding(2);
			this->dtpEnvoi->Name = L"dtpEnvoi";
			this->dtpEnvoi->Size = System::Drawing::Size(204, 20);
			this->dtpEnvoi->TabIndex = 58;
			// 
			// dtpLivraison
			// 
			this->dtpLivraison->Location = System::Drawing::Point(82, 41);
			this->dtpLivraison->Margin = System::Windows::Forms::Padding(2);
			this->dtpLivraison->Name = L"dtpLivraison";
			this->dtpLivraison->Size = System::Drawing::Size(204, 20);
			this->dtpLivraison->TabIndex = 57;
			// 
			// tbxTotalPrix
			// 
			this->tbxTotalPrix->Location = System::Drawing::Point(82, 137);
			this->tbxTotalPrix->Margin = System::Windows::Forms::Padding(2);
			this->tbxTotalPrix->Name = L"tbxTotalPrix";
			this->tbxTotalPrix->Size = System::Drawing::Size(204, 20);
			this->tbxTotalPrix->TabIndex = 56;
			// 
			// lblTotalPrix
			// 
			this->lblTotalPrix->AutoSize = true;
			this->lblTotalPrix->Location = System::Drawing::Point(4, 140);
			this->lblTotalPrix->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTotalPrix->Name = L"lblTotalPrix";
			this->lblTotalPrix->Size = System::Drawing::Size(47, 13);
			this->lblTotalPrix->TabIndex = 55;
			this->lblTotalPrix->Text = L"Prix total";
			// 
			// tbxTVA
			// 
			this->tbxTVA->Location = System::Drawing::Point(82, 113);
			this->tbxTVA->Margin = System::Windows::Forms::Padding(2);
			this->tbxTVA->Name = L"tbxTVA";
			this->tbxTVA->Size = System::Drawing::Size(204, 20);
			this->tbxTVA->TabIndex = 54;
			// 
			// tbxTotalHT
			// 
			this->tbxTotalHT->Location = System::Drawing::Point(82, 89);
			this->tbxTotalHT->Margin = System::Windows::Forms::Padding(2);
			this->tbxTotalHT->Name = L"tbxTotalHT";
			this->tbxTotalHT->Size = System::Drawing::Size(204, 20);
			this->tbxTotalHT->TabIndex = 53;
			// 
			// tbxRef
			// 
			this->tbxRef->Location = System::Drawing::Point(82, 17);
			this->tbxRef->Margin = System::Windows::Forms::Padding(2);
			this->tbxRef->Name = L"tbxRef";
			this->tbxRef->Size = System::Drawing::Size(204, 20);
			this->tbxRef->TabIndex = 52;
			// 
			// prixht
			// 
			this->prixht->AutoSize = true;
			this->prixht->Location = System::Drawing::Point(4, 116);
			this->prixht->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->prixht->Name = L"prixht";
			this->prixht->Size = System::Drawing::Size(74, 13);
			this->prixht->TabIndex = 51;
			this->prixht->Text = L"Prix de la TVA";
			// 
			// Produit
			// 
			this->Produit->AutoSize = true;
			this->Produit->Location = System::Drawing::Point(4, 92);
			this->Produit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Produit->Name = L"Produit";
			this->Produit->Size = System::Drawing::Size(65, 13);
			this->Produit->TabIndex = 50;
			this->Produit->Text = L"Prix total HT";
			// 
			// Couleur
			// 
			this->Couleur->AutoSize = true;
			this->Couleur->Location = System::Drawing::Point(4, 68);
			this->Couleur->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Couleur->Name = L"Couleur";
			this->Couleur->Size = System::Drawing::Size(67, 13);
			this->Couleur->TabIndex = 49;
			this->Couleur->Text = L"Date d\'envoi";
			// 
			// Ref
			// 
			this->Ref->AutoSize = true;
			this->Ref->Location = System::Drawing::Point(4, 44);
			this->Ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(71, 13);
			this->Ref->TabIndex = 48;
			this->Ref->Text = L"Date livraison";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(4, 21);
			this->nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(57, 13);
			this->nom->TabIndex = 47;
			this->nom->Text = L"Reférence";
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Location = System::Drawing::Point(444, 195);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(439, 63);
			this->btnAnnuler->TabIndex = 23;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputCommandeInserer::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(4, 195);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(440, 63);
			this->btnValider->TabIndex = 22;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputCommandeInserer::btnValider_Click);
			// 
			// InputCommandeInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(908, 285);
			this->Controls->Add(this->gbxMain);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InputCommandeInserer";
			this->Text = L"Insérer une commande";
			this->gbxMain->ResumeLayout(false);
			this->gbxAdrEntreprise->ResumeLayout(false);
			this->gbxAdrEntreprise->PerformLayout();
			this->gbxFact->ResumeLayout(false);
			this->gbxFact->PerformLayout();
			this->gbxCommande->ResumeLayout(false);
			this->gbxCommande->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Code pour validation
		this->Close();
	}
	private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}
