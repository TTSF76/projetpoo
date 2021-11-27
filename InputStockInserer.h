#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputStockInserer
	/// </summary>
	public ref class InputStockInserer : public System::Windows::Forms::Form
	{
	public:
		InputStockInserer(void)
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
		~InputStockInserer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbxMain;
	protected:


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TextBox^ tbxTauxTVA;
	private: System::Windows::Forms::TextBox^ tbxQteMin;
	private: System::Windows::Forms::TextBox^ tbxRemise;
	private: System::Windows::Forms::TextBox^ tbxQte;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ tbxNature;
	private: System::Windows::Forms::TextBox^ tbxCouleur;
	private: System::Windows::Forms::TextBox^ tbxRef;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::Label^ prixht;
	private: System::Windows::Forms::Label^ Produit;
	private: System::Windows::Forms::Label^ Couleur;
	private: System::Windows::Forms::Label^ Ref;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->Ref = (gcnew System::Windows::Forms::Label());
			this->Couleur = (gcnew System::Windows::Forms::Label());
			this->Produit = (gcnew System::Windows::Forms::Label());
			this->prixht = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->tbxRef = (gcnew System::Windows::Forms::TextBox());
			this->tbxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->tbxNature = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tbxTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->tbxQteMin = (gcnew System::Windows::Forms::TextBox());
			this->tbxRemise = (gcnew System::Windows::Forms::TextBox());
			this->tbxQte = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gbxMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxMain
			// 
			this->gbxMain->Controls->Add(this->tbxTauxTVA);
			this->gbxMain->Controls->Add(this->tbxQteMin);
			this->gbxMain->Controls->Add(this->tbxRemise);
			this->gbxMain->Controls->Add(this->tbxQte);
			this->gbxMain->Controls->Add(this->label2);
			this->gbxMain->Controls->Add(this->label3);
			this->gbxMain->Controls->Add(this->label4);
			this->gbxMain->Controls->Add(this->label5);
			this->gbxMain->Controls->Add(this->textBox5);
			this->gbxMain->Controls->Add(this->tbxNature);
			this->gbxMain->Controls->Add(this->tbxCouleur);
			this->gbxMain->Controls->Add(this->tbxRef);
			this->gbxMain->Controls->Add(this->tbxNom);
			this->gbxMain->Controls->Add(this->prixht);
			this->gbxMain->Controls->Add(this->Produit);
			this->gbxMain->Controls->Add(this->Couleur);
			this->gbxMain->Controls->Add(this->Ref);
			this->gbxMain->Controls->Add(this->nom);
			this->gbxMain->Controls->Add(this->button2);
			this->gbxMain->Controls->Add(this->button1);
			this->gbxMain->Location = System::Drawing::Point(12, 25);
			this->gbxMain->Name = L"gbxMain";
			this->gbxMain->Size = System::Drawing::Size(789, 285);
			this->gbxMain->TabIndex = 0;
			this->gbxMain->TabStop = false;
			this->gbxMain->Text = L"Insertion d\'article";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(401, 189);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(377, 78);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 189);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(377, 78);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Location = System::Drawing::Point(51, 35);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(105, 17);
			this->nom->TabIndex = 24;
			this->nom->Text = L"Nom du produit";
			// 
			// Ref
			// 
			this->Ref->AutoSize = true;
			this->Ref->Location = System::Drawing::Point(51, 65);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(142, 17);
			this->Ref->TabIndex = 25;
			this->Ref->Text = L"Reférence du produit";
			// 
			// Couleur
			// 
			this->Couleur->AutoSize = true;
			this->Couleur->Location = System::Drawing::Point(51, 97);
			this->Couleur->Name = L"Couleur";
			this->Couleur->Size = System::Drawing::Size(125, 17);
			this->Couleur->TabIndex = 26;
			this->Couleur->Text = L"Couleur du produit";
			// 
			// Produit
			// 
			this->Produit->AutoSize = true;
			this->Produit->Location = System::Drawing::Point(51, 126);
			this->Produit->Name = L"Produit";
			this->Produit->Size = System::Drawing::Size(119, 17);
			this->Produit->TabIndex = 27;
			this->Produit->Text = L"Nature du produit";
			// 
			// prixht
			// 
			this->prixht->AutoSize = true;
			this->prixht->Location = System::Drawing::Point(215, 163);
			this->prixht->Name = L"prixht";
			this->prixht->Size = System::Drawing::Size(161, 17);
			this->prixht->TabIndex = 28;
			this->prixht->Text = L"Prix de l\'article hors taxe";
			// 
			// tbxNom
			// 
			this->tbxNom->Location = System::Drawing::Point(162, 32);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(156, 22);
			this->tbxNom->TabIndex = 29;
			// 
			// tbxRef
			// 
			this->tbxRef->Location = System::Drawing::Point(199, 62);
			this->tbxRef->Name = L"tbxRef";
			this->tbxRef->Size = System::Drawing::Size(119, 22);
			this->tbxRef->TabIndex = 30;
			// 
			// tbxCouleur
			// 
			this->tbxCouleur->Location = System::Drawing::Point(182, 94);
			this->tbxCouleur->Name = L"tbxCouleur";
			this->tbxCouleur->Size = System::Drawing::Size(136, 22);
			this->tbxCouleur->TabIndex = 31;
			// 
			// tbxNature
			// 
			this->tbxNature->Location = System::Drawing::Point(176, 123);
			this->tbxNature->Name = L"tbxNature";
			this->tbxNature->Size = System::Drawing::Size(142, 22);
			this->tbxNature->TabIndex = 32;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(382, 160);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 33;
			// 
			// tbxTauxTVA
			// 
			this->tbxTauxTVA->Location = System::Drawing::Point(552, 123);
			this->tbxTauxTVA->Name = L"tbxTauxTVA";
			this->tbxTauxTVA->Size = System::Drawing::Size(125, 22);
			this->tbxTauxTVA->TabIndex = 42;
			// 
			// tbxQteMin
			// 
			this->tbxQteMin->Location = System::Drawing::Point(535, 94);
			this->tbxQteMin->Name = L"tbxQteMin";
			this->tbxQteMin->Size = System::Drawing::Size(142, 22);
			this->tbxQteMin->TabIndex = 41;
			// 
			// tbxRemise
			// 
			this->tbxRemise->Location = System::Drawing::Point(558, 62);
			this->tbxRemise->Name = L"tbxRemise";
			this->tbxRemise->Size = System::Drawing::Size(119, 22);
			this->tbxRemise->TabIndex = 40;
			// 
			// tbxQte
			// 
			this->tbxQte->Location = System::Drawing::Point(546, 32);
			this->tbxQte->Name = L"tbxQte";
			this->tbxQte->Size = System::Drawing::Size(131, 22);
			this->tbxQte->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(410, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 17);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Taux de TVA (en %)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(410, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 17);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Quantité minimale";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(410, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 17);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Remise sur le produit";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(410, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 17);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Quantité disponible";
			// 
			// InputStockInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 330);
			this->Controls->Add(this->gbxMain);
			this->Name = L"InputStockInserer";
			this->Text = L"InputStockInserer";
			this->gbxMain->ResumeLayout(false);
			this->gbxMain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
