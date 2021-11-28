#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputCommandeSupprimer
	/// </summary>
	public ref class InputCommandeSupprimer : public System::Windows::Forms::Form
	{
	public:
		InputCommandeSupprimer(void)
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
		~InputCommandeSupprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAnnuler;
	protected:
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Label^ lblCommande;
	private: System::Windows::Forms::ComboBox^ cbxCommande;

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
			this->lblCommande = (gcnew System::Windows::Forms::Label());
			this->cbxCommande = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Location = System::Drawing::Point(152, 32);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(130, 29);
			this->btnAnnuler->TabIndex = 29;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputCommandeSupprimer::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(13, 32);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(131, 29);
			this->btnValider->TabIndex = 28;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputCommandeSupprimer::btnValider_Click);
			// 
			// lblCommande
			// 
			this->lblCommande->AutoSize = true;
			this->lblCommande->Location = System::Drawing::Point(11, 9);
			this->lblCommande->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCommande->Name = L"lblCommande";
			this->lblCommande->Size = System::Drawing::Size(120, 13);
			this->lblCommande->TabIndex = 27;
			this->lblCommande->Text = L"Commande à supprimer:";
			// 
			// cbxCommande
			// 
			this->cbxCommande->FormattingEnabled = true;
			this->cbxCommande->Location = System::Drawing::Point(134, 7);
			this->cbxCommande->Margin = System::Windows::Forms::Padding(2);
			this->cbxCommande->Name = L"cbxCommande";
			this->cbxCommande->Size = System::Drawing::Size(147, 21);
			this->cbxCommande->TabIndex = 26;
			// 
			// InputCommandeSupprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 69);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->lblCommande);
			this->Controls->Add(this->cbxCommande);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InputCommandeSupprimer";
			this->Text = L"Supprimer une commande";
			this->ResumeLayout(false);
			this->PerformLayout();

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
