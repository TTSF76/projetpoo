#pragma once

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
	private: System::Windows::Forms::GroupBox^ gbxInputPersonnelInserer;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::GroupBox^ gbxInfos;
	private: System::Windows::Forms::ComboBox^ cbxManager;

	private: System::Windows::Forms::Label^ lblNom;
	private: System::Windows::Forms::Label^ lblPrenom;
	private: System::Windows::Forms::TextBox^ tbxNom;
	private: System::Windows::Forms::TextBox^ tbxPrenom;
	private: System::Windows::Forms::Label^ lblAnniversaire;
	private: System::Windows::Forms::DateTimePicker^ dtpAnniversaire;
	private: System::Windows::Forms::GroupBox^ gbxAdresse;

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




	private: System::Windows::Forms::Label^ lblManager;
	private: System::Windows::Forms::Label^ lblEmbauche;
	private: System::Windows::Forms::DateTimePicker^ dtpEmbauche;



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
			this->gbxInputPersonnelInserer = (gcnew System::Windows::Forms::GroupBox());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->gbxInfos = (gcnew System::Windows::Forms::GroupBox());
			this->lblEmbauche = (gcnew System::Windows::Forms::Label());
			this->dtpEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblManager = (gcnew System::Windows::Forms::Label());
			this->cbxManager = (gcnew System::Windows::Forms::ComboBox());
			this->lblNom = (gcnew System::Windows::Forms::Label());
			this->lblPrenom = (gcnew System::Windows::Forms::Label());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lblAnniversaire = (gcnew System::Windows::Forms::Label());
			this->dtpAnniversaire = (gcnew System::Windows::Forms::DateTimePicker());
			this->gbxAdresse = (gcnew System::Windows::Forms::GroupBox());
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
			this->gbxInputPersonnelInserer->SuspendLayout();
			this->gbxInfos->SuspendLayout();
			this->gbxAdresse->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxInputPersonnelInserer
			// 
			this->gbxInputPersonnelInserer->Controls->Add(this->btnAnnuler);
			this->gbxInputPersonnelInserer->Controls->Add(this->btnValider);
			this->gbxInputPersonnelInserer->Controls->Add(this->gbxInfos);
			this->gbxInputPersonnelInserer->Controls->Add(this->gbxAdresse);
			this->gbxInputPersonnelInserer->Location = System::Drawing::Point(10, 11);
			this->gbxInputPersonnelInserer->Name = L"gbxInputPersonnelInserer";
			this->gbxInputPersonnelInserer->Size = System::Drawing::Size(583, 242);
			this->gbxInputPersonnelInserer->TabIndex = 1;
			this->gbxInputPersonnelInserer->TabStop = false;
			this->gbxInputPersonnelInserer->Text = L"Informations";
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Location = System::Drawing::Point(295, 172);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(283, 63);
			this->btnAnnuler->TabIndex = 21;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputPersonnelInserer::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(6, 172);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(283, 63);
			this->btnValider->TabIndex = 20;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputPersonnelInserer::btnValider_Click);
			// 
			// gbxInfos
			// 
			this->gbxInfos->Controls->Add(this->lblEmbauche);
			this->gbxInfos->Controls->Add(this->dtpEmbauche);
			this->gbxInfos->Controls->Add(this->lblManager);
			this->gbxInfos->Controls->Add(this->cbxManager);
			this->gbxInfos->Controls->Add(this->lblNom);
			this->gbxInfos->Controls->Add(this->lblPrenom);
			this->gbxInfos->Controls->Add(this->tbxNom);
			this->gbxInfos->Controls->Add(this->tbxPrenom);
			this->gbxInfos->Controls->Add(this->lblAnniversaire);
			this->gbxInfos->Controls->Add(this->dtpAnniversaire);
			this->gbxInfos->Location = System::Drawing::Point(6, 13);
			this->gbxInfos->Name = L"gbxInfos";
			this->gbxInfos->Size = System::Drawing::Size(283, 153);
			this->gbxInfos->TabIndex = 19;
			this->gbxInfos->TabStop = false;
			this->gbxInfos->Text = L"Infos Principales";
			// 
			// lblEmbauche
			// 
			this->lblEmbauche->AutoSize = true;
			this->lblEmbauche->Location = System::Drawing::Point(6, 133);
			this->lblEmbauche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblEmbauche->Name = L"lblEmbauche";
			this->lblEmbauche->Size = System::Drawing::Size(91, 13);
			this->lblEmbauche->TabIndex = 23;
			this->lblEmbauche->Text = L"Date d\'embauche";
			// 
			// dtpEmbauche
			// 
			this->dtpEmbauche->Location = System::Drawing::Point(99, 129);
			this->dtpEmbauche->Margin = System::Windows::Forms::Padding(2);
			this->dtpEmbauche->Name = L"dtpEmbauche";
			this->dtpEmbauche->Size = System::Drawing::Size(177, 20);
			this->dtpEmbauche->TabIndex = 22;
			// 
			// lblManager
			// 
			this->lblManager->AutoSize = true;
			this->lblManager->Location = System::Drawing::Point(6, 105);
			this->lblManager->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblManager->Name = L"lblManager";
			this->lblManager->Size = System::Drawing::Size(49, 13);
			this->lblManager->TabIndex = 21;
			this->lblManager->Text = L"Manager";
			// 
			// cbxManager
			// 
			this->cbxManager->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxManager->FormattingEnabled = true;
			this->cbxManager->Location = System::Drawing::Point(58, 102);
			this->cbxManager->Margin = System::Windows::Forms::Padding(2);
			this->cbxManager->Name = L"cbxManager";
			this->cbxManager->Size = System::Drawing::Size(218, 21);
			this->cbxManager->TabIndex = 20;
			// 
			// lblNom
			// 
			this->lblNom->AutoSize = true;
			this->lblNom->Location = System::Drawing::Point(6, 22);
			this->lblNom->Name = L"lblNom";
			this->lblNom->Size = System::Drawing::Size(29, 13);
			this->lblNom->TabIndex = 19;
			this->lblNom->Text = L"Nom";
			// 
			// lblPrenom
			// 
			this->lblPrenom->AutoSize = true;
			this->lblPrenom->Location = System::Drawing::Point(6, 49);
			this->lblPrenom->Name = L"lblPrenom";
			this->lblPrenom->Size = System::Drawing::Size(43, 13);
			this->lblPrenom->TabIndex = 18;
			this->lblPrenom->Text = L"Prénom";
			// 
			// tbxNom
			// 
			this->tbxNom->Location = System::Drawing::Point(54, 19);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(222, 20);
			this->tbxNom->TabIndex = 9;
			// 
			// tbxPrenom
			// 
			this->tbxPrenom->Location = System::Drawing::Point(54, 46);
			this->tbxPrenom->Name = L"tbxPrenom";
			this->tbxPrenom->Size = System::Drawing::Size(222, 20);
			this->tbxPrenom->TabIndex = 12;
			// 
			// lblAnniversaire
			// 
			this->lblAnniversaire->AutoSize = true;
			this->lblAnniversaire->Location = System::Drawing::Point(6, 76);
			this->lblAnniversaire->Name = L"lblAnniversaire";
			this->lblAnniversaire->Size = System::Drawing::Size(98, 13);
			this->lblAnniversaire->TabIndex = 17;
			this->lblAnniversaire->Text = L"Date de Naissance";
			// 
			// dtpAnniversaire
			// 
			this->dtpAnniversaire->Location = System::Drawing::Point(109, 73);
			this->dtpAnniversaire->Name = L"dtpAnniversaire";
			this->dtpAnniversaire->Size = System::Drawing::Size(167, 20);
			this->dtpAnniversaire->TabIndex = 15;
			// 
			// gbxAdresse
			// 
			this->gbxAdresse->Controls->Add(this->lblResidence);
			this->gbxAdresse->Controls->Add(this->tbxResidence);
			this->gbxAdresse->Controls->Add(this->tbxEtage);
			this->gbxAdresse->Controls->Add(this->lblEtage);
			this->gbxAdresse->Controls->Add(this->tbxRue);
			this->gbxAdresse->Controls->Add(this->lblRue);
			this->gbxAdresse->Controls->Add(this->lblRueNum);
			this->gbxAdresse->Controls->Add(this->tbxRueNum);
			this->gbxAdresse->Controls->Add(this->lblCodePostal);
			this->gbxAdresse->Controls->Add(this->tbxCodePostal);
			this->gbxAdresse->Controls->Add(this->lblVille);
			this->gbxAdresse->Controls->Add(this->cbxVille);
			this->gbxAdresse->Controls->Add(this->lblRegion);
			this->gbxAdresse->Controls->Add(this->lblPays);
			this->gbxAdresse->Controls->Add(this->cbxRegion);
			this->gbxAdresse->Controls->Add(this->cbxPays);
			this->gbxAdresse->Location = System::Drawing::Point(295, 13);
			this->gbxAdresse->Name = L"gbxAdresse";
			this->gbxAdresse->Size = System::Drawing::Size(283, 153);
			this->gbxAdresse->TabIndex = 16;
			this->gbxAdresse->TabStop = false;
			this->gbxAdresse->Text = L"Adresse";
			// 
			// lblResidence
			// 
			this->lblResidence->AutoSize = true;
			this->lblResidence->Location = System::Drawing::Point(103, 128);
			this->lblResidence->Name = L"lblResidence";
			this->lblResidence->Size = System::Drawing::Size(58, 13);
			this->lblResidence->TabIndex = 15;
			this->lblResidence->Text = L"Résidence";
			// 
			// tbxResidence
			// 
			this->tbxResidence->Location = System::Drawing::Point(167, 125);
			this->tbxResidence->Name = L"tbxResidence";
			this->tbxResidence->Size = System::Drawing::Size(110, 20);
			this->tbxResidence->TabIndex = 14;
			// 
			// tbxEtage
			// 
			this->tbxEtage->Location = System::Drawing::Point(53, 125);
			this->tbxEtage->Name = L"tbxEtage";
			this->tbxEtage->Size = System::Drawing::Size(44, 20);
			this->tbxEtage->TabIndex = 13;
			// 
			// lblEtage
			// 
			this->lblEtage->AutoSize = true;
			this->lblEtage->Location = System::Drawing::Point(6, 128);
			this->lblEtage->Name = L"lblEtage";
			this->lblEtage->Size = System::Drawing::Size(35, 13);
			this->lblEtage->TabIndex = 12;
			this->lblEtage->Text = L"Etage";
			// 
			// tbxRue
			// 
			this->tbxRue->Location = System::Drawing::Point(136, 99);
			this->tbxRue->Name = L"tbxRue";
			this->tbxRue->Size = System::Drawing::Size(141, 20);
			this->tbxRue->TabIndex = 11;
			// 
			// lblRue
			// 
			this->lblRue->AutoSize = true;
			this->lblRue->Location = System::Drawing::Point(103, 102);
			this->lblRue->Name = L"lblRue";
			this->lblRue->Size = System::Drawing::Size(27, 13);
			this->lblRue->TabIndex = 10;
			this->lblRue->Text = L"Rue";
			// 
			// lblRueNum
			// 
			this->lblRueNum->AutoSize = true;
			this->lblRueNum->Location = System::Drawing::Point(6, 102);
			this->lblRueNum->Name = L"lblRueNum";
			this->lblRueNum->Size = System::Drawing::Size(42, 13);
			this->lblRueNum->TabIndex = 9;
			this->lblRueNum->Text = L"N° Rue";
			// 
			// tbxRueNum
			// 
			this->tbxRueNum->Location = System::Drawing::Point(53, 99);
			this->tbxRueNum->Name = L"tbxRueNum";
			this->tbxRueNum->Size = System::Drawing::Size(44, 20);
			this->tbxRueNum->TabIndex = 8;
			// 
			// lblCodePostal
			// 
			this->lblCodePostal->AutoSize = true;
			this->lblCodePostal->Location = System::Drawing::Point(192, 76);
			this->lblCodePostal->Name = L"lblCodePostal";
			this->lblCodePostal->Size = System::Drawing::Size(21, 13);
			this->lblCodePostal->TabIndex = 7;
			this->lblCodePostal->Text = L"CP";
			// 
			// tbxCodePostal
			// 
			this->tbxCodePostal->Location = System::Drawing::Point(219, 73);
			this->tbxCodePostal->Name = L"tbxCodePostal";
			this->tbxCodePostal->Size = System::Drawing::Size(58, 20);
			this->tbxCodePostal->TabIndex = 6;
			// 
			// lblVille
			// 
			this->lblVille->AutoSize = true;
			this->lblVille->Location = System::Drawing::Point(6, 76);
			this->lblVille->Name = L"lblVille";
			this->lblVille->Size = System::Drawing::Size(26, 13);
			this->lblVille->TabIndex = 5;
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
			this->cbxVille->TabIndex = 4;
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->Location = System::Drawing::Point(6, 49);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(41, 13);
			this->lblRegion->TabIndex = 3;
			this->lblRegion->Text = L"Region";
			// 
			// lblPays
			// 
			this->lblPays->AutoSize = true;
			this->lblPays->Location = System::Drawing::Point(6, 22);
			this->lblPays->Name = L"lblPays";
			this->lblPays->Size = System::Drawing::Size(30, 13);
			this->lblPays->TabIndex = 2;
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
			this->cbxRegion->TabIndex = 1;
			// 
			// cbxPays
			// 
			this->cbxPays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbxPays->FormattingEnabled = true;
			this->cbxPays->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Allemagne", L"Royaume-Uni" });
			this->cbxPays->Location = System::Drawing::Point(53, 19);
			this->cbxPays->Name = L"cbxPays";
			this->cbxPays->Size = System::Drawing::Size(224, 21);
			this->cbxPays->TabIndex = 0;
			// 
			// InputPersonnelInserer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 265);
			this->Controls->Add(this->gbxInputPersonnelInserer);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InputPersonnelInserer";
			this->Text = L"Insérer un employé";
			this->gbxInputPersonnelInserer->ResumeLayout(false);
			this->gbxInfos->ResumeLayout(false);
			this->gbxInfos->PerformLayout();
			this->gbxAdresse->ResumeLayout(false);
			this->gbxAdresse->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Mettre evenement de validation
		this->Close();
	}

	private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}
