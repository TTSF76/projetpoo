#pragma once
#include "Auth.h"
#include "Inputs.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: GroupBox^ gbxMain = gcnew GroupBox();
	private: DataGridView^ dgvMain = gcnew DataGridView();
	private: System::Windows::Forms::GroupBox^ gbxOperations;
	private: System::Windows::Forms::ComboBox^ lstGestion;
	private: System::Windows::Forms::Button^ btnValider;
	private: System::Windows::Forms::Button^ btnAfficher;
	private: System::Windows::Forms::Button^ btnInserer;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnUpdate;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbxOperations = (gcnew System::Windows::Forms::GroupBox());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->lstGestion = (gcnew System::Windows::Forms::ComboBox());
			this->btnAfficher = (gcnew System::Windows::Forms::Button());
			this->btnInserer = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->gbxOperations->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbxOperations
			// 
			this->gbxOperations->AutoSize = true;
			this->gbxOperations->Controls->Add(this->btnValider);
			this->gbxOperations->Controls->Add(this->lstGestion);
			this->gbxOperations->Location = System::Drawing::Point(10, 10);
			this->gbxOperations->Name = L"gbxOperations";
			this->gbxOperations->Size = System::Drawing::Size(200, 400);
			this->gbxOperations->TabIndex = 0;
			this->gbxOperations->TabStop = false;
			this->gbxOperations->Text = L"Opérations";
			// 
			// btnValider
			// 
			this->btnValider->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnValider->Location = System::Drawing::Point(12, 47);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(174, 25);
			this->btnValider->TabIndex = 3;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &MyForm::btnValider_Click);
			// 
			// lstGestion
			// 
			this->lstGestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lstGestion->FormattingEnabled = true;
			this->lstGestion->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Personnel", L"Clients", L"Commandes", L"Stock",
					L"Statistiques"
			});
			this->lstGestion->Location = System::Drawing::Point(12, 19);
			this->lstGestion->Name = L"lstGestion";
			this->lstGestion->Size = System::Drawing::Size(174, 21);
			this->lstGestion->TabIndex = 2;
			// 
			// btnAfficher
			// 
			this->btnAfficher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAfficher->Location = System::Drawing::Point(12, 106);
			this->btnAfficher->Name = L"btnAfficher";
			this->btnAfficher->Size = System::Drawing::Size(174, 50);
			this->btnAfficher->TabIndex = 4;
			this->btnAfficher->Text = L"Afficher ";
			this->btnAfficher->UseVisualStyleBackColor = true;
			// 
			// btnInserer
			// 
			this->btnInserer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnInserer->Location = System::Drawing::Point(12, 162);
			this->btnInserer->Name = L"btnInserer";
			this->btnInserer->Size = System::Drawing::Size(174, 50);
			this->btnInserer->TabIndex = 5;
			this->btnInserer->Text = L"Inserer ";
			this->btnInserer->UseVisualStyleBackColor = true;
			this->btnInserer->Click += gcnew System::EventHandler(this, &MyForm::btnInserer_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSupprimer->Location = System::Drawing::Point(12, 274);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(174, 50);
			this->btnSupprimer->TabIndex = 6;
			this->btnSupprimer->Text = L"Supprimer ";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &MyForm::btnSupprimer_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnUpdate->Location = System::Drawing::Point(12, 218);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(174, 50);
			this->btnUpdate->TabIndex = 7;
			this->btnUpdate->Text = L"Update ";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm::btnUpdate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 419);
			this->Controls->Add(this->gbxOperations);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->gbxOperations->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (this->lstGestion->SelectedIndex == -1) return;
		if (this->lstGestion->SelectedIndex == 0)
		{
			projectView::Auth fenetreAuth;
			fenetreAuth.ShowDialog();
		}

		this->gbxOperations->Controls->Add(this->btnAfficher);
		this->gbxOperations->Controls->Add(this->btnInserer);
		this->gbxOperations->Controls->Add(this->btnSupprimer);
		this->gbxOperations->Controls->Add(this->btnUpdate);

		

		// GroupBox Main
		gbxMain->Name = L"gbxMain";
		gbxMain->Location = System::Drawing::Point(220, 10);
		gbxMain->Size = System::Drawing::Size(750, 400);
		gbxMain->Text = this->lstGestion->GetItemText(this->lstGestion->SelectedItem);

		// DataGridView
		dgvMain->Name = L"dgvMain";
		dgvMain->Location = System::Drawing::Point(10, 20);
		dgvMain->Size = System::Drawing::Size(730, 370);
        dgvMain->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
        dgvMain->ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle::Single;
        dgvMain->CellBorderStyle = DataGridViewCellBorderStyle::Single;
        dgvMain->GridColor = Color::Black;
        dgvMain->RowHeadersVisible = false;

		// Boutons
		btnAfficher->Text = "Afficher " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);
		btnInserer->Text = "Insérer " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);
		btnSupprimer->Text = "Supprimer " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);
		btnUpdate->Text = "Update " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);

		this->Controls->Add(gbxMain);
		this->gbxMain->Controls->Add(dgvMain);
		
	}

	private: System::Void btnInserer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		projectView::InputClientInserer inputForm;
		inputForm.ShowDialog();
	}
	
	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		projectView::InputClientSupprimer inputForm;
		inputForm.ShowDialog();
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		projectView::InputClientUpdate inputForm;
		inputForm.ShowDialog();
	}
};
}
