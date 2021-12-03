#pragma once
#include "CLserviceadresse.h"
#include "CLserviceutilitaire.h"
#include "CLpersonnel.h"
#include "UIAction.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputPersonnelUpdate
	/// </summary>
	public ref class InputPersonnelUpdate : public System::Windows::Forms::Form
	{
	public:
		InputPersonnelUpdate(void)
		{
			InitializeComponent();
			this->tbxIdPersonnel->Text = NS_map_personnel::CLpersonnel::pvalue;
			NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_ville;
			list_ville = ville->repertorierVilles(list_ville);
			for (int i = 0; i < list_ville.size(); i++) {
				this->cbxVille->Items->Add(gcnew String(list_ville[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_pays;
			list_pays = pays->repertorierPays(list_pays);
			for (int i = 0; i < list_pays.size(); i++) {
				this->cbxPays->Items->Add(gcnew String(list_pays[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ code_postal = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_code_postaux;
			list_code_postaux = code_postal->repertorierCodePostaux(list_code_postaux);
			for (int i = 0; i < list_code_postaux.size(); i++) {
				this->cbxCode_postal->Items->Add(gcnew String(list_code_postaux[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_region;
			list_region = region->repertorierRegion(list_region);
			for (int i = 0; i < list_region.size(); i++) {
				this->cbxRegion->Items->Add(gcnew String(list_region[i].c_str()));
			}
			NS_Utilitaire_svc::CLserviceutilitaire^ nomprenom = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> vecteur_nom_prenom;
			vecteur_nom_prenom = nomprenom->miseAjourNomPrenomPersonnel(vecteur_nom_prenom, int::Parse(this->tbxIdPersonnel->Text));

			NS_Utilitaire_svc::CLserviceutilitaire^ sup_hierar = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_superieur;
			list_superieur = sup_hierar->repertorierSuperieurHierarchique(list_superieur);
			for (int i = 0; i < list_superieur.size(); i++) {
				this->cbxManager->Items->Add(gcnew String(list_superieur[i].c_str()));
			}
			this->cbxManager->Items->Add("Lui-même");

			this->tbxPrenom->Text = (gcnew String(vecteur_nom_prenom[1].c_str()));
			this->tbxNom->Text = (gcnew String(vecteur_nom_prenom[0].c_str()));
			this->dtpEmbauche->Value = System::DateTime::Parse(gcnew String(vecteur_nom_prenom[2].c_str()));
			this->cbxManager->Text = (gcnew String(vecteur_nom_prenom[3].c_str()));
			this->tbxIdAdress->Text = (gcnew String(vecteur_nom_prenom[4].c_str()));

			NS_Utilitaire_svc::CLserviceutilitaire^ info_adresse = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> vecteur_adresse_livraison;
			vecteur_adresse_livraison = info_adresse->miseAjourAdresseLivraison(vecteur_adresse_livraison, int::Parse(this->tbxIdAdress->Text));

			this->cbxPays->Text = (gcnew String(vecteur_adresse_livraison[7].c_str()));
			this->cbxRegion->Text = (gcnew String(vecteur_adresse_livraison[6].c_str()));
			this->cbxVille->Text = (gcnew String(vecteur_adresse_livraison[5].c_str()));
			this->cbxCode_postal->Text = (gcnew String(vecteur_adresse_livraison[4].c_str()));
			this->tbxRueNum->Text = (gcnew String(vecteur_adresse_livraison[1].c_str()));
			this->tbxRue->Text = (gcnew String(vecteur_adresse_livraison[0].c_str()));
			this->tbxEtage->Text = (gcnew String(vecteur_adresse_livraison[3].c_str()));
			this->tbxResidence->Text = (gcnew String(vecteur_adresse_livraison[2].c_str()));
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InputPersonnelUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbxCode_postal;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_titre_infos;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Label^ lblResidence;
	private: System::Windows::Forms::Label^ lblEmbauche;
	private: System::Windows::Forms::TextBox^ tbxResidence;
	private: System::Windows::Forms::TextBox^ tbxEtage;
	private: System::Windows::Forms::DateTimePicker^ dtpEmbauche;
	private: System::Windows::Forms::Label^ lblEtage;
	private: System::Windows::Forms::TextBox^ tbxPrenom;
	private: System::Windows::Forms::TextBox^ tbxRue;
	private: System::Windows::Forms::Label^ lblManager;
	private: System::Windows::Forms::Label^ lblRue;
	private: System::Windows::Forms::Label^ lblRueNum;
	private: System::Windows::Forms::ComboBox^ cbxManager;
	private: System::Windows::Forms::TextBox^ tbxRueNum;
	private: System::Windows::Forms::Label^ lblCodePostal;
	private: System::Windows::Forms::Label^ lblNom;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::Label^ lblVille;
	private: System::Windows::Forms::Label^ lblPrenom;
	private: System::Windows::Forms::ComboBox^ cbxVille;
	private: System::Windows::Forms::ComboBox^ cbxRegion;
	private: System::Windows::Forms::Label^ lblRegion;
	private: System::Windows::Forms::ComboBox^ cbxPays;
	private: System::Windows::Forms::Label^ lblPays;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::TextBox^ tbxIdPersonnel;
	private: System::Windows::Forms::TextBox^ tbxNomPrenomManager;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ tbxIdAdress;

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
			this->cbxCode_postal = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_titre_infos = (gcnew System::Windows::Forms::Label());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->lblResidence = (gcnew System::Windows::Forms::Label());
			this->lblEmbauche = (gcnew System::Windows::Forms::Label());
			this->tbxResidence = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtage = (gcnew System::Windows::Forms::TextBox());
			this->dtpEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblEtage = (gcnew System::Windows::Forms::Label());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbxRue = (gcnew System::Windows::Forms::TextBox());
			this->lblManager = (gcnew System::Windows::Forms::Label());
			this->lblRue = (gcnew System::Windows::Forms::Label());
			this->lblRueNum = (gcnew System::Windows::Forms::Label());
			this->cbxManager = (gcnew System::Windows::Forms::ComboBox());
			this->tbxRueNum = (gcnew System::Windows::Forms::TextBox());
			this->lblCodePostal = (gcnew System::Windows::Forms::Label());
			this->lblNom = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->lblVille = (gcnew System::Windows::Forms::Label());
			this->lblPrenom = (gcnew System::Windows::Forms::Label());
			this->cbxVille = (gcnew System::Windows::Forms::ComboBox());
			this->cbxRegion = (gcnew System::Windows::Forms::ComboBox());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->cbxPays = (gcnew System::Windows::Forms::ComboBox());
			this->lblPays = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->tbxIdPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->tbxNomPrenomManager = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbxIdAdress = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cbxCode_postal
			// 
			this->cbxCode_postal->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxCode_postal->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxCode_postal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->cbxCode_postal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbxCode_postal->ForeColor = System::Drawing::Color::Silver;
			this->cbxCode_postal->FormattingEnabled = true;
			this->cbxCode_postal->Location = System::Drawing::Point(733, 163);
			this->cbxCode_postal->Margin = System::Windows::Forms::Padding(4);
			this->cbxCode_postal->Name = L"cbxCode_postal";
			this->cbxCode_postal->Size = System::Drawing::Size(76, 24);
			this->cbxCode_postal->TabIndex = 54;
			this->cbxCode_postal->SelectedIndexChanged += gcnew System::EventHandler(this, &InputPersonnelUpdate::cbxCode_postal_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(449, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Adresse de Résidence";
			// 
			// label_titre_infos
			// 
			this->label_titre_infos->AutoSize = true;
			this->label_titre_infos->ForeColor = System::Drawing::Color::Silver;
			this->label_titre_infos->Location = System::Drawing::Point(20, 37);
			this->label_titre_infos->Name = L"label_titre_infos";
			this->label_titre_infos->Size = System::Drawing::Size(155, 17);
			this->label_titre_infos->TabIndex = 52;
			this->label_titre_infos->Text = L"Informations Générales";
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(635, 330);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->MaximumSize = System::Drawing::Size(174, 28);
			this->btnAnnuler->MinimumSize = System::Drawing::Size(174, 28);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 49;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputPersonnelUpdate::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->ForeColor = System::Drawing::Color::White;
			this->btnValider->Location = System::Drawing::Point(452, 330);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->MaximumSize = System::Drawing::Size(174, 28);
			this->btnValider->MinimumSize = System::Drawing::Size(174, 28);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 47;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputPersonnelUpdate::btnValider_Click);
			// 
			// lblResidence
			// 
			this->lblResidence->AutoSize = true;
			this->lblResidence->ForeColor = System::Drawing::Color::Silver;
			this->lblResidence->Location = System::Drawing::Point(578, 230);
			this->lblResidence->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResidence->Name = L"lblResidence";
			this->lblResidence->Size = System::Drawing::Size(75, 17);
			this->lblResidence->TabIndex = 43;
			this->lblResidence->Text = L"Résidence";
			// 
			// lblEmbauche
			// 
			this->lblEmbauche->AutoSize = true;
			this->lblEmbauche->ForeColor = System::Drawing::Color::Silver;
			this->lblEmbauche->Location = System::Drawing::Point(23, 169);
			this->lblEmbauche->Name = L"lblEmbauche";
			this->lblEmbauche->Size = System::Drawing::Size(119, 17);
			this->lblEmbauche->TabIndex = 51;
			this->lblEmbauche->Text = L"Date d\'embauche";
			// 
			// tbxResidence
			// 
			this->tbxResidence->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidence->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidence->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidence->Location = System::Drawing::Point(661, 232);
			this->tbxResidence->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidence->Name = L"tbxResidence";
			this->tbxResidence->Size = System::Drawing::Size(145, 15);
			this->tbxResidence->TabIndex = 42;
			// 
			// tbxEtage
			// 
			this->tbxEtage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtage->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtage->Location = System::Drawing::Point(511, 234);
			this->tbxEtage->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtage->Name = L"tbxEtage";
			this->tbxEtage->Size = System::Drawing::Size(57, 15);
			this->tbxEtage->TabIndex = 41;
			// 
			// dtpEmbauche
			// 
			this->dtpEmbauche->Location = System::Drawing::Point(148, 167);
			this->dtpEmbauche->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpEmbauche->Name = L"dtpEmbauche";
			this->dtpEmbauche->Size = System::Drawing::Size(235, 22);
			this->dtpEmbauche->TabIndex = 50;
			// 
			// lblEtage
			// 
			this->lblEtage->AutoSize = true;
			this->lblEtage->ForeColor = System::Drawing::Color::Silver;
			this->lblEtage->Location = System::Drawing::Point(449, 230);
			this->lblEtage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEtage->Name = L"lblEtage";
			this->lblEtage->Size = System::Drawing::Size(45, 17);
			this->lblEtage->TabIndex = 40;
			this->lblEtage->Text = L"Etage";
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrenom->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenom->Location = System::Drawing::Point(88, 137);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(295, 15);
			this->tbxPrenom->TabIndex = 39;
			// 
			// tbxRue
			// 
			this->tbxRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRue->ForeColor = System::Drawing::Color::Silver;
			this->tbxRue->Location = System::Drawing::Point(620, 199);
			this->tbxRue->Margin = System::Windows::Forms::Padding(4);
			this->tbxRue->Name = L"tbxRue";
			this->tbxRue->Size = System::Drawing::Size(187, 15);
			this->tbxRue->TabIndex = 38;
			// 
			// lblManager
			// 
			this->lblManager->AutoSize = true;
			this->lblManager->ForeColor = System::Drawing::Color::Silver;
			this->lblManager->Location = System::Drawing::Point(24, 204);
			this->lblManager->Name = L"lblManager";
			this->lblManager->Size = System::Drawing::Size(64, 17);
			this->lblManager->TabIndex = 48;
			this->lblManager->Text = L"Manager";
			// 
			// lblRue
			// 
			this->lblRue->AutoSize = true;
			this->lblRue->ForeColor = System::Drawing::Color::Silver;
			this->lblRue->Location = System::Drawing::Point(578, 198);
			this->lblRue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRue->Name = L"lblRue";
			this->lblRue->Size = System::Drawing::Size(34, 17);
			this->lblRue->TabIndex = 37;
			this->lblRue->Text = L"Rue";
			// 
			// lblRueNum
			// 
			this->lblRueNum->AutoSize = true;
			this->lblRueNum->ForeColor = System::Drawing::Color::Silver;
			this->lblRueNum->Location = System::Drawing::Point(449, 198);
			this->lblRueNum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRueNum->Name = L"lblRueNum";
			this->lblRueNum->Size = System::Drawing::Size(54, 17);
			this->lblRueNum->TabIndex = 35;
			this->lblRueNum->Text = L"N° Rue";
			// 
			// cbxManager
			// 
			this->cbxManager->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxManager->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxManager->ForeColor = System::Drawing::Color::Silver;
			this->cbxManager->FormattingEnabled = true;
			this->cbxManager->Location = System::Drawing::Point(88, 201);
			this->cbxManager->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbxManager->Name = L"cbxManager";
			this->cbxManager->Size = System::Drawing::Size(295, 24);
			this->cbxManager->TabIndex = 46;
			this->cbxManager->SelectedIndexChanged += gcnew System::EventHandler(this, &InputPersonnelUpdate::cbxManager_SelectedIndexChanged);
			// 
			// tbxRueNum
			// 
			this->tbxRueNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueNum->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueNum->Location = System::Drawing::Point(511, 199);
			this->tbxRueNum->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueNum->Name = L"tbxRueNum";
			this->tbxRueNum->Size = System::Drawing::Size(57, 15);
			this->tbxRueNum->TabIndex = 34;
			// 
			// lblCodePostal
			// 
			this->lblCodePostal->AutoSize = true;
			this->lblCodePostal->ForeColor = System::Drawing::Color::Silver;
			this->lblCodePostal->Location = System::Drawing::Point(697, 166);
			this->lblCodePostal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCodePostal->Name = L"lblCodePostal";
			this->lblCodePostal->Size = System::Drawing::Size(26, 17);
			this->lblCodePostal->TabIndex = 33;
			this->lblCodePostal->Text = L"CP";
			// 
			// lblNom
			// 
			this->lblNom->AutoSize = true;
			this->lblNom->ForeColor = System::Drawing::Color::Silver;
			this->lblNom->Location = System::Drawing::Point(24, 102);
			this->lblNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNom->Name = L"lblNom";
			this->lblNom->Size = System::Drawing::Size(37, 17);
			this->lblNom->TabIndex = 45;
			this->lblNom->Text = L"Nom";
			// 
			// tbxNom
			// 
			this->tbxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(88, 104);
			this->tbxNom->Margin = System::Windows::Forms::Padding(4);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(295, 15);
			this->tbxNom->TabIndex = 36;
			// 
			// lblVille
			// 
			this->lblVille->AutoSize = true;
			this->lblVille->ForeColor = System::Drawing::Color::Silver;
			this->lblVille->Location = System::Drawing::Point(449, 166);
			this->lblVille->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblVille->Name = L"lblVille";
			this->lblVille->Size = System::Drawing::Size(34, 17);
			this->lblVille->TabIndex = 32;
			this->lblVille->Text = L"Ville";
			// 
			// lblPrenom
			// 
			this->lblPrenom->AutoSize = true;
			this->lblPrenom->ForeColor = System::Drawing::Color::Silver;
			this->lblPrenom->Location = System::Drawing::Point(24, 135);
			this->lblPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrenom->Name = L"lblPrenom";
			this->lblPrenom->Size = System::Drawing::Size(57, 17);
			this->lblPrenom->TabIndex = 44;
			this->lblPrenom->Text = L"Prénom";
			// 
			// cbxVille
			// 
			this->cbxVille->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxVille->ForeColor = System::Drawing::Color::Silver;
			this->cbxVille->FormattingEnabled = true;
			this->cbxVille->Location = System::Drawing::Point(511, 162);
			this->cbxVille->Margin = System::Windows::Forms::Padding(4);
			this->cbxVille->Name = L"cbxVille";
			this->cbxVille->Size = System::Drawing::Size(176, 24);
			this->cbxVille->TabIndex = 31;
			// 
			// cbxRegion
			// 
			this->cbxRegion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxRegion->ForeColor = System::Drawing::Color::Silver;
			this->cbxRegion->FormattingEnabled = true;
			this->cbxRegion->Location = System::Drawing::Point(512, 129);
			this->cbxRegion->Margin = System::Windows::Forms::Padding(4);
			this->cbxRegion->Name = L"cbxRegion";
			this->cbxRegion->Size = System::Drawing::Size(297, 24);
			this->cbxRegion->TabIndex = 28;
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->ForeColor = System::Drawing::Color::Silver;
			this->lblRegion->Location = System::Drawing::Point(449, 132);
			this->lblRegion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(53, 17);
			this->lblRegion->TabIndex = 30;
			this->lblRegion->Text = L"Region";
			// 
			// cbxPays
			// 
			this->cbxPays->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxPays->ForeColor = System::Drawing::Color::Silver;
			this->cbxPays->FormattingEnabled = true;
			this->cbxPays->Location = System::Drawing::Point(512, 95);
			this->cbxPays->Margin = System::Windows::Forms::Padding(4);
			this->cbxPays->Name = L"cbxPays";
			this->cbxPays->Size = System::Drawing::Size(297, 24);
			this->cbxPays->TabIndex = 27;
			// 
			// lblPays
			// 
			this->lblPays->AutoSize = true;
			this->lblPays->ForeColor = System::Drawing::Color::Silver;
			this->lblPays->Location = System::Drawing::Point(449, 99);
			this->lblPays->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPays->Name = L"lblPays";
			this->lblPays->Size = System::Drawing::Size(39, 17);
			this->lblPays->TabIndex = 29;
			this->lblPays->Text = L"Pays";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->ForeColor = System::Drawing::Color::Silver;
			this->lblId->Location = System::Drawing::Point(24, 74);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(86, 17);
			this->lblId->TabIndex = 56;
			this->lblId->Text = L"Id personnel";
			// 
			// tbxIdPersonnel
			// 
			this->tbxIdPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxIdPersonnel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxIdPersonnel->Enabled = false;
			this->tbxIdPersonnel->ForeColor = System::Drawing::Color::Silver;
			this->tbxIdPersonnel->Location = System::Drawing::Point(118, 79);
			this->tbxIdPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->tbxIdPersonnel->Name = L"tbxIdPersonnel";
			this->tbxIdPersonnel->ReadOnly = true;
			this->tbxIdPersonnel->Size = System::Drawing::Size(265, 15);
			this->tbxIdPersonnel->TabIndex = 55;
			// 
			// tbxNomPrenomManager
			// 
			this->tbxNomPrenomManager->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNomPrenomManager->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNomPrenomManager->Enabled = false;
			this->tbxNomPrenomManager->ForeColor = System::Drawing::Color::Silver;
			this->tbxNomPrenomManager->Location = System::Drawing::Point(88, 225);
			this->tbxNomPrenomManager->Margin = System::Windows::Forms::Padding(4);
			this->tbxNomPrenomManager->Name = L"tbxNomPrenomManager";
			this->tbxNomPrenomManager->ReadOnly = true;
			this->tbxNomPrenomManager->Size = System::Drawing::Size(295, 15);
			this->tbxNomPrenomManager->TabIndex = 57;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(450, 69);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 17);
			this->label1->TabIndex = 59;
			this->label1->Text = L"Id adresse";
			// 
			// tbxIdAdress
			// 
			this->tbxIdAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxIdAdress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxIdAdress->Enabled = false;
			this->tbxIdAdress->ForeColor = System::Drawing::Color::Silver;
			this->tbxIdAdress->Location = System::Drawing::Point(544, 74);
			this->tbxIdAdress->Margin = System::Windows::Forms::Padding(4);
			this->tbxIdAdress->Name = L"tbxIdAdress";
			this->tbxIdAdress->ReadOnly = true;
			this->tbxIdAdress->Size = System::Drawing::Size(265, 15);
			this->tbxIdAdress->TabIndex = 58;
			// 
			// InputPersonnelUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(858, 371);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbxIdAdress);
			this->Controls->Add(this->tbxNomPrenomManager);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->tbxIdPersonnel);
			this->Controls->Add(this->cbxCode_postal);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_titre_infos);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->lblResidence);
			this->Controls->Add(this->lblEmbauche);
			this->Controls->Add(this->tbxResidence);
			this->Controls->Add(this->tbxEtage);
			this->Controls->Add(this->dtpEmbauche);
			this->Controls->Add(this->lblEtage);
			this->Controls->Add(this->tbxPrenom);
			this->Controls->Add(this->tbxRue);
			this->Controls->Add(this->lblManager);
			this->Controls->Add(this->lblRue);
			this->Controls->Add(this->lblRueNum);
			this->Controls->Add(this->cbxManager);
			this->Controls->Add(this->tbxRueNum);
			this->Controls->Add(this->lblCodePostal);
			this->Controls->Add(this->lblNom);
			this->Controls->Add(this->tbxNom);
			this->Controls->Add(this->lblVille);
			this->Controls->Add(this->lblPrenom);
			this->Controls->Add(this->cbxVille);
			this->Controls->Add(this->cbxRegion);
			this->Controls->Add(this->lblRegion);
			this->Controls->Add(this->cbxPays);
			this->Controls->Add(this->lblPays);
			this->Name = L"InputPersonnelUpdate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modifier un membre du personnel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cbxCode_postal_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
		NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
		NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();

		std::vector<std::string> vecteur_ville;
		std::vector<std::string> vecteur_region;
		std::vector<std::string> vecteur_pays;

		cbxVille->Enabled = false;
		cbxVille->Items->Clear();
		vecteur_ville = ville->miseAjourVilleCBCP(vecteur_ville, this->cbxCode_postal->Text);
		for (int i = 0; i < vecteur_ville.size(); i++) {
			this->cbxVille->Items->Add(gcnew String(vecteur_ville[i].c_str()));
		}

		cbxRegion->Enabled = false;
		cbxRegion->Items->Clear();
		vecteur_region = region->miseAjourRegionCBCP(vecteur_region, this->cbxCode_postal->Text);
		for (int i = 0; i < vecteur_region.size(); i++) {
			this->cbxRegion->Items->Add(gcnew String(vecteur_region[i].c_str()));
		}

		cbxPays->Enabled = false;
		cbxPays->Items->Clear();
		vecteur_pays = pays->miseAjourPaysCBCP(vecteur_pays, this->cbxCode_postal->Text);
		for (int i = 0; i < vecteur_region.size(); i++) {
			this->cbxPays->Items->Add(gcnew String(vecteur_pays[i].c_str()));
		}

		cbxVille->Enabled = true;
		cbxRegion->Enabled = true;
		cbxPays->Enabled = true;
	}
private: System::Void cbxManager_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	NS_Utilitaire_svc::CLserviceutilitaire^ info_manager = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
	std::vector<std::string> vecteur_info_manager;
	if (this->cbxManager->Text != "Lui-même") {
		vecteur_info_manager = info_manager->miseAjourNomPrenonManager(vecteur_info_manager, int::Parse(this->cbxManager->Text));
		this->tbxNomPrenomManager->Text = (gcnew String(vecteur_info_manager[0].c_str())) + (gcnew String(vecteur_info_manager[1].c_str()));
	}
	else {
		this->tbxNomPrenomManager->Text = "Lui-même";
	}
}
private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_map_personnel::CLpersonnel^ personnel = gcnew NS_map_personnel::CLpersonnel;
	if (tbxNom->Text->Length == 0 || tbxPrenom->Text->Length == 0 || tbxRueNum->Text->Length == 0 || tbxRue->Text->Length == 0 || tbxEtage->Text->Length == 0 ||
		tbxResidence->Text->Length == 0 || cbxRegion->SelectedIndex < 0 || cbxPays->SelectedIndex < 0 || cbxVille->SelectedIndex < 0 || cbxCode_postal->Text->Length == 0) {
		MessageBox::Show("Vous n'avez pas renseigné tous les champs", "Erreur", MessageBoxButtons::OK);
		return;
	}
	CLadresse^ adresse_personnel = gcnew CLadresse;

	personnel->setNom(this->tbxNom->Text);
	personnel->setPrenom(this->tbxPrenom->Text);
	personnel->setDateEmbauche(this->dtpEmbauche->Value.ToString("yyyy-MM-dd"));
	if (this->cbxManager->Text != "Lui-même") {
		personnel->setIdSupHierarchique(int::Parse(this->cbxManager->Text));
	}
	else {
		personnel->setIdSupHierarchique(int::Parse("0"));
	}
	adresse_personnel->setRegion(cbxRegion->Text);
	adresse_personnel->setCodePostal(cbxCode_postal->Text);
	adresse_personnel->setPays(cbxPays->Text);
	adresse_personnel->setNumeroRue(tbxRueNum->Text);
	adresse_personnel->setRue(tbxRue->Text);
	adresse_personnel->setNumeroEtage(int::Parse(tbxEtage->Text));
	adresse_personnel->setNomResidence(tbxResidence->Text);

	personnel->setAdresse(adresse_personnel);

	UIAction::validerUpdateButtonPersonnel(this, personnel);
	this->Close();
}
private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
