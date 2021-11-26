#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(int operation, String^ donnee)
		{
			
			switch (operation)
			{

				// Insérer
				case 1:
				{
					InitializeComponent("Insérer un nouveau client");

					gbxInputMain->Name = L"gbxClientInfo";
					gbxInputMain->Location = Point(10, 10);
					gbxInputMain->AutoSize = true;
					gbxInputMain->Text = L"Informations Personnelles";

					tbxNom->Name = L"tbxNom";
					tbxNom->Location = System::Drawing::Point(10, 20);
					tbxNom->Size = System::Drawing::Size(100, 21);
					tbxNom->Text = L"Entrer nom";

					tbxPrenom->Name = L"tbxPrenom";
					tbxPrenom->Location = System::Drawing::Point(120, 20);
					tbxPrenom->Size = System::Drawing::Size(100, 21);
					tbxPrenom->Text = L"Entrer prénom";

					tbxAnniversaire->Name = L"tbxAnniversaire";
					tbxAnniversaire->Location = System::Drawing::Point(230, 20);
					tbxAnniversaire->Size = System::Drawing::Size(200, 21);

					this->Controls->Add(gbxInputMain);
					this->gbxInputMain->Controls->Add(tbxNom);
					this->gbxInputMain->Controls->Add(tbxPrenom);
					this->gbxInputMain->Controls->Add(tbxAnniversaire);

				}

				// Supprimer
				case 2:
				{

				}

				// Mettre à jour
				case 3:
				{

				}

				// Opération invalide
				default:
				{

				}
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		Button^ InputValider;
		Button^ InputAnnuler;

		GroupBox^ gbxInputMain;
		TextBox^ tbxNom;
		TextBox^ tbxPrenom;
		DateTimePicker^ tbxAnniversaire;

		GroupBox^ gbxInputAdresse;

		GroupBox^ gbxAdrLiv;
		ComboBox^ tbxAdrLivPays;
		ComboBox^ tbxAdrLivRegion;
		ComboBox^ tbxAdrLivVille;
		TextBox^ tbxAdrLivCodePostal;
		TextBox^ tbxAdrLivRue;
		TextBox^ tbxAdrLivRueNum;
		TextBox^ tbxAdrLivNomRes;
		TextBox^ tbxAdrLivEtage;

		GroupBox^ gbxAdrFac;
		ComboBox^ tbxAdrFacPays;
		ComboBox^ tbxAdrFacRegion;
		ComboBox^ tbxAdrFacVille;
		TextBox^ tbxAdrFacCodePostal;
		TextBox^ tbxAdrFacRue;
		TextBox^ tbxAdrFacRueNum;
		TextBox^ tbxAdrFacNomRes;
		TextBox^ tbxAdrFacEtage;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(String^ formName)
		{
			this->InputValider = (gcnew System::Windows::Forms::Button());
			this->InputAnnuler = (gcnew System::Windows::Forms::Button());

			this->gbxInputMain = (gcnew System::Windows::Forms::GroupBox());
			this->tbxNom = (gcnew System::Windows::Forms::TextBox());
			this->tbxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbxAnniversaire = (gcnew System::Windows::Forms::DateTimePicker());

			this->gbxInputAdresse = (gcnew System::Windows::Forms::GroupBox());

			this->gbxAdrLiv = (gcnew System::Windows::Forms::GroupBox());
			this->tbxAdrLivPays = (gcnew System::Windows::Forms::ComboBox());
			this->tbxAdrLivRegion = (gcnew System::Windows::Forms::ComboBox());
			this->tbxAdrLivVille = (gcnew System::Windows::Forms::ComboBox());
			this->tbxAdrLivCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrLivRue = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrLivRueNum = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrLivNomRes = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrLivEtage = (gcnew System::Windows::Forms::TextBox());

			this->gbxAdrFac = (gcnew System::Windows::Forms::GroupBox());
			this->tbxAdrFacPays = (gcnew System::Windows::Forms::ComboBox());
			this->tbxAdrFacRegion = (gcnew System::Windows::Forms::ComboBox());
			this->tbxAdrFacVille = (gcnew System::Windows::Forms::ComboBox());
			this->tbxAdrFacCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrFacRue = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrFacRueNum = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrFacNomRes = (gcnew System::Windows::Forms::TextBox());
			this->tbxAdrFacEtage = (gcnew System::Windows::Forms::TextBox());

			this->SuspendLayout();
			// 
			// InputValider
			// 
			this->InputValider->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->InputValider->Location = System::Drawing::Point(603, 27);
			this->InputValider->Name = L"InputValider";
			this->InputValider->Size = System::Drawing::Size(75, 24);
			this->InputValider->TabIndex = 0;
			this->InputValider->Text = L"Valider";
			this->InputValider->UseVisualStyleBackColor = true;
			// 
			// InputAnnuler
			// 
			this->InputAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->InputAnnuler->Location = System::Drawing::Point(603, 58);
			this->InputAnnuler->Name = L"InputAnnuler";
			this->InputAnnuler->Size = System::Drawing::Size(75, 23);
			this->InputAnnuler->TabIndex = 1;
			this->InputAnnuler->Text = L"Annuler";
			this->InputAnnuler->UseVisualStyleBackColor = true;
			// 
			// tbxNom
			// 
			this->tbxNom->Location = System::Drawing::Point(0, 0);
			this->tbxNom->Name = L"tbxNom";
			this->tbxNom->Size = System::Drawing::Size(100, 20);
			this->tbxNom->TabIndex = 0;
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 104);
			this->Controls->Add(this->InputAnnuler);
			this->Controls->Add(this->InputValider);
			this->Name = L"Input";
			this->Text = formName;
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
