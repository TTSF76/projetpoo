#pragma once
#include "Auth.h"

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


	private: GroupBox^ gbMain = gcnew GroupBox();
	private: DataGridView^ dgvMain = gcnew DataGridView();
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
			this->lstGestion = (gcnew System::Windows::Forms::ComboBox());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->btnAfficher = (gcnew System::Windows::Forms::Button());
			this->btnInserer = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lstGestion
			// 
			this->lstGestion->FormattingEnabled = true;
			this->lstGestion->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Personnel", L"Clients", L"Commandes", L"Stock",
					L"Statistiques"
			});
			this->lstGestion->Location = System::Drawing::Point(12, 12);
			this->lstGestion->Name = L"lstGestion";
			this->lstGestion->Size = System::Drawing::Size(155, 21);
			this->lstGestion->TabIndex = 2;
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(11, 39);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(156, 23);
			this->btnValider->TabIndex = 3;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &MyForm::btnValider_Click);
			// 
			// Afficher
			// 
			this->btnAfficher->Location = System::Drawing::Point(11, 92);
			this->btnAfficher->Name = L"btnAfficher";
			this->btnAfficher->Size = System::Drawing::Size(156, 45);
			this->btnAfficher->TabIndex = 4;
			this->btnAfficher->Text = L"btnAfficher ";
			this->btnAfficher->UseVisualStyleBackColor = true;
			// 
			// Insérer
			// 
			this->btnInserer->Location = System::Drawing::Point(12, 143);
			this->btnInserer->Name = L"btnInserer";
			this->btnInserer->Size = System::Drawing::Size(155, 45);
			this->btnInserer->TabIndex = 5;
			this->btnInserer->Text = L"btnInserer ";
			this->btnInserer->UseVisualStyleBackColor = true;
			// 
			// Supprimer
			// 
			this->btnSupprimer->Location = System::Drawing::Point(11, 194);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(156, 45);
			this->btnSupprimer->TabIndex = 6;
			this->btnSupprimer->Text = L"btnSupprimer ";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			// 
			// Update
			// 
			this->btnUpdate->Location = System::Drawing::Point(12, 245);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(155, 45);
			this->btnUpdate->TabIndex = 7;
			this->btnUpdate->Text = L"btnUpdate ";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1443, 615);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->btnAfficher);
			this->Controls->Add(this->btnInserer);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->lstGestion);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (this->lstGestion->SelectedIndex == -1) return; 
		if (this->lstGestion->SelectedIndex == 0)
		{
			/*projectView::Auth bob;
			bob.ShowDialog();
			this->Show();*/

			//MessageBox^ result = gcnew MessageBox();
			//result = result->Show("bob?", "bob", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			//if (result == DialogResultNo)
			//{
			//	// cancel the closure of the form.
			//	e::Cancel = true;
			//}

		}

		// GroupBox
		gbMain->Location = System::Drawing::Point(180, 10);
		gbMain->Size = System::Drawing::Size(1000, 300);
		gbMain->Name = L"gbMain";
		gbMain->Text = this->lstGestion->GetItemText(this->lstGestion->SelectedItem);

		// DataGridView
		dgvMain->Location = System::Drawing::Point(10, 20);
		dgvMain->Size = System::Drawing::Size(980, 270);
		dgvMain->Name = L"dgvMain";
        dgvMain->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
        dgvMain->ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle::Single;
        dgvMain->CellBorderStyle = DataGridViewCellBorderStyle::Single;
        dgvMain->GridColor = Color::Black;
        dgvMain->RowHeadersVisible = false;

		// Buttons
		btnAfficher->Text = "Afficher " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);
		btnInserer->Text = "Insérer " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);
		btnSupprimer->Text = "Supprimer " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);
		btnUpdate->Text = "Update " + this->lstGestion->GetItemText(this->lstGestion->SelectedItem);


		this->Controls->Add(gbMain);
		this->gbMain->Controls->Add(dgvMain);
		
	}

};
}
