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

























private: System::Windows::Forms::ComboBox^ cbxPaiementMoyen;
private: System::Windows::Forms::Button^ btnValider;
private: System::Windows::Forms::Button^ btnAnnuler;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label_tire_commande;
private: System::Windows::Forms::Label^ label_titre_facturation;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ tbxNom;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ tbxPrenom;












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
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_tire_commande = (gcnew System::Windows::Forms::Label());
			this->label_titre_facturation = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cbxPaiementMoyen
			// 
			this->cbxPaiementMoyen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->cbxPaiementMoyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbxPaiementMoyen->ForeColor = System::Drawing::Color::Silver;
			this->cbxPaiementMoyen->FormattingEnabled = true;
			this->cbxPaiementMoyen->Location = System::Drawing::Point(607, 201);
			this->cbxPaiementMoyen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbxPaiementMoyen->Name = L"cbxPaiementMoyen";
			this->cbxPaiementMoyen->Size = System::Drawing::Size(229, 24);
			this->cbxPaiementMoyen->TabIndex = 64;
			// 
			// dtpPaiementDate
			// 
			this->dtpPaiementDate->Location = System::Drawing::Point(607, 236);
			this->dtpPaiementDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpPaiementDate->Name = L"dtpPaiementDate";
			this->dtpPaiementDate->Size = System::Drawing::Size(229, 22);
			this->dtpPaiementDate->TabIndex = 63;
			// 
			// lblPaiementDate
			// 
			this->lblPaiementDate->AutoSize = true;
			this->lblPaiementDate->ForeColor = System::Drawing::Color::Silver;
			this->lblPaiementDate->Location = System::Drawing::Point(445, 241);
			this->lblPaiementDate->Name = L"lblPaiementDate";
			this->lblPaiementDate->Size = System::Drawing::Size(120, 17);
			this->lblPaiementDate->TabIndex = 62;
			this->lblPaiementDate->Text = L"Date de paiement";
			// 
			// lblPaiementMoyen
			// 
			this->lblPaiementMoyen->AutoSize = true;
			this->lblPaiementMoyen->ForeColor = System::Drawing::Color::Silver;
			this->lblPaiementMoyen->Location = System::Drawing::Point(445, 205);
			this->lblPaiementMoyen->Name = L"lblPaiementMoyen";
			this->lblPaiementMoyen->Size = System::Drawing::Size(132, 17);
			this->lblPaiementMoyen->TabIndex = 60;
			this->lblPaiementMoyen->Text = L"Moyen de paiement";
			// 
			// lblPaiementNombre
			// 
			this->lblPaiementNombre->AutoSize = true;
			this->lblPaiementNombre->ForeColor = System::Drawing::Color::Silver;
			this->lblPaiementNombre->Location = System::Drawing::Point(445, 174);
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
			this->lblClient->Location = System::Drawing::Point(445, 88);
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
			this->cbxIdClient->Location = System::Drawing::Point(607, 81);
			this->cbxIdClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbxIdClient->Name = L"cbxIdClient";
			this->cbxIdClient->Size = System::Drawing::Size(93, 24);
			this->cbxIdClient->TabIndex = 59;
			// 
			// tbxPaiementNombre
			// 
			this->tbxPaiementNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxPaiementNombre->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxPaiementNombre->ForeColor = System::Drawing::Color::Silver;
			this->tbxPaiementNombre->Location = System::Drawing::Point(607, 177);
			this->tbxPaiementNombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxPaiementNombre->Name = L"tbxPaiementNombre";
			this->tbxPaiementNombre->Size = System::Drawing::Size(229, 15);
			this->tbxPaiementNombre->TabIndex = 58;
			// 
			// dtpEnvoi
			// 
			this->dtpEnvoi->Location = System::Drawing::Point(141, 144);
			this->dtpEnvoi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpEnvoi->Name = L"dtpEnvoi";
			this->dtpEnvoi->Size = System::Drawing::Size(271, 22);
			this->dtpEnvoi->TabIndex = 58;
			// 
			// dtpLivraison
			// 
			this->dtpLivraison->Location = System::Drawing::Point(141, 114);
			this->dtpLivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpLivraison->Name = L"dtpLivraison";
			this->dtpLivraison->Size = System::Drawing::Size(271, 22);
			this->dtpLivraison->TabIndex = 57;
			// 
			// tbxTotalPrix
			// 
			this->tbxTotalPrix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxTotalPrix->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxTotalPrix->ForeColor = System::Drawing::Color::Silver;
			this->tbxTotalPrix->Location = System::Drawing::Point(141, 238);
			this->tbxTotalPrix->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxTotalPrix->Name = L"tbxTotalPrix";
			this->tbxTotalPrix->Size = System::Drawing::Size(271, 15);
			this->tbxTotalPrix->TabIndex = 56;
			// 
			// lblTotalPrix
			// 
			this->lblTotalPrix->AutoSize = true;
			this->lblTotalPrix->ForeColor = System::Drawing::Color::Silver;
			this->lblTotalPrix->Location = System::Drawing::Point(37, 236);
			this->lblTotalPrix->Name = L"lblTotalPrix";
			this->lblTotalPrix->Size = System::Drawing::Size(62, 17);
			this->lblTotalPrix->TabIndex = 55;
			this->lblTotalPrix->Text = L"Prix total";
			// 
			// tbxTVA
			// 
			this->tbxTVA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxTVA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxTVA->ForeColor = System::Drawing::Color::Silver;
			this->tbxTVA->Location = System::Drawing::Point(141, 210);
			this->tbxTVA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxTVA->Name = L"tbxTVA";
			this->tbxTVA->Size = System::Drawing::Size(271, 15);
			this->tbxTVA->TabIndex = 54;
			// 
			// tbxTotalHT
			// 
			this->tbxTotalHT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxTotalHT->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxTotalHT->ForeColor = System::Drawing::Color::Silver;
			this->tbxTotalHT->Location = System::Drawing::Point(141, 179);
			this->tbxTotalHT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxTotalHT->Name = L"tbxTotalHT";
			this->tbxTotalHT->Size = System::Drawing::Size(271, 15);
			this->tbxTotalHT->TabIndex = 53;
			// 
			// tbxRef
			// 
			this->tbxRef->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbxRef->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbxRef->ForeColor = System::Drawing::Color::Silver;
			this->tbxRef->Location = System::Drawing::Point(141, 88);
			this->tbxRef->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxRef->Name = L"tbxRef";
			this->tbxRef->Size = System::Drawing::Size(271, 15);
			this->tbxRef->TabIndex = 52;
			// 
			// prixht
			// 
			this->prixht->AutoSize = true;
			this->prixht->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->prixht->ForeColor = System::Drawing::Color::Silver;
			this->prixht->Location = System::Drawing::Point(37, 207);
			this->prixht->Name = L"prixht";
			this->prixht->Size = System::Drawing::Size(97, 17);
			this->prixht->TabIndex = 51;
			this->prixht->Text = L"Prix de la TVA";
			// 
			// Produit
			// 
			this->Produit->AutoSize = true;
			this->Produit->ForeColor = System::Drawing::Color::Silver;
			this->Produit->Location = System::Drawing::Point(37, 177);
			this->Produit->Name = L"Produit";
			this->Produit->Size = System::Drawing::Size(85, 17);
			this->Produit->TabIndex = 50;
			this->Produit->Text = L"Prix total HT";
			// 
			// Couleur
			// 
			this->Couleur->AutoSize = true;
			this->Couleur->ForeColor = System::Drawing::Color::Silver;
			this->Couleur->Location = System::Drawing::Point(37, 148);
			this->Couleur->Name = L"Couleur";
			this->Couleur->Size = System::Drawing::Size(87, 17);
			this->Couleur->TabIndex = 49;
			this->Couleur->Text = L"Date d\'envoi";
			// 
			// Ref
			// 
			this->Ref->AutoSize = true;
			this->Ref->ForeColor = System::Drawing::Color::Silver;
			this->Ref->Location = System::Drawing::Point(37, 118);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(94, 17);
			this->Ref->TabIndex = 48;
			this->Ref->Text = L"Date livraison";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->ForeColor = System::Drawing::Color::Silver;
			this->nom->Location = System::Drawing::Point(37, 88);
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
			this->btnValider->Location = System::Drawing::Point(480, 298);
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
			this->btnAnnuler->Location = System::Drawing::Point(662, 298);
			this->btnAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(174, 28);
			this->btnAnnuler->TabIndex = 23;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = false;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputCommandeInserer::btnAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 17);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Insertion de commande";
			// 
			// label_tire_commande
			// 
			this->label_tire_commande->AutoSize = true;
			this->label_tire_commande->ForeColor = System::Drawing::Color::Silver;
			this->label_tire_commande->Location = System::Drawing::Point(138, 47);
			this->label_tire_commande->Name = L"label_tire_commande";
			this->label_tire_commande->Size = System::Drawing::Size(79, 17);
			this->label_tire_commande->TabIndex = 66;
			this->label_tire_commande->Text = L"Commande";
			// 
			// label_titre_facturation
			// 
			this->label_titre_facturation->AutoSize = true;
			this->label_titre_facturation->ForeColor = System::Drawing::Color::Silver;
			this->label_titre_facturation->Location = System::Drawing::Point(611, 47);
			this->label_titre_facturation->Name = L"label_titre_facturation";
			this->label_titre_facturation->Size = System::Drawing::Size(79, 17);
			this->label_titre_facturation->TabIndex = 67;
			this->label_titre_facturation->Text = L"Facturation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(445, 147);
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
			this->tbxNom->ForeColor = System::Drawing::Color::Silver;
			this->tbxNom->Location = System::Drawing::Point(607, 149);
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
			this->label3->Location = System::Drawing::Point(445, 121);
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
			this->tbxPrenom->ForeColor = System::Drawing::Color::Silver;
			this->tbxPrenom->Location = System::Drawing::Point(607, 121);
			this->tbxPrenom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(133, 15);
			this->tbxPrenom->TabIndex = 71;
			// 
			// InputCommandeInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(853, 348);
			this->Controls->Add(this->tbxPrenom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbxNom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_titre_facturation);
			this->Controls->Add(this->label_tire_commande);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->cbxPaiementMoyen);
			this->Controls->Add(this->dtpEnvoi);
			this->Controls->Add(this->dtpPaiementDate);
			this->Controls->Add(this->lblPaiementDate);
			this->Controls->Add(this->dtpLivraison);
			this->Controls->Add(this->lblPaiementMoyen);
			this->Controls->Add(this->tbxTotalPrix);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->lblTotalPrix);
			this->Controls->Add(this->Ref);
			this->Controls->Add(this->lblPaiementNombre);
			this->Controls->Add(this->tbxTVA);
			this->Controls->Add(this->lblClient);
			this->Controls->Add(this->Couleur);
			this->Controls->Add(this->tbxTotalHT);
			this->Controls->Add(this->cbxIdClient);
			this->Controls->Add(this->tbxPaiementNombre);
			this->Controls->Add(this->Produit);
			this->Controls->Add(this->tbxRef);
			this->Controls->Add(this->prixht);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(871, 395);
			this->MinimumSize = System::Drawing::Size(871, 395);
			this->Name = L"InputCommandeInserer";
			this->Text = L"Insérer une commande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		NS_map_commande::CLcommande^ commande= gcnew NS_map_commande::CLcommande;
		if ( tbxRef->Text-> Length == 0 || tbxTotalHT->Text->Length  || tbxTVA->Text->Length == 0 ||
			tbxTotalPrix->Text->Length == 0 || cbxIdClient->SelectedIndex < 0 || tbxPrenom->Text->Length == 0 ||
			tbxNom->Text->Length == 0 || tbxPaiementNombre->Text->Length == 0 || cbxPaiementMoyen->Text->Length == 0) {
			MessageBox::Show("Vous n'avez pas renseigné tous les champs", "Erreur", MessageBoxButtons::OK);
			return;
		}
		
		/*commande->setNom(this->tbxNom->Text);
		client->setPrenom(this->tbxPrenom->Text);
		client->setDateNaissance(this->dtpAnniversaire->Value.ToString("yyyy-MM-dd"));
		adresse_livraison->setVille(1);
		adresse_livraison->setNumeroRue(tbxNRueL->Text);
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
		UIAction::validerButtonClient(this, client);
		this->Close();*/
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


};
}
