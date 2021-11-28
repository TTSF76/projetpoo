#pragma once
#include "UIManager.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Panel^ panel1;
	protected:

	protected:

	protected:


	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	public: System::Windows::Forms::Button^ bouton_client;
	private:
	public: System::Windows::Forms::Button^ bouton_commande;
	public: System::Windows::Forms::Button^ bouton_stock;
	public: System::Windows::Forms::Button^ bouton_personnel;
	public: System::Windows::Forms::Button^ bouton_stats;










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bouton_select;
	private: System::Windows::Forms::Button^ bouton_create;



	private: System::Windows::Forms::Button^ bouton_update;
	private: System::Windows::Forms::Button^ bouton_delete;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bouton_stats = (gcnew System::Windows::Forms::Button());
			this->bouton_commande = (gcnew System::Windows::Forms::Button());
			this->bouton_stock = (gcnew System::Windows::Forms::Button());
			this->bouton_personnel = (gcnew System::Windows::Forms::Button());
			this->bouton_client = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bouton_select = (gcnew System::Windows::Forms::Button());
			this->bouton_create = (gcnew System::Windows::Forms::Button());
			this->bouton_update = (gcnew System::Windows::Forms::Button());
			this->bouton_delete = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panel1->Controls->Add(this->bouton_stats);
			this->panel1->Controls->Add(this->bouton_commande);
			this->panel1->Controls->Add(this->bouton_stock);
			this->panel1->Controls->Add(this->bouton_personnel);
			this->panel1->Controls->Add(this->bouton_client);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 579);
			this->panel1->TabIndex = 0;
			// 
			// bouton_stats
			// 
			this->bouton_stats->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_stats->FlatAppearance->BorderSize = 0;
			this->bouton_stats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_stats->ForeColor = System::Drawing::Color::Snow;
			this->bouton_stats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_stats.Image")));
			this->bouton_stats->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stats->Location = System::Drawing::Point(0, 436);
			this->bouton_stats->Name = L"bouton_stats";
			this->bouton_stats->Size = System::Drawing::Size(200, 84);
			this->bouton_stats->TabIndex = 5;
			this->bouton_stats->Text = L"            Gestion Statistiques";
			this->bouton_stats->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stats->UseVisualStyleBackColor = true;
			this->bouton_stats->Click += gcnew System::EventHandler(this, &MyForm1::bouton_stats_Click);
			// 
			// bouton_commande
			// 
			this->bouton_commande->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_commande->FlatAppearance->BorderSize = 0;
			this->bouton_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_commande->ForeColor = System::Drawing::Color::Snow;
			this->bouton_commande->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_commande.Image")));
			this->bouton_commande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_commande->Location = System::Drawing::Point(0, 352);
			this->bouton_commande->Name = L"bouton_commande";
			this->bouton_commande->Size = System::Drawing::Size(200, 84);
			this->bouton_commande->TabIndex = 4;
			this->bouton_commande->Text = L"            Gestion Commandes";
			this->bouton_commande->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_commande->UseVisualStyleBackColor = true;
			this->bouton_commande->Click += gcnew System::EventHandler(this, &MyForm1::bouton_commande_Click);
			// 
			// bouton_stock
			// 
			this->bouton_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_stock->FlatAppearance->BorderSize = 0;
			this->bouton_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_stock->ForeColor = System::Drawing::Color::Snow;
			this->bouton_stock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_stock.Image")));
			this->bouton_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stock->Location = System::Drawing::Point(0, 268);
			this->bouton_stock->Name = L"bouton_stock";
			this->bouton_stock->Size = System::Drawing::Size(200, 84);
			this->bouton_stock->TabIndex = 3;
			this->bouton_stock->Text = L"            Gestion Stock";
			this->bouton_stock->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stock->UseVisualStyleBackColor = true;
			this->bouton_stock->Click += gcnew System::EventHandler(this, &MyForm1::bouton_stock_Click);
			// 
			// bouton_personnel
			// 
			this->bouton_personnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_personnel->FlatAppearance->BorderSize = 0;
			this->bouton_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_personnel->ForeColor = System::Drawing::Color::Snow;
			this->bouton_personnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_personnel.Image")));
			this->bouton_personnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_personnel->Location = System::Drawing::Point(0, 184);
			this->bouton_personnel->Name = L"bouton_personnel";
			this->bouton_personnel->Size = System::Drawing::Size(200, 84);
			this->bouton_personnel->TabIndex = 2;
			this->bouton_personnel->Text = L"       Gestion Personnel";
			this->bouton_personnel->UseVisualStyleBackColor = true;
			this->bouton_personnel->Click += gcnew System::EventHandler(this, &MyForm1::bouton_personnel_Click);
			// 
			// bouton_client
			// 
			this->bouton_client->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_client->FlatAppearance->BorderSize = 0;
			this->bouton_client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_client->ForeColor = System::Drawing::Color::Snow;
			this->bouton_client->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_client.Image")));
			this->bouton_client->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_client->Location = System::Drawing::Point(0, 100);
			this->bouton_client->Name = L"bouton_client";
			this->bouton_client->Size = System::Drawing::Size(200, 84);
			this->bouton_client->TabIndex = 1;
			this->bouton_client->Text = L"            Gestion Clients";
			this->bouton_client->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_client->UseVisualStyleBackColor = true;
			this->bouton_client->Click += gcnew System::EventHandler(this, &MyForm1::bouton_client_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(40, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DELIVERY \r\nMANAGER";
			// 
			// bouton_select
			// 
			this->bouton_select->Location = System::Drawing::Point(327, 164);
			this->bouton_select->Name = L"bouton_select";
			this->bouton_select->Size = System::Drawing::Size(75, 23);
			this->bouton_select->TabIndex = 1;
			this->bouton_select->Text = L"Afficher";
			this->bouton_select->UseVisualStyleBackColor = true;
			// 
			// bouton_create
			// 
			this->bouton_create->Location = System::Drawing::Point(527, 164);
			this->bouton_create->Name = L"bouton_create";
			this->bouton_create->Size = System::Drawing::Size(75, 23);
			this->bouton_create->TabIndex = 2;
			this->bouton_create->Text = L"Créer";
			this->bouton_create->UseVisualStyleBackColor = true;
			this->bouton_create->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// bouton_update
			// 
			this->bouton_update->Location = System::Drawing::Point(327, 329);
			this->bouton_update->Name = L"bouton_update";
			this->bouton_update->Size = System::Drawing::Size(124, 23);
			this->bouton_update->TabIndex = 3;
			this->bouton_update->Text = L"Mise à jour";
			this->bouton_update->UseVisualStyleBackColor = true;
			// 
			// bouton_delete
			// 
			this->bouton_delete->Location = System::Drawing::Point(527, 329);
			this->bouton_delete->Name = L"bouton_delete";
			this->bouton_delete->Size = System::Drawing::Size(105, 23);
			this->bouton_delete->TabIndex = 4;
			this->bouton_delete->Text = L"Supprimer";
			this->bouton_delete->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 579);
			this->Controls->Add(this->bouton_delete);
			this->Controls->Add(this->bouton_update);
			this->Controls->Add(this->bouton_create);
			this->Controls->Add(this->bouton_select);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bouton_client_Click(System::Object^ sender, System::EventArgs^ e) {
		UIManager::modifierCouleur(this, 1);
	}
	private: System::Void bouton_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		UIManager::modifierCouleur(this, 2);

	}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bouton_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	UIManager::modifierCouleur(this, 3);

}
private: System::Void bouton_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	UIManager::modifierCouleur(this, 4);

}
private: System::Void bouton_stats_Click(System::Object^ sender, System::EventArgs^ e) {
	UIManager::modifierCouleur(this, 5);

}
};
}
