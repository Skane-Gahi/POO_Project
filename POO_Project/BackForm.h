#pragma once

#include "Table.h"
#include "Client.h"
#include "Employe.h"

namespace BackForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de BackForm
	/// </summary>
	public ref class Form : public System::Windows::Forms::Form
	{
	public:
		Form(void)
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
		~Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button_employe;
	private: System::Windows::Forms::Button^ button_statistiques;
	protected:


	private: System::Windows::Forms::Button^ button_stock;

	private: System::Windows::Forms::Button^ button_commandes;

	private: System::Windows::Forms::Button^ button_clients;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button__first;

	private: System::Windows::Forms::Button^ button_last;

	private: System::Windows::Forms::Button^ button_next;
	private: System::Windows::Forms::Button^ button_previous;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ button_supprimer;
	private: System::Windows::Forms::Button^ button_ajouter;


	private: System::Windows::Forms::Button^ button_modifier;

	private: System::Windows::Forms::Button^ button_afficher;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label_prenom;

	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::Label^ label_date_embauche;
	private: System::Windows::Forms::Label^ label_poste;
	private: System::Windows::Forms::Label^ label_adresse;
	private: System::Windows::Forms::Label^ label_ville;
	private: System::Windows::Forms::Label^ label_cp;






	private: System::Windows::Forms::TextBox^ textBox_nom;
	private: System::Windows::Forms::TextBox^ textBox_cp;



	private: System::Windows::Forms::TextBox^ textBox_ville;

	private: System::Windows::Forms::TextBox^ textBox_adresse;

	private: System::Windows::Forms::TextBox^ textBox_poste;

	private: System::Windows::Forms::TextBox^ textBox_date_embauche;

	private: System::Windows::Forms::TextBox^ textBox_prenom;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		int Index;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_statistiques = (gcnew System::Windows::Forms::Button());
			this->button_stock = (gcnew System::Windows::Forms::Button());
			this->button_commandes = (gcnew System::Windows::Forms::Button());
			this->button_clients = (gcnew System::Windows::Forms::Button());
			this->button_employe = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_last = (gcnew System::Windows::Forms::Button());
			this->button_next = (gcnew System::Windows::Forms::Button());
			this->button_previous = (gcnew System::Windows::Forms::Button());
			this->button__first = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_modifier = (gcnew System::Windows::Forms::Button());
			this->button_supprimer = (gcnew System::Windows::Forms::Button());
			this->button_ajouter = (gcnew System::Windows::Forms::Button());
			this->button_afficher = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox_cp = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ville = (gcnew System::Windows::Forms::TextBox());
			this->textBox_adresse = (gcnew System::Windows::Forms::TextBox());
			this->textBox_poste = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_poste = (gcnew System::Windows::Forms::Label());
			this->label_adresse = (gcnew System::Windows::Forms::Label());
			this->label_ville = (gcnew System::Windows::Forms::Label());
			this->label_cp = (gcnew System::Windows::Forms::Label());
			this->textBox_nom = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->button_statistiques, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button_stock, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button_commandes, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button_clients, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button_employe, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(200, 640);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button_statistiques
			// 
			this->button_statistiques->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_statistiques->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_statistiques->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_statistiques->FlatAppearance->BorderSize = 4;
			this->button_statistiques->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_statistiques->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_statistiques->Location = System::Drawing::Point(3, 515);
			this->button_statistiques->Name = L"button_statistiques";
			this->button_statistiques->Size = System::Drawing::Size(194, 122);
			this->button_statistiques->TabIndex = 4;
			this->button_statistiques->Text = L"Statistiques";
			this->button_statistiques->UseVisualStyleBackColor = false;
			this->button_statistiques->Click += gcnew System::EventHandler(this, &Form::button5_Click);
			// 
			// button_stock
			// 
			this->button_stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_stock->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_stock->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_stock->FlatAppearance->BorderSize = 4;
			this->button_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_stock->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_stock->Location = System::Drawing::Point(3, 387);
			this->button_stock->Name = L"button_stock";
			this->button_stock->Size = System::Drawing::Size(194, 122);
			this->button_stock->TabIndex = 3;
			this->button_stock->Text = L"Stock";
			this->button_stock->UseVisualStyleBackColor = false;
			this->button_stock->Click += gcnew System::EventHandler(this, &Form::button4_Click);
			// 
			// button_commandes
			// 
			this->button_commandes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_commandes->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_commandes->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_commandes->FlatAppearance->BorderSize = 4;
			this->button_commandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_commandes->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_commandes->Location = System::Drawing::Point(3, 259);
			this->button_commandes->Name = L"button_commandes";
			this->button_commandes->Size = System::Drawing::Size(194, 122);
			this->button_commandes->TabIndex = 2;
			this->button_commandes->Text = L"Commandes";
			this->button_commandes->UseVisualStyleBackColor = false;
			this->button_commandes->Click += gcnew System::EventHandler(this, &Form::button3_Click);
			// 
			// button_clients
			// 
			this->button_clients->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_clients->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_clients->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_clients->FlatAppearance->BorderSize = 4;
			this->button_clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_clients->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clients->Location = System::Drawing::Point(3, 131);
			this->button_clients->Name = L"button_clients";
			this->button_clients->Size = System::Drawing::Size(194, 122);
			this->button_clients->TabIndex = 1;
			this->button_clients->Text = L"Clients";
			this->button_clients->UseVisualStyleBackColor = false;
			this->button_clients->Click += gcnew System::EventHandler(this, &Form::button2_Click);
			// 
			// button_employe
			// 
			this->button_employe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_employe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_employe->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_employe->FlatAppearance->BorderSize = 4;
			this->button_employe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_employe->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_employe->Location = System::Drawing::Point(3, 3);
			this->button_employe->Name = L"button_employe";
			this->button_employe->Size = System::Drawing::Size(194, 122);
			this->button_employe->TabIndex = 0;
			this->button_employe->Text = L"Personnel";
			this->button_employe->UseVisualStyleBackColor = false;
			this->button_employe->Click += gcnew System::EventHandler(this, &Form::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView1->Location = System::Drawing::Point(706, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(715, 640);
			this->dataGridView1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->Controls->Add(this->button_last, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->button_next, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->button_previous, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->button__first, 0, 0);
			this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(224, 347);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(462, 34);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// button_last
			// 
			this->button_last->BackColor = System::Drawing::Color::White;
			this->button_last->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_last->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_last->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_last->ForeColor = System::Drawing::Color::Black;
			this->button_last->Location = System::Drawing::Point(348, 3);
			this->button_last->Name = L"button_last";
			this->button_last->Size = System::Drawing::Size(111, 28);
			this->button_last->TabIndex = 3;
			this->button_last->Text = L">>";
			this->button_last->UseVisualStyleBackColor = false;
			this->button_last->Click += gcnew System::EventHandler(this, &Form::button_last_Click);
			// 
			// button_next
			// 
			this->button_next->BackColor = System::Drawing::Color::White;
			this->button_next->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_next->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_next->ForeColor = System::Drawing::Color::Black;
			this->button_next->Location = System::Drawing::Point(233, 3);
			this->button_next->Name = L"button_next";
			this->button_next->Size = System::Drawing::Size(109, 28);
			this->button_next->TabIndex = 2;
			this->button_next->Text = L">";
			this->button_next->UseVisualStyleBackColor = false;
			this->button_next->Click += gcnew System::EventHandler(this, &Form::button_next_Click);
			// 
			// button_previous
			// 
			this->button_previous->BackColor = System::Drawing::Color::White;
			this->button_previous->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_previous->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_previous->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_previous->ForeColor = System::Drawing::Color::Black;
			this->button_previous->Location = System::Drawing::Point(118, 3);
			this->button_previous->Name = L"button_previous";
			this->button_previous->Size = System::Drawing::Size(109, 28);
			this->button_previous->TabIndex = 1;
			this->button_previous->Text = L"<";
			this->button_previous->UseVisualStyleBackColor = false;
			this->button_previous->Click += gcnew System::EventHandler(this, &Form::button_previous_Click);
			// 
			// button__first
			// 
			this->button__first->BackColor = System::Drawing::Color::White;
			this->button__first->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button__first->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button__first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button__first->ForeColor = System::Drawing::Color::Black;
			this->button__first->Location = System::Drawing::Point(3, 3);
			this->button__first->Name = L"button__first";
			this->button__first->Size = System::Drawing::Size(109, 28);
			this->button__first->TabIndex = 0;
			this->button__first->Text = L"<<";
			this->button__first->UseVisualStyleBackColor = false;
			this->button__first->Click += gcnew System::EventHandler(this, &Form::button__first_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->button_modifier, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->button_supprimer, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->button_ajouter, 0, 0);
			this->tableLayoutPanel3->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel3->Location = System::Drawing::Point(224, 387);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(228, 118);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// button_modifier
			// 
			this->button_modifier->BackColor = System::Drawing::Color::White;
			this->button_modifier->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_modifier->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_modifier->ForeColor = System::Drawing::Color::Black;
			this->button_modifier->Location = System::Drawing::Point(3, 42);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(222, 33);
			this->button_modifier->TabIndex = 4;
			this->button_modifier->Text = L"Modifier";
			this->button_modifier->UseVisualStyleBackColor = false;
			// 
			// button_supprimer
			// 
			this->button_supprimer->BackColor = System::Drawing::Color::White;
			this->button_supprimer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_supprimer->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_supprimer->ForeColor = System::Drawing::Color::Black;
			this->button_supprimer->Location = System::Drawing::Point(3, 81);
			this->button_supprimer->Name = L"button_supprimer";
			this->button_supprimer->Size = System::Drawing::Size(222, 34);
			this->button_supprimer->TabIndex = 2;
			this->button_supprimer->Text = L"Supprimer";
			this->button_supprimer->UseVisualStyleBackColor = false;
			// 
			// button_ajouter
			// 
			this->button_ajouter->BackColor = System::Drawing::Color::White;
			this->button_ajouter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_ajouter->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ajouter->ForeColor = System::Drawing::Color::Black;
			this->button_ajouter->Location = System::Drawing::Point(3, 3);
			this->button_ajouter->Name = L"button_ajouter";
			this->button_ajouter->Size = System::Drawing::Size(222, 33);
			this->button_ajouter->TabIndex = 1;
			this->button_ajouter->Text = L"Ajouter";
			this->button_ajouter->UseVisualStyleBackColor = false;
			this->button_ajouter->Click += gcnew System::EventHandler(this, &Form::button_ajouter_Click);
			// 
			// button_afficher
			// 
			this->button_afficher->BackColor = System::Drawing::Color::White;
			this->button_afficher->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_afficher->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_afficher->ForeColor = System::Drawing::Color::Black;
			this->button_afficher->Location = System::Drawing::Point(458, 390);
			this->button_afficher->Name = L"button_afficher";
			this->button_afficher->Size = System::Drawing::Size(228, 112);
			this->button_afficher->TabIndex = 4;
			this->button_afficher->Text = L"Afficher";
			this->button_afficher->UseVisualStyleBackColor = false;
			this->button_afficher->Click += gcnew System::EventHandler(this, &Form::button_afficher_Click);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.5F)));
			this->tableLayoutPanel4->Controls->Add(this->textBox_cp, 0, 7);
			this->tableLayoutPanel4->Controls->Add(this->textBox_ville, 1, 5);
			this->tableLayoutPanel4->Controls->Add(this->textBox_adresse, 0, 5);
			this->tableLayoutPanel4->Controls->Add(this->textBox_poste, 1, 3);
			this->tableLayoutPanel4->Controls->Add(this->textBox_date_embauche, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->textBox_prenom, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->label_prenom, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->label_nom, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label_date_embauche, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->label_poste, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->label_adresse, 0, 4);
			this->tableLayoutPanel4->Controls->Add(this->label_ville, 1, 4);
			this->tableLayoutPanel4->Controls->Add(this->label_cp, 0, 6);
			this->tableLayoutPanel4->Controls->Add(this->textBox_nom, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(224, 12);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 8;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(462, 318);
			this->tableLayoutPanel4->TabIndex = 5;
			// 
			// textBox_cp
			// 
			this->textBox_cp->BackColor = System::Drawing::Color::White;
			this->textBox_cp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_cp->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_cp->ForeColor = System::Drawing::Color::Black;
			this->textBox_cp->Location = System::Drawing::Point(3, 276);
			this->textBox_cp->Name = L"textBox_cp";
			this->textBox_cp->Size = System::Drawing::Size(225, 32);
			this->textBox_cp->TabIndex = 14;
			this->textBox_cp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_ville
			// 
			this->textBox_ville->BackColor = System::Drawing::Color::White;
			this->textBox_ville->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_ville->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ville->ForeColor = System::Drawing::Color::Black;
			this->textBox_ville->Location = System::Drawing::Point(234, 198);
			this->textBox_ville->Name = L"textBox_ville";
			this->textBox_ville->Size = System::Drawing::Size(225, 32);
			this->textBox_ville->TabIndex = 13;
			this->textBox_ville->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_adresse
			// 
			this->textBox_adresse->BackColor = System::Drawing::Color::White;
			this->textBox_adresse->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_adresse->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_adresse->ForeColor = System::Drawing::Color::Black;
			this->textBox_adresse->Location = System::Drawing::Point(3, 198);
			this->textBox_adresse->Name = L"textBox_adresse";
			this->textBox_adresse->Size = System::Drawing::Size(225, 32);
			this->textBox_adresse->TabIndex = 12;
			this->textBox_adresse->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_poste
			// 
			this->textBox_poste->BackColor = System::Drawing::Color::White;
			this->textBox_poste->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_poste->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_poste->ForeColor = System::Drawing::Color::Black;
			this->textBox_poste->Location = System::Drawing::Point(234, 120);
			this->textBox_poste->Name = L"textBox_poste";
			this->textBox_poste->Size = System::Drawing::Size(225, 32);
			this->textBox_poste->TabIndex = 11;
			this->textBox_poste->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_date_embauche
			// 
			this->textBox_date_embauche->BackColor = System::Drawing::Color::White;
			this->textBox_date_embauche->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_date_embauche->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_date_embauche->ForeColor = System::Drawing::Color::Black;
			this->textBox_date_embauche->Location = System::Drawing::Point(3, 120);
			this->textBox_date_embauche->Name = L"textBox_date_embauche";
			this->textBox_date_embauche->Size = System::Drawing::Size(225, 32);
			this->textBox_date_embauche->TabIndex = 10;
			this->textBox_date_embauche->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_prenom
			// 
			this->textBox_prenom->BackColor = System::Drawing::Color::White;
			this->textBox_prenom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_prenom->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_prenom->ForeColor = System::Drawing::Color::Black;
			this->textBox_prenom->Location = System::Drawing::Point(234, 42);
			this->textBox_prenom->Name = L"textBox_prenom";
			this->textBox_prenom->Size = System::Drawing::Size(225, 32);
			this->textBox_prenom->TabIndex = 9;
			this->textBox_prenom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_prenom->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenom->Location = System::Drawing::Point(234, 0);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(225, 39);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"Prénom";
			this->label_prenom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_nom->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom->Location = System::Drawing::Point(3, 0);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(225, 39);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"Nom";
			this->label_nom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->AutoSize = true;
			this->label_date_embauche->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->Location = System::Drawing::Point(3, 78);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(225, 39);
			this->label_date_embauche->TabIndex = 2;
			this->label_date_embauche->Text = L"Premier Jour";
			this->label_date_embauche->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_poste
			// 
			this->label_poste->AutoSize = true;
			this->label_poste->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_poste->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_poste->Location = System::Drawing::Point(234, 78);
			this->label_poste->Name = L"label_poste";
			this->label_poste->Size = System::Drawing::Size(225, 39);
			this->label_poste->TabIndex = 3;
			this->label_poste->Text = L"Poste";
			this->label_poste->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_adresse
			// 
			this->label_adresse->AutoSize = true;
			this->label_adresse->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_adresse->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse->Location = System::Drawing::Point(3, 156);
			this->label_adresse->Name = L"label_adresse";
			this->label_adresse->Size = System::Drawing::Size(225, 39);
			this->label_adresse->TabIndex = 4;
			this->label_adresse->Text = L"Adresse";
			this->label_adresse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_ville
			// 
			this->label_ville->AutoSize = true;
			this->label_ville->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_ville->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ville->Location = System::Drawing::Point(234, 156);
			this->label_ville->Name = L"label_ville";
			this->label_ville->Size = System::Drawing::Size(225, 39);
			this->label_ville->TabIndex = 5;
			this->label_ville->Text = L"Ville";
			this->label_ville->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_cp
			// 
			this->label_cp->AutoSize = true;
			this->label_cp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_cp->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_cp->Location = System::Drawing::Point(3, 234);
			this->label_cp->Name = L"label_cp";
			this->label_cp->Size = System::Drawing::Size(225, 39);
			this->label_cp->TabIndex = 6;
			this->label_cp->Text = L"Code Postal";
			this->label_cp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_nom
			// 
			this->textBox_nom->BackColor = System::Drawing::Color::White;
			this->textBox_nom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_nom->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_nom->ForeColor = System::Drawing::Color::Black;
			this->textBox_nom->Location = System::Drawing::Point(3, 42);
			this->textBox_nom->Name = L"textBox_nom";
			this->textBox_nom->Size = System::Drawing::Size(225, 32);
			this->textBox_nom->TabIndex = 8;
			this->textBox_nom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1421, 640);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->button_afficher);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BackForm";
			this->Load += gcnew System::EventHandler(this, &Form::Form_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Employe* TableEmploye = new Employe;
		DataSet^ DS = TableEmploye->afficher();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = "Employe";
		this->dataGridView1->Rows[0]->Selected = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Client* TableClient = new Client;
		DataSet^ DS = TableClient->afficher();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = "Client";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NT = "Commande";
		Table* TableEmploye = new Table;
		DataSet^ DS = TableEmploye->afficher(NT);

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = NT;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NT = "Produit";
		Table* TableEmploye = new Table;
		DataSet^ DS = TableEmploye->afficher(NT);

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = NT;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NT = "Statistiques";
		Table* TableEmploye = new Table;
		DataSet^ DS = TableEmploye->afficher(NT);

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = NT;
	}
	private: System::Void button__first_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dataGridView1->Rows[0]->Selected = true;

		this->textBox_nom->Text = this->dataGridView1->Rows[0]->Cells[0]->Value->ToString();
		this->textBox_prenom->Text = this->dataGridView1->Rows[0]->Cells[1]->Value->ToString();
		this->textBox_date_embauche->Text = this->dataGridView1->Rows[0]->Cells[2]->Value->ToString();
		this->textBox_poste->Text = this->dataGridView1->Rows[0]->Cells[3]->Value->ToString();
		this->textBox_adresse->Text = this->dataGridView1->Rows[0]->Cells[4]->Value->ToString();
		this->textBox_ville->Text = this->dataGridView1->Rows[0]->Cells[5]->Value->ToString();
		this->textBox_cp->Text = this->dataGridView1->Rows[0]->Cells[6]->Value->ToString();
	}
	private: System::Void button_previous_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			if (this->dataGridView1->Rows[i]->Selected == true) {
				Index = i;
			}

		}

		if (this->dataGridView1->Rows[0]->Selected == true) {
			Index = (this->dataGridView1->RowCount)-1;
			this->dataGridView1->Rows[0]->Selected = false;
		}

		else {
			this->dataGridView1->Rows[Index]->Selected = false;
		}

		this->dataGridView1->CurrentRow->Selected = false;
		this->dataGridView1->Rows[Index - 1]->Selected = true;

		this->textBox_nom->Text = this->dataGridView1->Rows[Index - 1]->Cells[0]->Value->ToString();
		this->textBox_prenom->Text = this->dataGridView1->Rows[Index - 1]->Cells[1]->Value->ToString();
		this->textBox_date_embauche->Text = this->dataGridView1->Rows[Index - 1]->Cells[2]->Value->ToString();
		this->textBox_poste->Text = this->dataGridView1->Rows[Index - 1]->Cells[3]->Value->ToString();
		this->textBox_adresse->Text = this->dataGridView1->Rows[Index - 1]->Cells[4]->Value->ToString();
		this->textBox_ville->Text = this->dataGridView1->Rows[Index - 1]->Cells[5]->Value->ToString();
		this->textBox_cp->Text = this->dataGridView1->Rows[Index - 1]->Cells[6]->Value->ToString();

	}
	private: System::Void button_next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < (this->dataGridView1->RowCount) -1; i++) {
			if (this->dataGridView1->Rows[i]->Selected == true) {
				Index = i;
			}

		}

		if (this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Selected == true) {
			Index = -1;
			this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Selected = false;
		}

		else {
			this->dataGridView1->Rows[Index]->Selected = false;
		}

		this->dataGridView1->CurrentRow->Selected = false;
		this->dataGridView1->Rows[Index + 1]->Selected = true;

		this->textBox_nom->Text = this->dataGridView1->Rows[Index+1]->Cells[0]->Value->ToString();
		this->textBox_prenom->Text = this->dataGridView1->Rows[Index + 1]->Cells[1]->Value->ToString();
		this->textBox_date_embauche->Text = this->dataGridView1->Rows[Index + 1]->Cells[2]->Value->ToString();
		this->textBox_poste->Text = this->dataGridView1->Rows[Index + 1]->Cells[3]->Value->ToString();
		this->textBox_adresse->Text = this->dataGridView1->Rows[Index + 1]->Cells[4]->Value->ToString();
		this->textBox_ville->Text = this->dataGridView1->Rows[Index + 1]->Cells[5]->Value->ToString();
		this->textBox_cp->Text = this->dataGridView1->Rows[Index + 1]->Cells[6]->Value->ToString();
	}

	private: System::Void button_last_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dataGridView1->Rows[(this->dataGridView1->RowCount)-2]->Selected = true;

		this->textBox_nom->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[0]->Value->ToString();
		this->textBox_prenom->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[1]->Value->ToString();
		this->textBox_date_embauche->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[2]->Value->ToString();
		this->textBox_poste->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[3]->Value->ToString();
		this->textBox_adresse->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[4]->Value->ToString();
		this->textBox_ville->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[5]->Value->ToString();
		this->textBox_cp->Text = this->dataGridView1->Rows[(this->dataGridView1->RowCount) - 2]->Cells[6]->Value->ToString();
	}
	private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Employe* TableEmploye = new Employe;
		DataSet^ DS = TableEmploye->afficher();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = "Employe";
		this->dataGridView1->Rows[0]->Selected = true;
	}
	private: System::Void button_ajouter_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Employe* emp = new Employe;
		emp->ajouter(this->textBox_nom->Text,this->textBox_prenom->Text,this->textBox_date_embauche->Text,this->textBox_poste->Text,this->textBox_adresse->Text,this->textBox_ville->Text,this->textBox_cp->Text);
	}
};
}
