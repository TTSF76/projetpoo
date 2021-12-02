#pragma once
#include "CLadresse.h"
#include "UIAction.h"
#include "UIManager.h"
#include "CLconnect.h"
#include "CLserviceclient.h"
#include "CLserviceStats.h"
#include "CLservicearticle.h"
#include "CLserviceutilitaire.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputAdresseClient
	/// </summary>
	public ref class InputAdresseClient : public System::Windows::Forms::Form
	{
	public:
		InputAdresseClient(void)
		{
			InitializeComponent();
			NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_ville;
			list_ville = ville->repertorierVilles(list_ville);
			for (int i = 0; i < list_ville.size(); i++) {
				this->cbxAdrVille->Items->Add(gcnew String(list_ville[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_pays;
			list_pays = pays->repertorierPays(list_pays);
			for (int i = 0; i < list_pays.size(); i++) {
				this->cbxAdrPays->Items->Add(gcnew String(list_pays[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ code_postal = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_code_postaux;
			list_code_postaux = code_postal->repertorierCodePostaux(list_code_postaux);
			for (int i = 0; i < list_code_postaux.size(); i++) {
				this->cbxAdrCP->Items->Add(gcnew String(list_code_postaux[i].c_str()));
			}

			NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_region;
			list_region = region->repertorierRegion(list_region);
			for (int i = 0; i < list_region.size(); i++) {
				this->cbxAdrRegion->Items->Add(gcnew String(list_region[i].c_str()));
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InputAdresseClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAnnuler;
	protected:
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::ComboBox^ cbxAdrCP;

	private: System::Windows::Forms::Label^ label_adresse;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbxResidence;

	private: System::Windows::Forms::TextBox^ tbxEtage;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbxRue;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbxNRue;

	private: System::Windows::Forms::ComboBox^ cbxAdrPays;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cbxAdrRegion;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbxAdrVille;


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
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->cbxAdrCP = (gcnew System::Windows::Forms::ComboBox());
			this->label_adresse = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbxResidence = (gcnew System::Windows::Forms::TextBox());
			this->tbxEtage = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbxRue = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbxNRue = (gcnew System::Windows::Forms::TextBox());
			this->cbxAdrPays = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbxAdrRegion = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbxAdrVille = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(203, 219);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 176;
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
			this->btnValider->Location = System::Drawing::Point(21, 219);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 175;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputAdresseClient::btnValider_Click);
			// 
			// cbxAdrCP
			// 
			this->cbxAdrCP->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->cbxAdrCP->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxAdrCP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrCP->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrCP->FormattingEnabled = true;
			this->cbxAdrCP->Location = System::Drawing::Point(273, 107);
			this->cbxAdrCP->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrCP->Name = L"cbxAdrCP";
			this->cbxAdrCP->Size = System::Drawing::Size(104, 24);
			this->cbxAdrCP->TabIndex = 193;
			this->cbxAdrCP->SelectedIndexChanged += gcnew System::EventHandler(this, &InputAdresseClient::cbxAdrCP_SelectedIndexChanged);
			// 
			// label_adresse
			// 
			this->label_adresse->AutoSize = true;
			this->label_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse->ForeColor = System::Drawing::Color::Silver;
			this->label_adresse->Location = System::Drawing::Point(19, 19);
			this->label_adresse->Name = L"label_adresse";
			this->label_adresse->Size = System::Drawing::Size(90, 17);
			this->label_adresse->TabIndex = 192;
			this->label_adresse->Text = L"Adresse de";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(146, 181);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 17);
			this->label8->TabIndex = 191;
			this->label8->Text = L"Résidence";
			// 
			// tbxResidence
			// 
			this->tbxResidence->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxResidence->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxResidence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxResidence->ForeColor = System::Drawing::Color::Silver;
			this->tbxResidence->Location = System::Drawing::Point(232, 181);
			this->tbxResidence->Margin = System::Windows::Forms::Padding(4);
			this->tbxResidence->Name = L"tbxResidence";
			this->tbxResidence->Size = System::Drawing::Size(145, 15);
			this->tbxResidence->TabIndex = 190;
			// 
			// tbxEtage
			// 
			this->tbxEtage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxEtage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxEtage->ForeColor = System::Drawing::Color::Silver;
			this->tbxEtage->Location = System::Drawing::Point(80, 181);
			this->tbxEtage->Margin = System::Windows::Forms::Padding(4);
			this->tbxEtage->Name = L"tbxEtage";
			this->tbxEtage->Size = System::Drawing::Size(57, 15);
			this->tbxEtage->TabIndex = 189;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(19, 181);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 188;
			this->label7->Text = L"Etage";
			// 
			// tbxRue
			// 
			this->tbxRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRue->ForeColor = System::Drawing::Color::Silver;
			this->tbxRue->Location = System::Drawing::Point(190, 149);
			this->tbxRue->Margin = System::Windows::Forms::Padding(4);
			this->tbxRue->Name = L"tbxRue";
			this->tbxRue->Size = System::Drawing::Size(187, 15);
			this->tbxRue->TabIndex = 187;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(146, 147);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 186;
			this->label6->Text = L"Rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(18, 145);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 17);
			this->label5->TabIndex = 185;
			this->label5->Text = L"N° Rue";
			// 
			// tbxNRue
			// 
			this->tbxNRue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNRue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNRue->ForeColor = System::Drawing::Color::Silver;
			this->tbxNRue->Location = System::Drawing::Point(80, 147);
			this->tbxNRue->Margin = System::Windows::Forms::Padding(4);
			this->tbxNRue->Name = L"tbxNRue";
			this->tbxNRue->Size = System::Drawing::Size(57, 15);
			this->tbxNRue->TabIndex = 184;
			// 
			// cbxAdrPays
			// 
			this->cbxAdrPays->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxAdrPays->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrPays->FormattingEnabled = true;
			this->cbxAdrPays->Location = System::Drawing::Point(80, 40);
			this->cbxAdrPays->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrPays->Name = L"cbxAdrPays";
			this->cbxAdrPays->Size = System::Drawing::Size(297, 24);
			this->cbxAdrPays->TabIndex = 177;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(239, 111);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 183;
			this->label4->Text = L"CP";
			// 
			// cbxAdrRegion
			// 
			this->cbxAdrRegion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrRegion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxAdrRegion->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrRegion->FormattingEnabled = true;
			this->cbxAdrRegion->Location = System::Drawing::Point(80, 74);
			this->cbxAdrRegion->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrRegion->Name = L"cbxAdrRegion";
			this->cbxAdrRegion->Size = System::Drawing::Size(297, 24);
			this->cbxAdrRegion->TabIndex = 178;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(19, 48);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 179;
			this->label1->Text = L"Pays";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(19, 115);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 17);
			this->label3->TabIndex = 182;
			this->label3->Text = L"Ville";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(19, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 180;
			this->label2->Text = L"Region";
			// 
			// cbxAdrVille
			// 
			this->cbxAdrVille->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbxAdrVille->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbxAdrVille->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxAdrVille->ForeColor = System::Drawing::Color::Silver;
			this->cbxAdrVille->FormattingEnabled = true;
			this->cbxAdrVille->Location = System::Drawing::Point(80, 107);
			this->cbxAdrVille->Margin = System::Windows::Forms::Padding(4);
			this->cbxAdrVille->Name = L"cbxAdrVille";
			this->cbxAdrVille->Size = System::Drawing::Size(151, 24);
			this->cbxAdrVille->TabIndex = 181;
			// 
			// InputAdresseClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(399, 274);
			this->Controls->Add(this->cbxAdrCP);
			this->Controls->Add(this->label_adresse);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbxResidence);
			this->Controls->Add(this->tbxEtage);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbxRue);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbxNRue);
			this->Controls->Add(this->cbxAdrPays);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cbxAdrRegion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbxAdrVille);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->ForeColor = System::Drawing::Color::Silver;
			this->Name = L"InputAdresseClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ajouter une adresse";
			this->Load += gcnew System::EventHandler(this, &InputAdresseClient::InputAdresseClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InputAdresseClient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->label_adresse->Text = this->label_adresse->Text+" "+CLadresse::avalue;
	}
private: System::Void cbxAdrCP_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		NS_Utilitaire_svc::CLserviceutilitaire^ ville = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
		NS_Utilitaire_svc::CLserviceutilitaire^ region = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
		NS_Utilitaire_svc::CLserviceutilitaire^ pays = gcnew NS_Utilitaire_svc::CLserviceutilitaire();

		std::vector<std::string> vecteur_ville;
		std::vector<std::string> vecteur_region;
		std::vector<std::string> vecteur_pays;

		cbxAdrVille->Enabled = false;
		cbxAdrVille->Items->Clear();
		vecteur_ville = ville->miseAjourVilleCBCP(vecteur_ville, this->cbxAdrCP->Text);
		for (int i = 0; i < vecteur_ville.size(); i++) {
			this->cbxAdrVille->Items->Add(gcnew String(vecteur_ville[i].c_str()));
		}

		cbxAdrRegion->Enabled = false;
		cbxAdrRegion->Items->Clear();
		vecteur_region = region->miseAjourRegionCBCP(vecteur_region, this->cbxAdrCP->Text);
		for (int i = 0; i < vecteur_region.size(); i++) {
			this->cbxAdrRegion->Items->Add(gcnew String(vecteur_region[i].c_str()));
		}

		cbxAdrPays->Enabled = false;
		cbxAdrPays->Items->Clear();
		vecteur_pays = pays->miseAjourPaysCBCP(vecteur_pays, this->cbxAdrCP->Text);
		for (int i = 0; i < vecteur_region.size(); i++) {
			this->cbxAdrPays->Items->Add(gcnew String(vecteur_pays[i].c_str()));
		}


		cbxAdrVille->Enabled = true;
		cbxAdrRegion->Enabled = true;
		cbxAdrPays->Enabled = true;
}
private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CLadresse::avalue == "livraison") {
		CLadresse^ adresse_livraison = gcnew CLadresse;
		adresse_livraison->setRegion(cbxAdrRegion->Text);
		adresse_livraison->setPays(cbxAdrPays->Text);
		adresse_livraison->setCodePostal(cbxAdrCP->Text);
		adresse_livraison->setNumeroRue(tbxNRue->Text);
		adresse_livraison->setRue(tbxRue->Text);
		adresse_livraison->setNumeroEtage(int::Parse(tbxEtage->Text));
		adresse_livraison->setNomResidence(tbxResidence->Text);
		UIAction::insertButtonAdresseLiv(adresse_livraison);
		this->Close();
	}else if (CLadresse::avalue == "facturation") {
		CLadresse^ adresse_facturation = gcnew CLadresse;
		adresse_facturation->setRegion(cbxAdrRegion->Text);
		adresse_facturation->setPays(cbxAdrPays->Text);
		adresse_facturation->setCodePostal(cbxAdrCP->Text);
		adresse_facturation->setNumeroRue(tbxNRue->Text);
		adresse_facturation->setRue(tbxRue->Text);
		adresse_facturation->setNumeroEtage(int::Parse(tbxEtage->Text));
		adresse_facturation->setNomResidence(tbxResidence->Text);
		UIAction::insertButtonAdresseFac(adresse_facturation);
		this->Close();
	}
}
};
}
