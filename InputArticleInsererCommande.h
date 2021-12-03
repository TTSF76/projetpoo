#pragma once
#include "CLadresse.h"
#include "UIAction.h"
#include "UIManager.h"
#include "CLconnect.h"
#include "CLserviceclient.h"
#include "CLserviceStats.h"
#include "CLservicecommande.h"
#include "CLserviceutilitaire.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputArticleInsererCommande
	/// </summary>
	public ref class InputArticleInsererCommande : public System::Windows::Forms::Form
	{
	public:
		InputArticleInsererCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			NS_Utilitaire_svc::CLserviceutilitaire^ article = gcnew NS_Utilitaire_svc::CLserviceutilitaire();
			std::vector<std::string> list_articles;
			list_articles = article->repertorierArticles(list_articles);
			for (int i = 0; i < list_articles.size(); i++) {
				this->cbxNomArticle->Items->Add (gcnew String(list_articles[i].c_str()));
			}





		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InputArticleInsererCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbxNatureArticle;
	private: System::Windows::Forms::TextBox^ tbxStockArticle;
	private: System::Windows::Forms::TextBox^ tbxCouleurArticle;
	private: System::Windows::Forms::TextBox^ tbxPrixArticle;
	private: System::Windows::Forms::TextBox^ tbxRemiseArticle;






	private: System::Windows::Forms::ComboBox^ cbxNomArticle;
	private: System::Windows::Forms::NumericUpDown^ nUDqteArticle;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::Button^ btnValider;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputArticleInsererCommande::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbxNatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbxStockArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbxCouleurArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbxPrixArticle = (gcnew System::Windows::Forms::TextBox());
			this->tbxRemiseArticle = (gcnew System::Windows::Forms::TextBox());
			this->cbxNomArticle = (gcnew System::Windows::Forms::ComboBox());
			this->nUDqteArticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUDqteArticle))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(16, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom Article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(16, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nature Article";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(16, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Stock Article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(296, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Prix Article HT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(296, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Quantité Article";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(296, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Couleur Article";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(295, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Remise Article";
			// 
			// tbxNatureArticle
			// 
			this->tbxNatureArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxNatureArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxNatureArticle->Enabled = false;
			this->tbxNatureArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxNatureArticle->Location = System::Drawing::Point(120, 123);
			this->tbxNatureArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxNatureArticle->Name = L"tbxNatureArticle";
			this->tbxNatureArticle->Size = System::Drawing::Size(100, 15);
			this->tbxNatureArticle->TabIndex = 157;
			// 
			// tbxStockArticle
			// 
			this->tbxStockArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxStockArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxStockArticle->Enabled = false;
			this->tbxStockArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxStockArticle->Location = System::Drawing::Point(120, 169);
			this->tbxStockArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxStockArticle->Name = L"tbxStockArticle";
			this->tbxStockArticle->Size = System::Drawing::Size(100, 15);
			this->tbxStockArticle->TabIndex = 158;
			// 
			// tbxCouleurArticle
			// 
			this->tbxCouleurArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxCouleurArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxCouleurArticle->Enabled = false;
			this->tbxCouleurArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxCouleurArticle->Location = System::Drawing::Point(408, 110);
			this->tbxCouleurArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxCouleurArticle->Name = L"tbxCouleurArticle";
			this->tbxCouleurArticle->Size = System::Drawing::Size(100, 15);
			this->tbxCouleurArticle->TabIndex = 160;
			// 
			// tbxPrixArticle
			// 
			this->tbxPrixArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPrixArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPrixArticle->Enabled = false;
			this->tbxPrixArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrixArticle->Location = System::Drawing::Point(408, 158);
			this->tbxPrixArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxPrixArticle->Name = L"tbxPrixArticle";
			this->tbxPrixArticle->Size = System::Drawing::Size(100, 15);
			this->tbxPrixArticle->TabIndex = 161;
			// 
			// tbxRemiseArticle
			// 
			this->tbxRemiseArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRemiseArticle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRemiseArticle->Enabled = false;
			this->tbxRemiseArticle->ForeColor = System::Drawing::Color::Silver;
			this->tbxRemiseArticle->Location = System::Drawing::Point(408, 203);
			this->tbxRemiseArticle->Margin = System::Windows::Forms::Padding(4);
			this->tbxRemiseArticle->Name = L"tbxRemiseArticle";
			this->tbxRemiseArticle->Size = System::Drawing::Size(100, 15);
			this->tbxRemiseArticle->TabIndex = 162;
			// 
			// cbxNomArticle
			// 
			this->cbxNomArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxNomArticle->ForeColor = System::Drawing::Color::Silver;
			this->cbxNomArticle->FormattingEnabled = true;
			this->cbxNomArticle->Location = System::Drawing::Point(120, 76);
			this->cbxNomArticle->Name = L"cbxNomArticle";
			this->cbxNomArticle->Size = System::Drawing::Size(110, 24);
			this->cbxNomArticle->TabIndex = 163;
			this->cbxNomArticle->SelectedIndexChanged += gcnew System::EventHandler(this, &InputArticleInsererCommande::comboBox1_SelectedIndexChanged);
			// 
			// nUDqteArticle
			// 
			this->nUDqteArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->nUDqteArticle->ForeColor = System::Drawing::Color::Silver;
			this->nUDqteArticle->Location = System::Drawing::Point(408, 63);
			this->nUDqteArticle->Name = L"nUDqteArticle";
			this->nUDqteArticle->Size = System::Drawing::Size(71, 22);
			this->nUDqteArticle->TabIndex = 164;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(12, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 24);
			this->label8->TabIndex = 165;
			this->label8->Text = L" Articles";
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnAnnuler->FlatAppearance->BorderSize = 0;
			this->btnAnnuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnnuler->ForeColor = System::Drawing::Color::White;
			this->btnAnnuler->Location = System::Drawing::Point(376, 260);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 178;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputArticleInsererCommande::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->btnValider->FlatAppearance->BorderSize = 0;
			this->btnValider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnValider->ForeColor = System::Drawing::Color::White;
			this->btnValider->Location = System::Drawing::Point(194, 260);
			this->btnValider->Margin = System::Windows::Forms::Padding(4);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 28);
			this->btnValider->TabIndex = 177;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = false;
			// 
			// InputArticleInsererCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(563, 306);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->nUDqteArticle);
			this->Controls->Add(this->cbxNomArticle);
			this->Controls->Add(this->tbxRemiseArticle);
			this->Controls->Add(this->tbxPrixArticle);
			this->Controls->Add(this->tbxCouleurArticle);
			this->Controls->Add(this->tbxStockArticle);
			this->Controls->Add(this->tbxNatureArticle);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(581, 353);
			this->MinimumSize = System::Drawing::Size(581, 353);
			this->Name = L"InputArticleInsererCommande";
			this->Text = L"Ajouter Articles";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUDqteArticle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
