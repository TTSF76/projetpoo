#pragma once
#include "Clpersonnel.h"
#include "UIAction.h"
#include "CLconnect.h"
#include "CLserviceutilitaire.h"

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
	private: System::Windows::Forms::ComboBox^ cbxPays;
	protected:
	private: System::Windows::Forms::ComboBox^ cbxRegion;
	private: System::Windows::Forms::Label^ lblPays;
	private: System::Windows::Forms::Label^ lblRegion;
	private: System::Windows::Forms::ComboBox^ cbxVille;
	private: System::Windows::Forms::Label^ lblVille;

	private: System::Windows::Forms::Label^ lblCodePostal;
	private: System::Windows::Forms::TextBox^ tbxRueNum;
	private: System::Windows::Forms::Label^ lblRueNum;
	private: System::Windows::Forms::Label^ lblRue;
	private: System::Windows::Forms::TextBox^ tbxRue;
	private: System::Windows::Forms::Label^ lblEtage;
	private: System::Windows::Forms::TextBox^ tbxEtage;
	private: System::Windows::Forms::TextBox^ tbxResidence;
	private: System::Windows::Forms::Label^ lblResidence;


	private: System::Windows::Forms::TextBox^ tbxPrenom;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::Label^ lblPrenom;
	private: System::Windows::Forms::Label^ lblNom;
	private: System::Windows::Forms::ComboBox^ cbxManager;
	private: System::Windows::Forms::Label^ lblManager;
	private: System::Windows::Forms::DateTimePicker^ dtpEmbauche;
	private: System::Windows::Forms::Label^ lblEmbauche;
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::Label^ label_titre_infos;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbxCode_postal;


	protected:

	protected:

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
			this->cbxPays = (gcnew System::Windows::Forms::ComboBox());
			this->cbxRegion = (gcnew System::Windows::Forms::ComboBox());
			this->lblPays = (gcnew System::Windows::Forms::Label());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->cbxVille = (gcnew System::Windows::Forms::ComboBox());
			this->lblVille = (gcnew System::Windows::Forms::Label());
			this->lblCodePostal = (gcnew System::Windows::Forms::Label());
			this->tbxRueNum = (gcnew System::Windows::Forms::TextBox());
			this->lblRueNum = (gcnew System::Windows::Forms::Label());
			this->lblRue = (gcnew System::Windows::Forms::Label());
			this->tbxRue = (gcnew System::Windows::Forms::TextBox());
			this->lblEtage = (gcnew System::Windows::Forms::Label());
			this->tbxEtage = (gcnew System::Windows::Forms::TextBox());
			this->tbxResidence = (gcnew System::Windows::Forms::TextBox());
			this->lblResidence = (gcnew System::Windows::Forms::Label());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->lblPrenom = (gcnew System::Windows::Forms::Label());
			this->lblNom = (gcnew System::Windows::Forms::Label());
			this->cbxManager = (gcnew System::Windows::Forms::ComboBox());
			this->lblManager = (gcnew System::Windows::Forms::Label());
			this->dtpEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblEmbauche = (gcnew System::Windows::Forms::Label());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->label_titre_infos = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbxCode_postal = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// cbxPays
			// 
			this->cbxPays->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxPays->ForeColor = System::Drawing::Color::Silver;
			this->cbxPays->FormattingEnabled = true;
			this->cbxPays->Location = System::Drawing::Point(513, 85);
			this->cbxPays->Margin = System::Windows::Forms::Padding(4);
			this->cbxPays->Name = L"cbxPays";
			this->cbxPays->Size = System::Drawing::Size(297, 24);
			this->cbxPays->TabIndex = 0;
			// 
			// cbxRegion
			// 
			this->cbxRegion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxRegion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxRegion->ForeColor = System::Drawing::Color::Silver;
			this->cbxRegion->FormattingEnabled = true;
			this->cbxRegion->Location = System::Drawing::Point(513, 119);
			this->cbxRegion->Margin = System::Windows::Forms::Padding(4);
			this->cbxRegion->Name = L"cbxRegion";
			this->cbxRegion->Size = System::Drawing::Size(297, 24);
			this->cbxRegion->TabIndex = 1;
			// 
			// lblPays
			// 
			this->lblPays->AutoSize = true;
			this->lblPays->ForeColor = System::Drawing::Color::Silver;
			this->lblPays->Location = System::Drawing::Point(450, 89);
			this->lblPays->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPays->Name = L"lblPays";
			this->lblPays->Size = System::Drawing::Size(39, 17);
			this->lblPays->TabIndex = 2;
			this->lblPays->Text = L"Pays";
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->ForeColor = System::Drawing::Color::Silver;
			this->lblRegion->Location = System::Drawing::Point(450, 122);
			this->lblRegion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(53, 17);
			this->lblRegion->TabIndex = 3;
			this->lblRegion->Text = L"Region";
			// 
			// cbxVille
			// 
			this->cbxVille->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxVille->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxVille->ForeColor = System::Drawing::Color::Silver;
			this->cbxVille->FormattingEnabled = true;
			this->cbxVille->Location = System::Drawing::Point(512, 152);
			this->cbxVille->Margin = System::Windows::Forms::Padding(4);
			this->cbxVille->Name = L"cbxVille";
			this->cbxVille->Size = System::Drawing::Size(176, 24);
			this->cbxVille->TabIndex = 4;
			this->cbxVille->SelectedIndexChanged += gcnew System::EventHandler(this, &InputPersonnelInserer::cbxVille_SelectedIndexChanged);
			// 
			// lblVille
			// 
			this->lblVille->AutoSize = true;
			this->lblVille->ForeColor = System::Drawing::Color::Silver;
			this->lblVille->Location = System::Drawing::Point(450, 156);
			this->lblVille->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblVille->Name = L"lblVille";
			this->lblVille->Size = System::Drawing::Size(34, 17);
			this->lblVille->TabIndex = 5;
			this->lblVille->Text = L"Ville";
			// 
			// lblCodePostal
			// 
			this->lblCodePostal->AutoSize = true;
			this->lblCodePostal->ForeColor = System::Drawing::Color::Silver;
			this->lblCodePostal->Location = System::Drawing::Point(698, 156);
			this->lblCodePostal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCodePostal->Name = L"lblCodePostal";
			this->lblCodePostal->Size = System::Drawing::Size(26, 17);
			this->lblCodePostal->TabIndex = 7;
			this->lblCodePostal->Text = L"CP";
			// 
			// tbxRueNum
			// 
			this->tbxRueNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRueNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRueNum->ForeColor = System::Drawing::Color::Silver;
			this->tbxRueNum->Location = System::Drawing::Point(512, 189);
			this->tbxRueNum->Margin = System::Windows::Forms::Padding(4);
			this->tbxRueNum->Name = L"tbxRueNum";
			this->tbxRueNum->Size = System::Drawing::Size(57, 15);
			this->tbxRueNum->TabIndex = 8;
			// 
			// lblRueNum
			// 
			this->lblRueNum->AutoSize = true;
			this->lblRueNum->ForeColor = System::Drawing::Color::Silver;
			this->lblRueNum->Location = System::Drawing::Point(450, 188);
			this->lblRueNum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRueNum->Name = L"lblRueNum";
			this->lblRueNum->Size = System::Drawing::Size(54, 17);
			this->lblRueNum->TabIndex = 9;
			this->lblRueNum->Text = L"N° Rue";
			// 
			// lblRue
			// 
			this->lblRue->AutoSize = true;
			this->lblRue->ForeColor = System::Drawing::Color::Silver;
			this->lblRue->Location = System::Drawing::Point(579, 188);
			this->lblRue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRue->Name = L"lblRue";
			this->lblRue->Size = System::Drawing::Size(34, 17);
			this->lblRue->TabIndex = 10;
			this->lblRue->Text = L"Rue";
			// 
			// tbxRue
			// 
			this->tbxRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRue->ForeColor = System::Drawing::Color::Silver;
			this->tbxRue->Location = System::Drawing::Point(621, 189);
			this->tbxRue->Margin = System::Windows::Forms::Padding(4);
			this->tbxRue->Name = L"tbxRue";
			this->tbxRue->Size = System::Drawing::Size(187, 15);
			this->tbxRue->TabIndex = 11;
			// 
			// lblEtage
			// 
			this->lblEtage->AutoSize = true;
			this->lblEtage->ForeColor = System::Drawing::Color::Silver;
			this->lblEtage->Location = System::Drawing::Point(450, 220);
			this->lblEtage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEtage->Name = L"lblEtage";
			this->lblEtage->Size = System::Drawing::Size(45, 17);
			this->lblEtage->TabIndex = 12;
			this->lblEtage->Text = L"Etage";
			// 
			// tbxEtage
			// 
			this->tbxEtage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtage->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtage->Location = System::Drawing::Point(512, 224);
			this->tbxEtage->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtage->Name = L"tbxEtage";
			this->tbxEtage->Size = System::Drawing::Size(57, 15);
			this->tbxEtage->TabIndex = 13;
			// 
			// tbxResidence
			// 
			this->tbxResidence->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidence->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidence->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidence->Location = System::Drawing::Point(662, 222);
			this->tbxResidence->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidence->Name = L"tbxResidence";
			this->tbxResidence->Size = System::Drawing::Size(145, 15);
			this->tbxResidence->TabIndex = 14;
			// 
			// lblResidence
			// 
			this->lblResidence->AutoSize = true;
			this->lblResidence->ForeColor = System::Drawing::Color::Silver;
			this->lblResidence->Location = System::Drawing::Point(579, 220);
			this->lblResidence->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResidence->Name = L"lblResidence";
			this->lblResidence->Size = System::Drawing::Size(75, 17);
			this->lblResidence->TabIndex = 15;
			this->lblResidence->Text = L"Résidence";
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrenom->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenom->Location = System::Drawing::Point(85, 120);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(295, 15);
			this->tbxPrenom->TabIndex = 12;
			// 
			// tbxNom
			// 
			this->tbxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(85, 87);
			this->tbxNom->Margin = System::Windows::Forms::Padding(4);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(295, 15);
			this->tbxNom->TabIndex = 9;
			// 
			// lblPrenom
			// 
			this->lblPrenom->AutoSize = true;
			this->lblPrenom->ForeColor = System::Drawing::Color::Silver;
			this->lblPrenom->Location = System::Drawing::Point(21, 118);
			this->lblPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrenom->Name = L"lblPrenom";
			this->lblPrenom->Size = System::Drawing::Size(57, 17);
			this->lblPrenom->TabIndex = 18;
			this->lblPrenom->Text = L"Prénom";
			// 
			// lblNom
			// 
			this->lblNom->AutoSize = true;
			this->lblNom->ForeColor = System::Drawing::Color::Silver;
			this->lblNom->Location = System::Drawing::Point(21, 85);
			this->lblNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNom->Name = L"lblNom";
			this->lblNom->Size = System::Drawing::Size(37, 17);
			this->lblNom->TabIndex = 19;
			this->lblNom->Text = L"Nom";
			// 
			// cbxManager
			// 
			this->cbxManager->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxManager->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxManager->ForeColor = System::Drawing::Color::Silver;
			this->cbxManager->FormattingEnabled = true;
			this->cbxManager->Location = System::Drawing::Point(91, 184);
			this->cbxManager->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbxManager->Name = L"cbxManager";
			this->cbxManager->Size = System::Drawing::Size(289, 24);
			this->cbxManager->TabIndex = 20;
			// 
			// lblManager
			// 
			this->lblManager->AutoSize = true;
			this->lblManager->ForeColor = System::Drawing::Color::Silver;
			this->lblManager->Location = System::Drawing::Point(21, 187);
			this->lblManager->Name = L"lblManager";
			this->lblManager->Size = System::Drawing::Size(64, 17);
			this->lblManager->TabIndex = 21;
			this->lblManager->Text = L"Manager";
			// 
			// dtpEmbauche
			// 
			this->dtpEmbauche->Location = System::Drawing::Point(145, 150);
			this->dtpEmbauche->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpEmbauche->Name = L"dtpEmbauche";
			this->dtpEmbauche->Size = System::Drawing::Size(235, 22);
			this->dtpEmbauche->TabIndex = 22;
			// 
			// lblEmbauche
			// 
			this->lblEmbauche->AutoSize = true;
			this->lblEmbauche->ForeColor = System::Drawing::Color::Silver;
			this->lblEmbauche->Location = System::Drawing::Point(20, 152);
			this->lblEmbauche->Name = L"lblEmbauche";
			this->lblEmbauche->Size = System::Drawing::Size(119, 17);
			this->lblEmbauche->TabIndex = 23;
			this->lblEmbauche->Text = L"Date d\'embauche";
			// 
			// btnValider
			// 
			this->btnValider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->ForeColor = System::Drawing::Color::White;
			this->btnValider->Location = System::Drawing::Point(462, 335);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->MaximumSize = System::Drawing::Size(174, 28);
			this->btnValider->MinimumSize = System::Drawing::Size(174, 28);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 20;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputPersonnelInserer::btnValider_Click);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(644, 335);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->MaximumSize = System::Drawing::Size(174, 28);
			this->btnAnnuler->MinimumSize = System::Drawing::Size(174, 28);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 21;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputPersonnelInserer::btnAnnuler_Click);
			// 
			// label_titre_infos
			// 
			this->label_titre_infos->AutoSize = true;
			this->label_titre_infos->ForeColor = System::Drawing::Color::Silver;
			this->label_titre_infos->Location = System::Drawing::Point(69, 43);
			this->label_titre_infos->Name = L"label_titre_infos";
			this->label_titre_infos->Size = System::Drawing::Size(155, 17);
			this->label_titre_infos->TabIndex = 24;
			this->label_titre_infos->Text = L"Informations Générales";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(525, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Adresse de Résidence";
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
			this->cbxCode_postal->Location = System::Drawing::Point(734, 153);
			this->cbxCode_postal->Margin = System::Windows::Forms::Padding(4);
			this->cbxCode_postal->Name = L"cbxCode_postal";
			this->cbxCode_postal->Size = System::Drawing::Size(76, 24);
			this->cbxCode_postal->TabIndex = 26;
			this->cbxCode_postal->SelectedIndexChanged += gcnew System::EventHandler(this, &InputPersonnelInserer::cbxCode_postal_SelectedIndexChanged);
			// 
			// InputPersonnelInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(841, 416);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(859, 463);
			this->MinimumSize = System::Drawing::Size(859, 463);
			this->Name = L"InputPersonnelInserer";
			this->Text = L"Insérer un personnel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		NS_map_personnel::CLpersonnel^ personnel = gcnew NS_map_personnel::CLpersonnel;
		if (tbxNom->Text->Length == 0 || tbxPrenom->Text->Length == 0 || tbxRueNum->Text->Length == 0 || tbxRue->Text->Length == 0 || tbxEtage->Text->Length == 0 ||
			tbxResidence->Text->Length == 0 || cbxRegion->SelectedIndex < 0 || cbxPays->SelectedIndex < 0  || cbxVille->SelectedIndex < 0 || cbxCode_postal->Text->Length == 0 ) {
			MessageBox::Show("Vous n'avez pas renseigné tous les champs", "Erreur", MessageBoxButtons::OK);
			return;
		}
		CLadresse^ adresse_personnel = gcnew CLadresse;
		
		personnel->setNom(this->tbxNom->Text);
		personnel->setPrenom(this->tbxPrenom->Text);
		personnel->setDateEmbauche(this->dtpEmbauche->Value.ToString("yyyy-MM-dd"));
		personnel->setIdSupHierarchique(1523);
		adresse_personnel->setVille(1);
		adresse_personnel->setNumeroRue(tbxRueNum->Text);
		adresse_personnel->setRue(tbxRue->Text);
		adresse_personnel->setNumeroEtage(int::Parse(tbxEtage->Text));
		adresse_personnel->setNomResidence(tbxResidence->Text);
		
		personnel->setAdresse(adresse_personnel);
		
		UIAction::validerButtonPersonnel(this, personnel);
		this->Close();
	}

	private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
private: System::Void cbxVille_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
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
};
}
