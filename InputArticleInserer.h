#pragma once
#include "CLconnect.h"
#include "CLarticle.h"
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
	/// Description résumée de InputArticleInserer
	/// </summary>
	public ref class InputArticleInserer : public System::Windows::Forms::Form
	{
	public:
		InputArticleInserer(void)
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
		~InputArticleInserer()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label_titre_infos;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::Button^ btnValider;

	private: System::Windows::Forms::Label^ lblQuantite;



	private: System::Windows::Forms::TextBox^ tbxNature;

	private: System::Windows::Forms::Label^ lblRemise;




	private: System::Windows::Forms::Label^ lblNomArticle;
	private: System::Windows::Forms::TextBox^ tbxNom;

	private: System::Windows::Forms::Label^ lblNature;





	private: System::Windows::Forms::NumericUpDown^ tbxQuantite;
	private: System::Windows::Forms::NumericUpDown^ tbxRemise;
	private: System::Windows::Forms::NumericUpDown^ tbxPrixHT;
	private: System::Windows::Forms::Label^ lblPrixHT;
	private: System::Windows::Forms::NumericUpDown^ tbxPrixTTC;
	private: System::Windows::Forms::Label^ lblArticleTTC;
	private: System::Windows::Forms::NumericUpDown^ tbxTauxTVA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ tbxSeuil;
	private: System::Windows::Forms::Label^ lblSeuil;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbxCouleur;

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
			this->label_titre_infos = (gcnew System::Windows::Forms::Label());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->lblQuantite = (gcnew System::Windows::Forms::Label());
			this->tbxNature = (gcnew System::Windows::Forms::TextBox());
			this->lblRemise = (gcnew System::Windows::Forms::Label());
			this->lblNomArticle = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->lblNature = (gcnew System::Windows::Forms::Label());
			this->tbxQuantite = (gcnew System::Windows::Forms::NumericUpDown());
			this->tbxRemise = (gcnew System::Windows::Forms::NumericUpDown());
			this->tbxPrixHT = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblPrixHT = (gcnew System::Windows::Forms::Label());
			this->tbxPrixTTC = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblArticleTTC = (gcnew System::Windows::Forms::Label());
			this->tbxTauxTVA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbxSeuil = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblSeuil = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxCouleur = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxQuantite))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxRemise))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxPrixHT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxPrixTTC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxTauxTVA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxSeuil))->BeginInit();
			this->SuspendLayout();
			// 
			// label_titre_infos
			// 
			this->label_titre_infos->AutoSize = true;
			this->label_titre_infos->ForeColor = System::Drawing::Color::Silver;
			this->label_titre_infos->Location = System::Drawing::Point(21, 30);
			this->label_titre_infos->Name = L"label_titre_infos";
			this->label_titre_infos->Size = System::Drawing::Size(172, 17);
			this->label_titre_infos->TabIndex = 52;
			this->label_titre_infos->Text = L"Entrez informations article";
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(206, 423);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->MaximumSize = System::Drawing::Size(174, 28);
			this->btnAnnuler->MinimumSize = System::Drawing::Size(174, 28);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 49;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputArticleInserer::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->ForeColor = System::Drawing::Color::White;
			this->btnValider->Location = System::Drawing::Point(24, 423);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->MaximumSize = System::Drawing::Size(174, 28);
			this->btnValider->MinimumSize = System::Drawing::Size(174, 28);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 47;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputArticleInserer::btnValider_Click);
			// 
			// lblQuantite
			// 
			this->lblQuantite->AutoSize = true;
			this->lblQuantite->ForeColor = System::Drawing::Color::Silver;
			this->lblQuantite->Location = System::Drawing::Point(23, 174);
			this->lblQuantite->Name = L"lblQuantite";
			this->lblQuantite->Size = System::Drawing::Size(62, 17);
			this->lblQuantite->TabIndex = 51;
			this->lblQuantite->Text = L"Quantité";
			// 
			// tbxNature
			// 
			this->tbxNature->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNature->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNature->ForeColor = System::Drawing::Color::Silver;
			this->tbxNature->Location = System::Drawing::Point(86, 105);
			this->tbxNature->Margin = System::Windows::Forms::Padding(4);
			this->tbxNature->Name = L"tbxNature";
			this->tbxNature->Size = System::Drawing::Size(295, 15);
			this->tbxNature->TabIndex = 39;
			// 
			// lblRemise
			// 
			this->lblRemise->AutoSize = true;
			this->lblRemise->ForeColor = System::Drawing::Color::Silver;
			this->lblRemise->Location = System::Drawing::Point(24, 209);
			this->lblRemise->Name = L"lblRemise";
			this->lblRemise->Size = System::Drawing::Size(123, 17);
			this->lblRemise->TabIndex = 48;
			this->lblRemise->Text = L"Remise article (%)";
			// 
			// lblNomArticle
			// 
			this->lblNomArticle->AutoSize = true;
			this->lblNomArticle->ForeColor = System::Drawing::Color::Silver;
			this->lblNomArticle->Location = System::Drawing::Point(22, 69);
			this->lblNomArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomArticle->Name = L"lblNomArticle";
			this->lblNomArticle->Size = System::Drawing::Size(79, 17);
			this->lblNomArticle->TabIndex = 45;
			this->lblNomArticle->Text = L"Nom article";
			// 
			// tbxNom
			// 
			this->tbxNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(105, 69);
			this->tbxNom->Margin = System::Windows::Forms::Padding(4);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(275, 15);
			this->tbxNom->TabIndex = 36;
			// 
			// lblNature
			// 
			this->lblNature->AutoSize = true;
			this->lblNature->ForeColor = System::Drawing::Color::Silver;
			this->lblNature->Location = System::Drawing::Point(22, 102);
			this->lblNature->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(51, 17);
			this->lblNature->TabIndex = 44;
			this->lblNature->Text = L"Nature";
			// 
			// tbxQuantite
			// 
			this->tbxQuantite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxQuantite->ForeColor = System::Drawing::SystemColors::Window;
			this->tbxQuantite->Location = System::Drawing::Point(94, 175);
			this->tbxQuantite->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->tbxQuantite->Name = L"tbxQuantite";
			this->tbxQuantite->Size = System::Drawing::Size(289, 22);
			this->tbxQuantite->TabIndex = 56;
			// 
			// tbxRemise
			// 
			this->tbxRemise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRemise->ForeColor = System::Drawing::SystemColors::Window;
			this->tbxRemise->Location = System::Drawing::Point(156, 208);
			this->tbxRemise->Name = L"tbxRemise";
			this->tbxRemise->Size = System::Drawing::Size(227, 22);
			this->tbxRemise->TabIndex = 57;
			this->tbxRemise->ValueChanged += gcnew System::EventHandler(this, &InputArticleInserer::tbxRemise_ValueChanged);
			// 
			// tbxPrixHT
			// 
			this->tbxPrixHT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrixHT->DecimalPlaces = 2;
			this->tbxPrixHT->ForeColor = System::Drawing::SystemColors::Window;
			this->tbxPrixHT->Location = System::Drawing::Point(156, 246);
			this->tbxPrixHT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->tbxPrixHT->Name = L"tbxPrixHT";
			this->tbxPrixHT->Size = System::Drawing::Size(227, 22);
			this->tbxPrixHT->TabIndex = 59;
			this->tbxPrixHT->ValueChanged += gcnew System::EventHandler(this, &InputArticleInserer::tbxPrixHT_ValueChanged);
			// 
			// lblPrixHT
			// 
			this->lblPrixHT->AutoSize = true;
			this->lblPrixHT->ForeColor = System::Drawing::Color::Silver;
			this->lblPrixHT->Location = System::Drawing::Point(24, 247);
			this->lblPrixHT->Name = L"lblPrixHT";
			this->lblPrixHT->Size = System::Drawing::Size(118, 17);
			this->lblPrixHT->TabIndex = 58;
			this->lblPrixHT->Text = L"Prix article HT (€)";
			// 
			// tbxPrixTTC
			// 
			this->tbxPrixTTC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrixTTC->DecimalPlaces = 2;
			this->tbxPrixTTC->Enabled = false;
			this->tbxPrixTTC->ForeColor = System::Drawing::SystemColors::Window;
			this->tbxPrixTTC->InterceptArrowKeys = false;
			this->tbxPrixTTC->Location = System::Drawing::Point(156, 320);
			this->tbxPrixTTC->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->tbxPrixTTC->Name = L"tbxPrixTTC";
			this->tbxPrixTTC->ReadOnly = true;
			this->tbxPrixTTC->Size = System::Drawing::Size(227, 22);
			this->tbxPrixTTC->TabIndex = 61;
			// 
			// lblArticleTTC
			// 
			this->lblArticleTTC->AutoSize = true;
			this->lblArticleTTC->ForeColor = System::Drawing::Color::Silver;
			this->lblArticleTTC->Location = System::Drawing::Point(24, 321);
			this->lblArticleTTC->Name = L"lblArticleTTC";
			this->lblArticleTTC->Size = System::Drawing::Size(126, 17);
			this->lblArticleTTC->TabIndex = 60;
			this->lblArticleTTC->Text = L"Prix article TTC (€)";
			// 
			// tbxTauxTVA
			// 
			this->tbxTauxTVA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxTauxTVA->ForeColor = System::Drawing::SystemColors::Window;
			this->tbxTauxTVA->Location = System::Drawing::Point(156, 283);
			this->tbxTauxTVA->Name = L"tbxTauxTVA";
			this->tbxTauxTVA->ReadOnly = true;
			this->tbxTauxTVA->Size = System::Drawing::Size(227, 22);
			this->tbxTauxTVA->TabIndex = 63;
			this->tbxTauxTVA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->tbxTauxTVA->ValueChanged += gcnew System::EventHandler(this, &InputArticleInserer::tbxTauxTVA_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(24, 284);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 17);
			this->label1->TabIndex = 62;
			this->label1->Text = L"Taux TVA (%)";
			// 
			// tbxSeuil
			// 
			this->tbxSeuil->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxSeuil->ForeColor = System::Drawing::SystemColors::Window;
			this->tbxSeuil->ImeMode = System::Windows::Forms::ImeMode::On;
			this->tbxSeuil->InterceptArrowKeys = false;
			this->tbxSeuil->Location = System::Drawing::Point(206, 363);
			this->tbxSeuil->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->tbxSeuil->Name = L"tbxSeuil";
			this->tbxSeuil->Size = System::Drawing::Size(177, 22);
			this->tbxSeuil->TabIndex = 65;
			// 
			// lblSeuil
			// 
			this->lblSeuil->AutoSize = true;
			this->lblSeuil->ForeColor = System::Drawing::Color::Silver;
			this->lblSeuil->Location = System::Drawing::Point(24, 364);
			this->lblSeuil->Name = L"lblSeuil";
			this->lblSeuil->Size = System::Drawing::Size(176, 17);
			this->lblSeuil->TabIndex = 64;
			this->lblSeuil->Text = L"Seuil réapprovisionnement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(23, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 17);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Couleur produit";
			// 
			// tbxCouleur
			// 
			this->tbxCouleur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCouleur->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCouleur->ForeColor = System::Drawing::Color::Silver;
			this->tbxCouleur->Location = System::Drawing::Point(137, 140);
			this->tbxCouleur->Margin = System::Windows::Forms::Padding(4);
			this->tbxCouleur->Name = L"tbxCouleur";
			this->tbxCouleur->Size = System::Drawing::Size(245, 15);
			this->tbxCouleur->TabIndex = 67;
			// 
			// InputArticleInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(411, 480);
			this->Controls->Add(this->tbxCouleur);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbxSeuil);
			this->Controls->Add(this->lblSeuil);
			this->Controls->Add(this->tbxTauxTVA);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbxPrixTTC);
			this->Controls->Add(this->lblArticleTTC);
			this->Controls->Add(this->tbxPrixHT);
			this->Controls->Add(this->lblPrixHT);
			this->Controls->Add(this->tbxRemise);
			this->Controls->Add(this->tbxQuantite);
			this->Controls->Add(this->label_titre_infos);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->lblQuantite);
			this->Controls->Add(this->tbxNature);
			this->Controls->Add(this->lblRemise);
			this->Controls->Add(this->lblNomArticle);
			this->Controls->Add(this->tbxNom);
			this->Controls->Add(this->lblNature);
			this->Name = L"InputArticleInserer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Insérer un nouvel article";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxQuantite))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxRemise))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxPrixHT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxPrixTTC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxTauxTVA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbxSeuil))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: float calculatePrice() {
	return (float)tbxPrixHT->Value * (1 + (float)tbxTauxTVA->Value / 100) - (float)tbxPrixHT->Value * ((float)tbxRemise->Value / 100);
}

private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tbxTauxTVA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	tbxPrixTTC->Value= (Decimal)calculatePrice();
}
private: System::Void tbxPrixHT_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	tbxPrixTTC->Value = (Decimal)calculatePrice();
}
private: System::Void tbxRemise_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	tbxPrixTTC->Value = (Decimal)calculatePrice();
}
private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_map_article::CLarticle^ article = gcnew NS_map_article::CLarticle;
	article->setNom(this->tbxNom->Text);
	article->setNature(this->tbxNature->Text);
	article->setCouleur(this->tbxCouleur->Text);
	article->setPrixHT(float::Parse(this->tbxPrixHT->Text));
	article->setRemise(float::Parse(this->tbxRemise->Text));
	article->setStock(int::Parse(this->tbxQuantite->Text));
	article->setQuantiteReapprovisionnement(int::Parse(this->tbxSeuil->Text));
	article->setTauxTVA(float::Parse(this->tbxTauxTVA->Text));
	UIAction::validerButtonArticle(this, article);
	this->Close();
}
};
}