#pragma once
#include "UIAction.h"
#include "UIManager.h"
#include "Inputs.h"
#include "CLconnect.h"
#include "CLserviceclient.h"
#include "CLserviceStats.h"
#include "CLservicearticle.h"

namespace projectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
		}

	protected: ~MyForm1() { if (components) { delete components; }}

	public:
		System::Windows::Forms::Panel^ panel_menu_left;
		System::Windows::Forms::Button^ bouton_client;
		System::Windows::Forms::Button^ bouton_commande;
		System::Windows::Forms::Button^ bouton_stock;
		System::Windows::Forms::Button^ bouton_personnel;
		System::Windows::Forms::Button^ bouton_stats;
		System::Windows::Forms::Panel^ panel_header;
		static System::String^ clientId;
		static System::String^ articleId;

	private:
		System::Windows::Forms::Panel^ panel_logo;
		System::Windows::Forms::Label^ lblDeliveryManager;
		System::Windows::Forms::Button^ bouton_select;
		System::Windows::Forms::Button^ bouton_create;
		System::Windows::Forms::Button^ bouton_update;
		System::Windows::Forms::Button^ bouton_delete;
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private:

		System::Windows::Forms::Label^ label_bienvenue;
		System::Windows::Forms::PictureBox^ logo_welcome;
		System::Windows::Forms::Label^ titre_rubrique;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::Button^ button8;
		System::Windows::Forms::Button^ button9;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;





		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel_menu_left = (gcnew System::Windows::Forms::Panel());
			this->bouton_stats = (gcnew System::Windows::Forms::Button());
			this->bouton_commande = (gcnew System::Windows::Forms::Button());
			this->bouton_stock = (gcnew System::Windows::Forms::Button());
			this->bouton_personnel = (gcnew System::Windows::Forms::Button());
			this->bouton_client = (gcnew System::Windows::Forms::Button());
			this->panel_logo = (gcnew System::Windows::Forms::Panel());
			this->lblDeliveryManager = (gcnew System::Windows::Forms::Label());
			this->bouton_select = (gcnew System::Windows::Forms::Button());
			this->bouton_create = (gcnew System::Windows::Forms::Button());
			this->bouton_update = (gcnew System::Windows::Forms::Button());
			this->bouton_delete = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel_header = (gcnew System::Windows::Forms::Panel());
			this->titre_rubrique = (gcnew System::Windows::Forms::Label());
			this->label_bienvenue = (gcnew System::Windows::Forms::Label());
			this->logo_welcome = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel_menu_left->SuspendLayout();
			this->panel_logo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_welcome))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_menu_left
			// 
			this->panel_menu_left->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panel_menu_left->Controls->Add(this->bouton_stats);
			this->panel_menu_left->Controls->Add(this->bouton_commande);
			this->panel_menu_left->Controls->Add(this->bouton_stock);
			this->panel_menu_left->Controls->Add(this->bouton_personnel);
			this->panel_menu_left->Controls->Add(this->bouton_client);
			this->panel_menu_left->Controls->Add(this->panel_logo);
			this->panel_menu_left->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_menu_left->Location = System::Drawing::Point(0, 0);
			this->panel_menu_left->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_menu_left->Name = L"panel_menu_left";
			this->panel_menu_left->Size = System::Drawing::Size(200, 598);
			this->panel_menu_left->TabIndex = 0;
			// 
			// bouton_stats
			// 
			this->bouton_stats->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_stats->FlatAppearance->BorderSize = 0;
			this->bouton_stats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_stats->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->bouton_stats->ForeColor = System::Drawing::Color::Snow;
			this->bouton_stats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_stats.Image")));
			this->bouton_stats->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stats->Location = System::Drawing::Point(0, 436);
			this->bouton_stats->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_stats->Name = L"bouton_stats";
			this->bouton_stats->Size = System::Drawing::Size(200, 84);
			this->bouton_stats->TabIndex = 5;
			this->bouton_stats->Text = L"                Gestion \r\n             Statistiques";
			this->bouton_stats->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stats->UseVisualStyleBackColor = true;
			this->bouton_stats->Click += gcnew System::EventHandler(this, &MyForm1::bouton_stats_Click);
			// 
			// bouton_commande
			// 
			this->bouton_commande->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_commande->FlatAppearance->BorderSize = 0;
			this->bouton_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_commande->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->bouton_commande->ForeColor = System::Drawing::Color::Snow;
			this->bouton_commande->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_commande.Image")));
			this->bouton_commande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_commande->Location = System::Drawing::Point(0, 352);
			this->bouton_commande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_commande->Name = L"bouton_commande";
			this->bouton_commande->Size = System::Drawing::Size(200, 84);
			this->bouton_commande->TabIndex = 4;
			this->bouton_commande->Text = L"                 Gestion \r\n             Commandes";
			this->bouton_commande->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_commande->UseVisualStyleBackColor = true;
			this->bouton_commande->Click += gcnew System::EventHandler(this, &MyForm1::bouton_commande_Click);
			// 
			// bouton_stock
			// 
			this->bouton_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_stock->FlatAppearance->BorderSize = 0;
			this->bouton_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_stock->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->bouton_stock->ForeColor = System::Drawing::Color::Snow;
			this->bouton_stock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_stock.Image")));
			this->bouton_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_stock->Location = System::Drawing::Point(0, 268);
			this->bouton_stock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_stock->Name = L"bouton_stock";
			this->bouton_stock->Size = System::Drawing::Size(200, 84);
			this->bouton_stock->TabIndex = 3;
			this->bouton_stock->Text = L"Gestion\r\nStock";
			this->bouton_stock->UseVisualStyleBackColor = true;
			this->bouton_stock->Click += gcnew System::EventHandler(this, &MyForm1::bouton_stock_Click);
			// 
			// bouton_personnel
			// 
			this->bouton_personnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_personnel->FlatAppearance->BorderSize = 0;
			this->bouton_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_personnel->ForeColor = System::Drawing::Color::Snow;
			this->bouton_personnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_personnel.Image")));
			this->bouton_personnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_personnel->Location = System::Drawing::Point(0, 184);
			this->bouton_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_personnel->Name = L"bouton_personnel";
			this->bouton_personnel->Size = System::Drawing::Size(200, 84);
			this->bouton_personnel->TabIndex = 2;
			this->bouton_personnel->Text = L"  Gestion \r\n Personnel";
			this->bouton_personnel->UseVisualStyleBackColor = true;
			this->bouton_personnel->Click += gcnew System::EventHandler(this, &MyForm1::bouton_personnel_Click);
			// 
			// bouton_client
			// 
			this->bouton_client->Dock = System::Windows::Forms::DockStyle::Top;
			this->bouton_client->FlatAppearance->BorderSize = 0;
			this->bouton_client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_client->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_client->ForeColor = System::Drawing::Color::Snow;
			this->bouton_client->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_client.Image")));
			this->bouton_client->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_client->Location = System::Drawing::Point(0, 100);
			this->bouton_client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_client->Name = L"bouton_client";
			this->bouton_client->Size = System::Drawing::Size(200, 84);
			this->bouton_client->TabIndex = 1;
			this->bouton_client->Text = L" Gestion \r\n Clients";
			this->bouton_client->UseVisualStyleBackColor = true;
			this->bouton_client->Click += gcnew System::EventHandler(this, &MyForm1::bouton_client_Click);
			// 
			// panel_logo
			// 
			this->panel_logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel_logo->Controls->Add(this->lblDeliveryManager);
			this->panel_logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_logo->Location = System::Drawing::Point(0, 0);
			this->panel_logo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_logo->Name = L"panel_logo";
			this->panel_logo->Size = System::Drawing::Size(200, 100);
			this->panel_logo->TabIndex = 0;
			// 
			// lblDeliveryManager
			// 
			this->lblDeliveryManager->AutoSize = true;
			this->lblDeliveryManager->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDeliveryManager->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblDeliveryManager->Location = System::Drawing::Point(40, 28);
			this->lblDeliveryManager->Name = L"lblDeliveryManager";
			this->lblDeliveryManager->Size = System::Drawing::Size(112, 40);
			this->lblDeliveryManager->TabIndex = 0;
			this->lblDeliveryManager->Text = L"DELIVERY \r\nMANAGER";
			// 
			// bouton_select
			// 
			this->bouton_select->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bouton_select->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->bouton_select->FlatAppearance->BorderSize = 2;
			this->bouton_select->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_select->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_select->ForeColor = System::Drawing::Color::White;
			this->bouton_select->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_select.Image")));
			this->bouton_select->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bouton_select->Location = System::Drawing::Point(221, 519);
			this->bouton_select->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_select->Name = L"bouton_select";
			this->bouton_select->Size = System::Drawing::Size(159, 49);
			this->bouton_select->TabIndex = 1;
			this->bouton_select->Text = L"Afficher";
			this->bouton_select->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_select->UseVisualStyleBackColor = false;
			this->bouton_select->Visible = false;
			this->bouton_select->Click += gcnew System::EventHandler(this, &MyForm1::bouton_select_Click);
			// 
			// bouton_create
			// 
			this->bouton_create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->bouton_create->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->bouton_create->FlatAppearance->BorderSize = 2;
			this->bouton_create->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_create->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_create->ForeColor = System::Drawing::Color::White;
			this->bouton_create->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_create.Image")));
			this->bouton_create->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bouton_create->Location = System::Drawing::Point(387, 519);
			this->bouton_create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_create->Name = L"bouton_create";
			this->bouton_create->Size = System::Drawing::Size(159, 49);
			this->bouton_create->TabIndex = 2;
			this->bouton_create->Text = L"Créer";
			this->bouton_create->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_create->UseVisualStyleBackColor = false;
			this->bouton_create->Visible = false;
			this->bouton_create->Click += gcnew System::EventHandler(this, &MyForm1::bouton_create_Click);
			// 
			// bouton_update
			// 
			this->bouton_update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bouton_update->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->bouton_update->FlatAppearance->BorderSize = 2;
			this->bouton_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_update->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_update->ForeColor = System::Drawing::Color::White;
			this->bouton_update->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_update.Image")));
			this->bouton_update->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bouton_update->Location = System::Drawing::Point(717, 519);
			this->bouton_update->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_update->Name = L"bouton_update";
			this->bouton_update->Size = System::Drawing::Size(159, 49);
			this->bouton_update->TabIndex = 3;
			this->bouton_update->Text = L"Mettre à jour";
			this->bouton_update->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_update->UseVisualStyleBackColor = false;
			this->bouton_update->Visible = false;
			this->bouton_update->Click += gcnew System::EventHandler(this, &MyForm1::bouton_update_Click);
			// 
			// bouton_delete
			// 
			this->bouton_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->bouton_delete->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->bouton_delete->FlatAppearance->BorderSize = 2;
			this->bouton_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bouton_delete->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_delete->ForeColor = System::Drawing::Color::White;
			this->bouton_delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bouton_delete.Image")));
			this->bouton_delete->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bouton_delete->Location = System::Drawing::Point(552, 519);
			this->bouton_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bouton_delete->Name = L"bouton_delete";
			this->bouton_delete->Size = System::Drawing::Size(159, 49);
			this->bouton_delete->TabIndex = 4;
			this->bouton_delete->Text = L" Supprimer";
			this->bouton_delete->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bouton_delete->UseVisualStyleBackColor = false;
			this->bouton_delete->Visible = false;
			this->bouton_delete->Click += gcnew System::EventHandler(this, &MyForm1::bouton_delete_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(231, 118);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(629, 375);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->Visible = false;
			// 
			// panel_header
			// 
			this->panel_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panel_header->Controls->Add(this->titre_rubrique);
			this->panel_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_header->Location = System::Drawing::Point(200, 0);
			this->panel_header->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_header->Name = L"panel_header";
			this->panel_header->Size = System::Drawing::Size(701, 100);
			this->panel_header->TabIndex = 6;
			// 
			// titre_rubrique
			// 
			this->titre_rubrique->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->titre_rubrique->AutoSize = true;
			this->titre_rubrique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->titre_rubrique->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titre_rubrique->ForeColor = System::Drawing::Color::White;
			this->titre_rubrique->Location = System::Drawing::Point(99, 28);
			this->titre_rubrique->MinimumSize = System::Drawing::Size(500, 0);
			this->titre_rubrique->Name = L"titre_rubrique";
			this->titre_rubrique->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->titre_rubrique->Size = System::Drawing::Size(500, 50);
			this->titre_rubrique->TabIndex = 0;
			this->titre_rubrique->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titre_rubrique->Visible = false;
			// 
			// label_bienvenue
			// 
			this->label_bienvenue->AutoSize = true;
			this->label_bienvenue->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_bienvenue->ForeColor = System::Drawing::Color::White;
			this->label_bienvenue->Location = System::Drawing::Point(261, 149);
			this->label_bienvenue->Name = L"label_bienvenue";
			this->label_bienvenue->Size = System::Drawing::Size(566, 128);
			this->label_bienvenue->TabIndex = 7;
			this->label_bienvenue->Text = L"Bienvenue sur\r\nDELIVERY MANAGER !";
			this->label_bienvenue->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// logo_welcome
			// 
			this->logo_welcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->logo_welcome->ImageLocation = L"https://i.imgur.com/8U0xiHQ.png";
			this->logo_welcome->Location = System::Drawing::Point(467, 321);
			this->logo_welcome->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logo_welcome->Name = L"logo_welcome";
			this->logo_welcome->Size = System::Drawing::Size(256, 172);
			this->logo_welcome->TabIndex = 8;
			this->logo_welcome->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(593, 203);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(293, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Panier Moyen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(593, 246);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(293, 38);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Chiffre d\'Affaire sur un mois";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(593, 289);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(293, 38);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Produits sous seuil de restockage";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(593, 332);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(293, 38);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Montant Total d\'un Client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(593, 375);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(293, 38);
			this->button5->TabIndex = 13;
			this->button5->Text = L"10 + Vendus";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(593, 418);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(293, 38);
			this->button6->TabIndex = 14;
			this->button6->Text = L"10 - Vendus";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(593, 462);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(293, 38);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Valeur Commerciale du Stock";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(593, 505);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(293, 38);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Valeur d\'Achat du Stock";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(593, 548);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(293, 38);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Valeur Commerciale (variations)";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(205, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 19);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Réponse";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(221, 475);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 22);
			this->textBox1->TabIndex = 19;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(221, 503);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 22);
			this->textBox2->TabIndex = 20;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(221, 532);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(185, 22);
			this->textBox3->TabIndex = 21;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(221, 560);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(185, 22);
			this->textBox4->TabIndex = 22;
			this->textBox4->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(415, 478);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(415, 508);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(415, 537);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(415, 563);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 26;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(901, 598);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel_header);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->bouton_delete);
			this->Controls->Add(this->bouton_update);
			this->Controls->Add(this->bouton_create);
			this->Controls->Add(this->bouton_select);
			this->Controls->Add(this->panel_menu_left);
			this->Controls->Add(this->label_bienvenue);
			this->Controls->Add(this->logo_welcome);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delivery Manager";
			this->panel_menu_left->ResumeLayout(false);
			this->panel_logo->ResumeLayout(false);
			this->panel_logo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_header->ResumeLayout(false);
			this->panel_header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_welcome))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clearLabels() {
		this->label1->Text = "";
		this->label3->Text = "";
		this->label4->Text = "";
		this->label5->Text = "";
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->calculerPanierMoyen();
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Panier Moyen ") + "€";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		if (this->textBox1->Text == "" || this->textBox2->Text == "") {
			this->label2->Text = "Rentrez des données dans les inputs 1 et/ou 2";
			this->label1->Text = "Rentrez une année ici";
			this->label3->Text = "Rentrez un mois ici";
			return;
		}
		this->clearLabels();
		System::Data::DataSet^ tmpD = oStatsSvc->calculerChiffreDaffaire(System::Int32::Parse(this->textBox1->Text), System::Int32::Parse(this->textBox2->Text));
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Chiffre d'Affaire ") + "€";

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->identifierProduitSeuil();
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Restocker ");
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		if (this->textBox1->Text == "") {
			this->label2->Text = "Rentrez des données dans l\'inputs 1";
			this->label1->Text = "Rentrer un id de client";
			return;
		}
		this->clearLabels();
		this->label1->Text = "";
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->calculerMontantTotalAchats(System::Int32::Parse(this->textBox1->Text));
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Montant Total ") + "€";
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->identifierPlusVendus();
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Plus Vendus ");
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->identifierMoinsVendus();
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Moins Vendus ");
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->calculerValeurCommerciale();
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Valeur Commerciale du Stock ") + "€";
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->calculerValeurDachat();
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Valeur d'Achat du Stock ") + "€";
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->clearLabels();
		if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "") {
			this->label2->Text = "Rentrez des données dans les inputs 1 et/ou 2 et/ou 3 et/ou 4";
			this->label1->Text = "Rentrez ici la TVA (1,2 ou 3)";
			this->label3->Text = "Rentrez ici la marge";
			this->label4->Text = "Rentrez ici la remise";
			this->label5->Text = "Rentrez ici la démarque";
			return;
		}
		this->clearLabels();
		NS_stats_svc::CLserviceStats^ oStatsSvc = gcnew NS_stats_svc::CLserviceStats();
		System::Data::DataSet^ tmpD = oStatsSvc->calculerVariationCommerciale(System::Int32::Parse(this->textBox1->Text), System::Int32::Parse(this->textBox2->Text), System::Int32::Parse(this->textBox3->Text), System::Int32::Parse(this->textBox4->Text));
		label2->Text = oStatsSvc->convertToLabel(tmpD, "Valeur Commerciale du Stock (var) ") + "€";
	}

	private: System::Void bouton_client_Click(System::Object^ sender, System::EventArgs^ e) {
		if (titre_rubrique->Text == "CLIENTS") return;
		this->clearLabels();
		UIManager::cacherStats(this->label2, this->button1, this->button2, this->button3, this->button4, this->button5, this->button6, this->button7, this->button8, this->button9, this->textBox1, this->textBox2, this->textBox3, this->textBox4);
		this->dataGridView1->DataSource = nullptr;
		this->dataGridView1->Rows->Clear();
		UIManager::modifierCouleur(this->panel_menu_left, this->panel_header, this->bouton_client, this->bouton_commande, this->bouton_stock, this->bouton_personnel, this->bouton_stats, 1,this);
		UIManager::afficherElementRubrique(this->dataGridView1, this->bouton_select, this->bouton_create, this->bouton_delete, this->bouton_update, this->label_bienvenue, this->logo_welcome, this->titre_rubrique, 1);
	}

	private: System::Void bouton_personnel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (titre_rubrique->Text == "PERSONNEL") return;
		projectView::Auth fenetreAuth;
		fenetreAuth.ShowDialog();
		this->clearLabels();
		UIManager::cacherStats(this->label2, this->button1, this->button2, this->button3, this->button4, this->button5, this->button6, this->button7, this->button8, this->button9, this->textBox1, this->textBox2, this->textBox3, this->textBox4);
		this->dataGridView1->DataSource = nullptr;
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Refresh();
		UIManager::modifierCouleur(this->panel_menu_left, this->panel_header, this->bouton_client, this->bouton_commande, this->bouton_stock, this->bouton_personnel, this->bouton_stats, 3, this);
		UIManager::afficherElementRubrique(this->dataGridView1, this->bouton_select, this->bouton_create, this->bouton_delete, this->bouton_update, this->label_bienvenue, this->logo_welcome, this->titre_rubrique, 3);
	}
	
	private: System::Void bouton_stock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (titre_rubrique->Text == "STOCK") return;
		this->clearLabels();
		UIManager::cacherStats(this->label2, this->button1, this->button2, this->button3, this->button4, this->button5, this->button6, this->button7, this->button8, this->button9, this->textBox1, this->textBox2, this->textBox3, this->textBox4);
		this->dataGridView1->DataSource = nullptr;
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Refresh();
		UIManager::modifierCouleur(this->panel_menu_left, this->panel_header, this->bouton_client, this->bouton_commande, this->bouton_stock, this->bouton_personnel, this->bouton_stats, 2, this);
		UIManager::afficherElementRubrique(this->dataGridView1, this->bouton_select, this->bouton_create, this->bouton_delete, this->bouton_update, this->label_bienvenue, this->logo_welcome, this->titre_rubrique, 2);
	}

	private: System::Void bouton_commande_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (titre_rubrique->Text == "COMMANDE") return;
		this->clearLabels();
		UIManager::cacherStats(this->label2, this->button1, this->button2, this->button3, this->button4, this->button5, this->button6, this->button7, this->button8, this->button9, this->textBox1, this->textBox2, this->textBox3, this->textBox4);
		this->dataGridView1->DataSource = nullptr;
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Refresh();
		UIManager::modifierCouleur(this->panel_menu_left, this->panel_header, this->bouton_client, this->bouton_commande, this->bouton_stock, this->bouton_personnel, this->bouton_stats, 4, this);
		UIManager::afficherElementRubrique(this->dataGridView1, this->bouton_select, this->bouton_create, this->bouton_delete, this->bouton_update, this->label_bienvenue, this->logo_welcome, this->titre_rubrique, 4);
	}

	private: System::Void bouton_stats_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (titre_rubrique->Text == "STATISTIQUES") return;
		this->titre_rubrique->Visible = true;
		this->titre_rubrique->Text = "STATISTIQUES";
		this->label_bienvenue->Visible = false;
		this->logo_welcome->Visible = false;
		this->dataGridView1->Visible = false;
		this->bouton_create->Visible = false;
		this->bouton_delete->Visible = false;
		this->bouton_update->Visible = false;
		this->bouton_select->Visible = false;
		UIManager::modifierCouleur(this->panel_menu_left, this->panel_header, this->bouton_client, this->bouton_commande, this->bouton_stock, this->bouton_personnel, this->bouton_stats, 5, this);
		UIManager::afficherStats(this->label2, this->button1, this->button2, this->button3, this->button4, this->button5, this->button6, this->button7, this->button8, this->button9, this->textBox1, this->textBox2, this->textBox3, this->textBox4);
	}

	private: System::Void bouton_create_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ gestion = titre_rubrique->Text;

		if (gestion == "CLIENTS")
		{
			projectView::InputClientInserer inputForm;
			inputForm.ShowDialog();
		}
		else if (gestion == "PERSONNEL")
		{
			projectView::InputPersonnelInserer inputForm;
			inputForm.ShowDialog();
		}
		else if (gestion == "COMMANDE")
		{
			projectView::InputCommandeInserer inputForm;
			inputForm.ShowDialog();
		}
		else if (gestion == "STOCK")
		{
			projectView::InputArticleInserer inputForm;
			inputForm.ShowDialog();
		}
	}

	private: System::Void bouton_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->titre_rubrique->Text == "CLIENTS")
		{
			if (this->dataGridView1->DataSource == nullptr) {
				MessageBox::Show("Vous devez lister les clients puis sélectionner une valeur de la colonne id_client !", "Erreur", MessageBoxButtons::OK);
				return;
			}
			NS_map_client::CLclient^ client = gcnew NS_map_client::CLclient;
			int rowindex = this->dataGridView1->CurrentCell->RowIndex;
			int columnindex = this->dataGridView1->CurrentCell->ColumnIndex;
			if (columnindex != 0)
			{
				MessageBox::Show("Vous devez sélectionner une valeur de la colonne id_client !", "Erreur", MessageBoxButtons::OK);
				return;
			}
			client->setIdClient(int::Parse(this->dataGridView1->Rows[rowindex]->Cells[columnindex]->Value->ToString()));
			UIAction::deleteButtonClient(this->lblDeliveryManager, client,this->dataGridView1);
		}
		else if (this->titre_rubrique->Text == "PERSONNEL")
		{
			if(this->dataGridView1->DataSource == nullptr){
				MessageBox::Show("Vous devez lister le personnel puis sélectionner une valeur de la colonne id_personnel !", "Erreur", MessageBoxButtons::OK);
				return;
			}
			NS_map_personnel::CLpersonnel^ personnel = gcnew NS_map_personnel::CLpersonnel;
			int rowindex = this->dataGridView1->CurrentCell->RowIndex;
			int columnindex = this->dataGridView1->CurrentCell->ColumnIndex;
			if (columnindex != 0)
			{
				MessageBox::Show("Vous devez sélectionner une valeur de la colonne id_personnel !", "Erreur", MessageBoxButtons::OK);
				return;
			}
			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{ 
				if (this->dataGridView1->Rows[rowindex]->Cells[columnindex]->Value->ToString() == this->dataGridView1->Rows[i]->Cells[5]->Value->ToString())
				{
					MessageBox::Show("Action impossible : ce membre du personnel est supérieur hiérarchique d'un autre. Veuillez changer le supérieur hiérarchique du personnel ayant pour supérieur hiérachique le personnel ID #"+ this->dataGridView1->Rows[i]->Cells[5]->Value->ToString(), "Erreur", MessageBoxButtons::OK);
					return;
				} 
			}
			personnel->setIdPersonnel(int::Parse(this->dataGridView1->Rows[rowindex]->Cells[columnindex]->Value->ToString()));
			UIAction::deleteButtonPersonnel(this->lblDeliveryManager, personnel,this->dataGridView1);
		}
		
		if (this->titre_rubrique->Text == "STOCK")
		{
			if (this->dataGridView1->DataSource == nullptr) {
				MessageBox::Show("Vous devez lister le stock puis sélectionner une valeur de la colonne ref_article !", "Erreur", MessageBoxButtons::OK);
				return;
			}
			NS_map_article::CLarticle^ article = gcnew NS_map_article::CLarticle;
			int rowindex = this->dataGridView1->CurrentCell->RowIndex;
			int columnindex = this->dataGridView1->CurrentCell->ColumnIndex;
			if (columnindex != 0)
			{
				MessageBox::Show("Vous devez sélectionner une valeur de la colonne ref_article !", "Erreur", MessageBoxButtons::OK);
				return;
			}
			article->setRefArticle(int::Parse(this->dataGridView1->Rows[rowindex]->Cells[columnindex]->Value->ToString()));
			UIAction::deleteButtonArticle(this->lblDeliveryManager, article, this->dataGridView1);
		}
	}

	private: System::Void bouton_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ gestion = titre_rubrique->Text;

		if (gestion == "CLIENTS")
		{
			UIAction::selectButtonClient(this->dataGridView1, this->titre_rubrique);
		}
		else if (gestion == "PERSONNEL")
		{
			UIAction::selectButtonPersonnel(this->dataGridView1, this->titre_rubrique);
		}
		else if (gestion == "STOCK")
		{
			UIAction::selectButtonArticle(this->dataGridView1, this->titre_rubrique);
		}

		else if (gestion == "COMMANDE")
		{
			UIAction::selectButtonCommande(this->dataGridView1, this->titre_rubrique);
		}

	}
private: System::Void bouton_update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ gestion = titre_rubrique->Text;
	int rowindex = this->dataGridView1->CurrentCell->RowIndex;
	int columnindex = this->dataGridView1->CurrentCell->ColumnIndex;
	if (gestion == "CLIENTS")
	{
		if (this->dataGridView1->DataSource == nullptr) {
			MessageBox::Show("Vous devez lister les clients puis sélectionner une valeur de la colonne id_client !", "Erreur", MessageBoxButtons::OK);
			return;
		}
		NS_map_client::CLclient^ client = gcnew NS_map_client::CLclient;
		if (columnindex != 0)
		{
			MessageBox::Show("Vous devez sélectionner une valeur de la colonne id_client !", "Erreur", MessageBoxButtons::OK);
			return;
		}
		NS_map_client::CLclient::cvalue = this->dataGridView1->Rows[this->dataGridView1->CurrentCell->RowIndex]->Cells[this->dataGridView1->CurrentCell->ColumnIndex]->Value->ToString();
		this->clientId = this->dataGridView1->Rows[rowindex]->Cells[columnindex]->Value->ToString();
		projectView::InputClientUpdate inputForm;
		inputForm.ShowDialog();
	}
	else if (gestion == "STOCK")
	{
		if (this->dataGridView1->DataSource == nullptr)
		{
			MessageBox::Show("Vous devez lister le stock puis sélectionner une valeur de la colonne ref_article!", "Erreur", MessageBoxButtons::OK);
			return;
		}
		NS_map_article::CLarticle::cvalue = this->dataGridView1->Rows[this->dataGridView1->CurrentCell->RowIndex]->Cells[this->dataGridView1->CurrentCell->ColumnIndex]->Value->ToString();
		this->articleId = this->dataGridView1->Rows[rowindex]->Cells[columnindex]->Value->ToString();
		projectView::InputArticleUpdate inputForm;
		inputForm.ShowDialog();

	}
}
};
}
