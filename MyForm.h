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


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ boutonValider;
	private: GroupBox^ gbMain = gcnew GroupBox();
	private: DataGridView^ dgvMain = gcnew DataGridView();
	private: System::Windows::Forms::Button^ Afficher;
	private: System::Windows::Forms::Button^ Inserer;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Update;





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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->boutonValider = (gcnew System::Windows::Forms::Button());
			this->Afficher = (gcnew System::Windows::Forms::Button());
			this->Inserer = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Personnel", L"Clients", L"Commandes", L"Stock",
					L"Statistiques"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 15);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(205, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// boutonValider
			// 
			this->boutonValider->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->boutonValider->Location = System::Drawing::Point(15, 48);
			this->boutonValider->Margin = System::Windows::Forms::Padding(4);
			this->boutonValider->Name = L"boutonValider";
			this->boutonValider->Size = System::Drawing::Size(208, 28);
			this->boutonValider->TabIndex = 3;
			this->boutonValider->Text = L"Valider";
			this->boutonValider->UseVisualStyleBackColor = false;
			this->boutonValider->Click += gcnew System::EventHandler(this, &MyForm::boutonValider_Click);
			// 
			// Afficher
			// 
			this->Afficher->BackColor = System::Drawing::Color::Snow;
			this->Afficher->Location = System::Drawing::Point(15, 113);
			this->Afficher->Margin = System::Windows::Forms::Padding(4);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(208, 55);
			this->Afficher->TabIndex = 4;
			this->Afficher->Text = L"Afficher ";
			this->Afficher->UseVisualStyleBackColor = false;
			// 
			// Inserer
			// 
			this->Inserer->Location = System::Drawing::Point(16, 176);
			this->Inserer->Margin = System::Windows::Forms::Padding(4);
			this->Inserer->Name = L"Inserer";
			this->Inserer->Size = System::Drawing::Size(207, 55);
			this->Inserer->TabIndex = 5;
			this->Inserer->Text = L"Inserer ";
			this->Inserer->UseVisualStyleBackColor = true;
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(15, 239);
			this->Supprimer->Margin = System::Windows::Forms::Padding(4);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(208, 55);
			this->Supprimer->TabIndex = 6;
			this->Supprimer->Text = L"Supprimer ";
			this->Supprimer->UseVisualStyleBackColor = true;
			// 
			// Update
			// 
			this->Update->Location = System::Drawing::Point(16, 302);
			this->Update->Margin = System::Windows::Forms::Padding(4);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(207, 55);
			this->Update->TabIndex = 7;
			this->Update->Text = L"Update ";
			this->Update->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 757);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Inserer);
			this->Controls->Add(this->Afficher);
			this->Controls->Add(this->boutonValider);
			this->Controls->Add(this->comboBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void boutonValider_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (this->comboBox1->SelectedIndex == -1) return; 
		if (this->comboBox1->SelectedIndex == 0)
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
		gbMain->Text = this->comboBox1->GetItemText(this->comboBox1->SelectedItem);

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
		Afficher->Text = "Afficher " + this->comboBox1->GetItemText(this->comboBox1->SelectedItem);
		Supprimer->Text = "Supprimer " + this->comboBox1->GetItemText(this->comboBox1->SelectedItem);
		Update->Text = "Update " + this->comboBox1->GetItemText(this->comboBox1->SelectedItem);
		Inserer->Text = "Insérer " + this->comboBox1->GetItemText(this->comboBox1->SelectedItem);


		this->Controls->Add(gbMain);
		this->gbMain->Controls->Add(dgvMain);
		
	}

};
}
