#pragma once

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InputPersonnelSupprimer
	/// </summary>
	public ref class InputPersonnelSupprimer : public System::Windows::Forms::Form
	{
	public:
		InputPersonnelSupprimer(void)
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
		~InputPersonnelSupprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAnnuler;
	protected:
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Label^ lblPersonnel;
	private: System::Windows::Forms::ComboBox^ cbxPersonel;

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
			this->lblPersonnel = (gcnew System::Windows::Forms::Label());
			this->cbxPersonel = (gcnew System::Windows::Forms::ComboBox());
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
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &InputPersonnelSupprimer::btnAnnuler_Click);
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(13, 32);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(131, 29);
			this->btnValider->TabIndex = 28;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &InputPersonnelSupprimer::btnValider_Click);
			// 
			// lblPersonnel
			// 
			this->lblPersonnel->AutoSize = true;
			this->lblPersonnel->Location = System::Drawing::Point(11, 9);
			this->lblPersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPersonnel->Name = L"lblPersonnel";
			this->lblPersonnel->Size = System::Drawing::Size(111, 13);
			this->lblPersonnel->TabIndex = 27;
			this->lblPersonnel->Text = L"Personnel à supprimer";
			// 
			// cbxPersonel
			// 
			this->cbxPersonel->FormattingEnabled = true;
			this->cbxPersonel->Location = System::Drawing::Point(129, 7);
			this->cbxPersonel->Margin = System::Windows::Forms::Padding(2);
			this->cbxPersonel->Name = L"cbxPersonel";
			this->cbxPersonel->Size = System::Drawing::Size(152, 21);
			this->cbxPersonel->TabIndex = 26;
			// 
			// InputPersonnelSupprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 67);
			this->Controls->Add(this->btnAnnuler);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->lblPersonnel);
			this->Controls->Add(this->cbxPersonel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InputPersonnelSupprimer";
			this->Text = L"Supprimer un personnel";
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
