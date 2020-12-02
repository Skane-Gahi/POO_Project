#pragma once

#include "Table.h"
#include "Client.h"
#include "Employe.h"
#include "Produit.h"
#include "Commande.h"

namespace BackForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de BackForm
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
		/// Nettoyage des ressources utilis�es.
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
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ label_c_nom;
	private: System::Windows::Forms::Label^ label_c_prenom;
	private: System::Windows::Forms::Label^ label_c_date;
	private: System::Windows::Forms::Label^ label_c_nbcommande;
	private: System::Windows::Forms::Label^ label_c_adrfact;
	private: System::Windows::Forms::Label^ label_c_villefact;
	private: System::Windows::Forms::Label^ label_c_cpfact;
	private: System::Windows::Forms::Label^ label_c_adrliv;
	private: System::Windows::Forms::Label^ label_c_villeliv;
	private: System::Windows::Forms::Label^ label_c_cpliv;
	private: System::Windows::Forms::TextBox^ textBox1_c_cpliv;











private: System::Windows::Forms::TextBox^ textBox_c_villeliv;

private: System::Windows::Forms::TextBox^ textBox_c_adrliv;

private: System::Windows::Forms::TextBox^ textBox_c_cpfact;

private: System::Windows::Forms::TextBox^ textBox_c_villefact;

private: System::Windows::Forms::TextBox^ textBox_c_adrfact;

private: System::Windows::Forms::TextBox^ textBox_c_nbcommande;

private: System::Windows::Forms::TextBox^ textBox_c_date;

private: System::Windows::Forms::TextBox^ textBox_c_prenom;

private: System::Windows::Forms::TextBox^ textBox_c_nom;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::Label^ label_p_desi;
private: System::Windows::Forms::Label^ label_p_pht;
private: System::Windows::Forms::Label^ label_p_qte;



private: System::Windows::Forms::Label^ label_p_seuil;
private: System::Windows::Forms::Label^ label_p_tva;
private: System::Windows::Forms::TextBox^ textBox_p_tva;






private: System::Windows::Forms::TextBox^ textBox_p_desi;
private: System::Windows::Forms::TextBox^ textBox_p_pht;
private: System::Windows::Forms::TextBox^ textBox_p_qte;
private: System::Windows::Forms::TextBox^ textBox_p_seuil;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::TextBox^ textBox_d_produits;
private: System::Windows::Forms::TextBox^ textBox_d_qtes;
private: System::Windows::Forms::Label^ label_d_ref;
private: System::Windows::Forms::Label^ label_d_valide;
private: System::Windows::Forms::Label^ label_d_envoi;
private: System::Windows::Forms::Label^ label_paiment;
private: System::Windows::Forms::Label^ label_d_moyen;
private: System::Windows::Forms::Label^ label_total;
private: System::Windows::Forms::Label^ label_d_produits;
private: System::Windows::Forms::Label^ label_d_qtes;
private: System::Windows::Forms::TextBox^ textBox_d_ref;
private: System::Windows::Forms::TextBox^ textBox_d_valide;
private: System::Windows::Forms::TextBox^ textBox_d_paiement;
private: System::Windows::Forms::TextBox^ textBox_d_envoi;
private: System::Windows::Forms::TextBox^ textBox_d_moyen;
private: System::Windows::Forms::TextBox^ textBox_d_total;


	int Index;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_poste = (gcnew System::Windows::Forms::Label());
			this->label_adresse = (gcnew System::Windows::Forms::Label());
			this->label_ville = (gcnew System::Windows::Forms::Label());
			this->label_cp = (gcnew System::Windows::Forms::Label());
			this->textBox_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox1_c_cpliv = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_villeliv = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_adrliv = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_cpfact = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_villefact = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_adrfact = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_nbcommande = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_date = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_prenom = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_c_nom = (gcnew System::Windows::Forms::Label());
			this->label_c_prenom = (gcnew System::Windows::Forms::Label());
			this->label_c_date = (gcnew System::Windows::Forms::Label());
			this->label_c_nbcommande = (gcnew System::Windows::Forms::Label());
			this->label_c_adrfact = (gcnew System::Windows::Forms::Label());
			this->label_c_villefact = (gcnew System::Windows::Forms::Label());
			this->label_c_cpfact = (gcnew System::Windows::Forms::Label());
			this->label_c_adrliv = (gcnew System::Windows::Forms::Label());
			this->label_c_villeliv = (gcnew System::Windows::Forms::Label());
			this->label_c_cpliv = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox_p_tva = (gcnew System::Windows::Forms::TextBox());
			this->label_p_desi = (gcnew System::Windows::Forms::Label());
			this->label_p_pht = (gcnew System::Windows::Forms::Label());
			this->label_p_qte = (gcnew System::Windows::Forms::Label());
			this->label_p_seuil = (gcnew System::Windows::Forms::Label());
			this->label_p_tva = (gcnew System::Windows::Forms::Label());
			this->textBox_p_desi = (gcnew System::Windows::Forms::TextBox());
			this->textBox_p_pht = (gcnew System::Windows::Forms::TextBox());
			this->textBox_p_qte = (gcnew System::Windows::Forms::TextBox());
			this->textBox_p_seuil = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox_d_produits = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d_qtes = (gcnew System::Windows::Forms::TextBox());
			this->label_d_ref = (gcnew System::Windows::Forms::Label());
			this->label_d_valide = (gcnew System::Windows::Forms::Label());
			this->label_d_envoi = (gcnew System::Windows::Forms::Label());
			this->label_paiment = (gcnew System::Windows::Forms::Label());
			this->label_d_moyen = (gcnew System::Windows::Forms::Label());
			this->label_total = (gcnew System::Windows::Forms::Label());
			this->label_d_produits = (gcnew System::Windows::Forms::Label());
			this->label_d_qtes = (gcnew System::Windows::Forms::Label());
			this->textBox_d_ref = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d_valide = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d_paiement = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d_envoi = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d_moyen = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d_total = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
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
			this->dataGridView1->ReadOnly = true;
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
			this->tableLayoutPanel2->Enabled = false;
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
			this->tableLayoutPanel3->Enabled = false;
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
			this->button_modifier->Click += gcnew System::EventHandler(this, &Form::button_modifier_Click);
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
			this->button_supprimer->Click += gcnew System::EventHandler(this, &Form::button_supprimer_Click);
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
			this->button_afficher->Enabled = false;
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
			this->tableLayoutPanel4->Controls->Add(this->label_date_embauche, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->label_poste, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->label_adresse, 0, 4);
			this->tableLayoutPanel4->Controls->Add(this->label_ville, 1, 4);
			this->tableLayoutPanel4->Controls->Add(this->label_cp, 0, 6);
			this->tableLayoutPanel4->Controls->Add(this->textBox_nom, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label_nom, 0, 0);
			this->tableLayoutPanel4->Enabled = false;
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
			this->tableLayoutPanel4->TabIndex = 0;
			this->tableLayoutPanel4->Visible = false;
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
			this->textBox_prenom->TextChanged += gcnew System::EventHandler(this, &Form::textBox_prenom_TextChanged);
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
			this->label_prenom->Text = L"Pr�nom";
			this->label_prenom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->textBox_nom->TextChanged += gcnew System::EventHandler(this, &Form::textBox_nom_TextChanged);
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
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->textBox1_c_cpliv, 1, 9);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_villeliv, 0, 9);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_adrliv, 1, 7);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_cpfact, 0, 7);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_villefact, 1, 5);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_adrfact, 0, 5);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_nbcommande, 1, 3);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_date, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_prenom, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->textBox_c_nom, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label_c_nom, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label_c_prenom, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->label_c_date, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->label_c_nbcommande, 1, 2);
			this->tableLayoutPanel5->Controls->Add(this->label_c_adrfact, 0, 4);
			this->tableLayoutPanel5->Controls->Add(this->label_c_villefact, 1, 4);
			this->tableLayoutPanel5->Controls->Add(this->label_c_cpfact, 0, 6);
			this->tableLayoutPanel5->Controls->Add(this->label_c_adrliv, 1, 6);
			this->tableLayoutPanel5->Controls->Add(this->label_c_villeliv, 0, 8);
			this->tableLayoutPanel5->Controls->Add(this->label_c_cpliv, 1, 8);
			this->tableLayoutPanel5->Enabled = false;
			this->tableLayoutPanel5->Location = System::Drawing::Point(224, 12);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 10;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(462, 318);
			this->tableLayoutPanel5->TabIndex = 5;
			this->tableLayoutPanel5->Visible = false;
			// 
			// textBox1_c_cpliv
			// 
			this->textBox1_c_cpliv->BackColor = System::Drawing::Color::White;
			this->textBox1_c_cpliv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1_c_cpliv->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1_c_cpliv->ForeColor = System::Drawing::Color::Black;
			this->textBox1_c_cpliv->Location = System::Drawing::Point(234, 282);
			this->textBox1_c_cpliv->Name = L"textBox1_c_cpliv";
			this->textBox1_c_cpliv->Size = System::Drawing::Size(225, 29);
			this->textBox1_c_cpliv->TabIndex = 20;
			this->textBox1_c_cpliv->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_villeliv
			// 
			this->textBox_c_villeliv->BackColor = System::Drawing::Color::White;
			this->textBox_c_villeliv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_villeliv->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_villeliv->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_villeliv->Location = System::Drawing::Point(3, 282);
			this->textBox_c_villeliv->Name = L"textBox_c_villeliv";
			this->textBox_c_villeliv->Size = System::Drawing::Size(225, 29);
			this->textBox_c_villeliv->TabIndex = 19;
			this->textBox_c_villeliv->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_adrliv
			// 
			this->textBox_c_adrliv->BackColor = System::Drawing::Color::White;
			this->textBox_c_adrliv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_adrliv->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_adrliv->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_adrliv->Location = System::Drawing::Point(234, 220);
			this->textBox_c_adrliv->Name = L"textBox_c_adrliv";
			this->textBox_c_adrliv->Size = System::Drawing::Size(225, 29);
			this->textBox_c_adrliv->TabIndex = 18;
			this->textBox_c_adrliv->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_cpfact
			// 
			this->textBox_c_cpfact->BackColor = System::Drawing::Color::White;
			this->textBox_c_cpfact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_cpfact->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_cpfact->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_cpfact->Location = System::Drawing::Point(3, 220);
			this->textBox_c_cpfact->Name = L"textBox_c_cpfact";
			this->textBox_c_cpfact->Size = System::Drawing::Size(225, 29);
			this->textBox_c_cpfact->TabIndex = 17;
			this->textBox_c_cpfact->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_villefact
			// 
			this->textBox_c_villefact->BackColor = System::Drawing::Color::White;
			this->textBox_c_villefact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_villefact->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_villefact->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_villefact->Location = System::Drawing::Point(234, 158);
			this->textBox_c_villefact->Name = L"textBox_c_villefact";
			this->textBox_c_villefact->Size = System::Drawing::Size(225, 29);
			this->textBox_c_villefact->TabIndex = 16;
			this->textBox_c_villefact->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_adrfact
			// 
			this->textBox_c_adrfact->BackColor = System::Drawing::Color::White;
			this->textBox_c_adrfact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_adrfact->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_adrfact->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_adrfact->Location = System::Drawing::Point(3, 158);
			this->textBox_c_adrfact->Name = L"textBox_c_adrfact";
			this->textBox_c_adrfact->Size = System::Drawing::Size(225, 29);
			this->textBox_c_adrfact->TabIndex = 15;
			this->textBox_c_adrfact->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_nbcommande
			// 
			this->textBox_c_nbcommande->BackColor = System::Drawing::Color::White;
			this->textBox_c_nbcommande->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_nbcommande->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_nbcommande->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_nbcommande->Location = System::Drawing::Point(234, 96);
			this->textBox_c_nbcommande->Name = L"textBox_c_nbcommande";
			this->textBox_c_nbcommande->Size = System::Drawing::Size(225, 29);
			this->textBox_c_nbcommande->TabIndex = 14;
			this->textBox_c_nbcommande->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_date
			// 
			this->textBox_c_date->BackColor = System::Drawing::Color::White;
			this->textBox_c_date->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_date->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_date->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_date->Location = System::Drawing::Point(3, 96);
			this->textBox_c_date->Name = L"textBox_c_date";
			this->textBox_c_date->Size = System::Drawing::Size(225, 29);
			this->textBox_c_date->TabIndex = 13;
			this->textBox_c_date->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_prenom
			// 
			this->textBox_c_prenom->BackColor = System::Drawing::Color::White;
			this->textBox_c_prenom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_prenom->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_prenom->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_prenom->Location = System::Drawing::Point(234, 34);
			this->textBox_c_prenom->Name = L"textBox_c_prenom";
			this->textBox_c_prenom->Size = System::Drawing::Size(225, 29);
			this->textBox_c_prenom->TabIndex = 12;
			this->textBox_c_prenom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_c_nom
			// 
			this->textBox_c_nom->BackColor = System::Drawing::Color::White;
			this->textBox_c_nom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_c_nom->Font = (gcnew System::Drawing::Font(L"Cuprum", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_c_nom->ForeColor = System::Drawing::Color::Black;
			this->textBox_c_nom->Location = System::Drawing::Point(3, 34);
			this->textBox_c_nom->Name = L"textBox_c_nom";
			this->textBox_c_nom->Size = System::Drawing::Size(225, 29);
			this->textBox_c_nom->TabIndex = 11;
			this->textBox_c_nom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_c_nom
			// 
			this->label_c_nom->AutoSize = true;
			this->label_c_nom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_nom->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_nom->Location = System::Drawing::Point(3, 0);
			this->label_c_nom->Name = L"label_c_nom";
			this->label_c_nom->Size = System::Drawing::Size(225, 31);
			this->label_c_nom->TabIndex = 1;
			this->label_c_nom->Text = L"Nom";
			this->label_c_nom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_prenom
			// 
			this->label_c_prenom->AutoSize = true;
			this->label_c_prenom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_prenom->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_prenom->Location = System::Drawing::Point(234, 0);
			this->label_c_prenom->Name = L"label_c_prenom";
			this->label_c_prenom->Size = System::Drawing::Size(225, 31);
			this->label_c_prenom->TabIndex = 2;
			this->label_c_prenom->Text = L"Pr�nom";
			this->label_c_prenom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_date
			// 
			this->label_c_date->AutoSize = true;
			this->label_c_date->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_date->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_date->Location = System::Drawing::Point(3, 62);
			this->label_c_date->Name = L"label_c_date";
			this->label_c_date->Size = System::Drawing::Size(225, 31);
			this->label_c_date->TabIndex = 3;
			this->label_c_date->Text = L"Date de naissance";
			this->label_c_date->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_nbcommande
			// 
			this->label_c_nbcommande->AutoSize = true;
			this->label_c_nbcommande->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_nbcommande->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_nbcommande->Location = System::Drawing::Point(234, 62);
			this->label_c_nbcommande->Name = L"label_c_nbcommande";
			this->label_c_nbcommande->Size = System::Drawing::Size(225, 31);
			this->label_c_nbcommande->TabIndex = 4;
			this->label_c_nbcommande->Text = L"Nombre de commandes";
			this->label_c_nbcommande->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_adrfact
			// 
			this->label_c_adrfact->AutoSize = true;
			this->label_c_adrfact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_adrfact->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_adrfact->Location = System::Drawing::Point(3, 124);
			this->label_c_adrfact->Name = L"label_c_adrfact";
			this->label_c_adrfact->Size = System::Drawing::Size(225, 31);
			this->label_c_adrfact->TabIndex = 5;
			this->label_c_adrfact->Text = L"Adresse de facturation";
			this->label_c_adrfact->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_villefact
			// 
			this->label_c_villefact->AutoSize = true;
			this->label_c_villefact->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_villefact->Location = System::Drawing::Point(234, 124);
			this->label_c_villefact->Name = L"label_c_villefact";
			this->label_c_villefact->Size = System::Drawing::Size(48, 25);
			this->label_c_villefact->TabIndex = 6;
			this->label_c_villefact->Text = L"Ville";
			this->label_c_villefact->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_cpfact
			// 
			this->label_c_cpfact->AutoSize = true;
			this->label_c_cpfact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_cpfact->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_cpfact->Location = System::Drawing::Point(3, 186);
			this->label_c_cpfact->Name = L"label_c_cpfact";
			this->label_c_cpfact->Size = System::Drawing::Size(225, 31);
			this->label_c_cpfact->TabIndex = 7;
			this->label_c_cpfact->Text = L"Code Postal";
			this->label_c_cpfact->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_adrliv
			// 
			this->label_c_adrliv->AutoSize = true;
			this->label_c_adrliv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_adrliv->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_adrliv->Location = System::Drawing::Point(234, 186);
			this->label_c_adrliv->Name = L"label_c_adrliv";
			this->label_c_adrliv->Size = System::Drawing::Size(225, 31);
			this->label_c_adrliv->TabIndex = 8;
			this->label_c_adrliv->Text = L"Adresse de livraison";
			this->label_c_adrliv->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_villeliv
			// 
			this->label_c_villeliv->AutoSize = true;
			this->label_c_villeliv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_villeliv->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_villeliv->Location = System::Drawing::Point(3, 248);
			this->label_c_villeliv->Name = L"label_c_villeliv";
			this->label_c_villeliv->Size = System::Drawing::Size(225, 31);
			this->label_c_villeliv->TabIndex = 9;
			this->label_c_villeliv->Text = L"Ville";
			this->label_c_villeliv->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_c_cpliv
			// 
			this->label_c_cpliv->AutoSize = true;
			this->label_c_cpliv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_c_cpliv->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_c_cpliv->Location = System::Drawing::Point(234, 248);
			this->label_c_cpliv->Name = L"label_c_cpliv";
			this->label_c_cpliv->Size = System::Drawing::Size(225, 31);
			this->label_c_cpliv->TabIndex = 10;
			this->label_c_cpliv->Text = L"Code Postal";
			this->label_c_cpliv->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->textBox_p_tva, 0, 5);
			this->tableLayoutPanel7->Controls->Add(this->label_p_desi, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->label_p_pht, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->label_p_qte, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->label_p_seuil, 1, 2);
			this->tableLayoutPanel7->Controls->Add(this->label_p_tva, 0, 4);
			this->tableLayoutPanel7->Controls->Add(this->textBox_p_desi, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->textBox_p_pht, 1, 1);
			this->tableLayoutPanel7->Controls->Add(this->textBox_p_qte, 0, 3);
			this->tableLayoutPanel7->Controls->Add(this->textBox_p_seuil, 1, 3);
			this->tableLayoutPanel7->Enabled = false;
			this->tableLayoutPanel7->Location = System::Drawing::Point(224, 12);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 6;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(462, 318);
			this->tableLayoutPanel7->TabIndex = 6;
			this->tableLayoutPanel7->Visible = false;
			// 
			// textBox_p_tva
			// 
			this->textBox_p_tva->BackColor = System::Drawing::Color::White;
			this->textBox_p_tva->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_p_tva->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p_tva->ForeColor = System::Drawing::Color::Black;
			this->textBox_p_tva->Location = System::Drawing::Point(3, 263);
			this->textBox_p_tva->Name = L"textBox_p_tva";
			this->textBox_p_tva->Size = System::Drawing::Size(225, 32);
			this->textBox_p_tva->TabIndex = 17;
			this->textBox_p_tva->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_p_desi
			// 
			this->label_p_desi->AutoSize = true;
			this->label_p_desi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_p_desi->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p_desi->Location = System::Drawing::Point(3, 0);
			this->label_p_desi->Name = L"label_p_desi";
			this->label_p_desi->Size = System::Drawing::Size(225, 52);
			this->label_p_desi->TabIndex = 2;
			this->label_p_desi->Text = L"D�signation";
			this->label_p_desi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_p_pht
			// 
			this->label_p_pht->AutoSize = true;
			this->label_p_pht->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_p_pht->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p_pht->Location = System::Drawing::Point(234, 0);
			this->label_p_pht->Name = L"label_p_pht";
			this->label_p_pht->Size = System::Drawing::Size(225, 52);
			this->label_p_pht->TabIndex = 3;
			this->label_p_pht->Text = L"Prix Hors Taxes";
			this->label_p_pht->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_p_qte
			// 
			this->label_p_qte->AutoSize = true;
			this->label_p_qte->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_p_qte->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p_qte->Location = System::Drawing::Point(3, 104);
			this->label_p_qte->Name = L"label_p_qte";
			this->label_p_qte->Size = System::Drawing::Size(225, 52);
			this->label_p_qte->TabIndex = 4;
			this->label_p_qte->Text = L"Quantit� dans le stock";
			this->label_p_qte->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_p_seuil
			// 
			this->label_p_seuil->AutoSize = true;
			this->label_p_seuil->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_p_seuil->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p_seuil->Location = System::Drawing::Point(234, 104);
			this->label_p_seuil->Name = L"label_p_seuil";
			this->label_p_seuil->Size = System::Drawing::Size(225, 52);
			this->label_p_seuil->TabIndex = 5;
			this->label_p_seuil->Text = L"Seuil de r�approvisionnement";
			this->label_p_seuil->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_p_tva
			// 
			this->label_p_tva->AutoSize = true;
			this->label_p_tva->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_p_tva->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_p_tva->Location = System::Drawing::Point(3, 208);
			this->label_p_tva->Name = L"label_p_tva";
			this->label_p_tva->Size = System::Drawing::Size(225, 52);
			this->label_p_tva->TabIndex = 6;
			this->label_p_tva->Text = L"Taux de TVA";
			this->label_p_tva->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_p_desi
			// 
			this->textBox_p_desi->BackColor = System::Drawing::Color::White;
			this->textBox_p_desi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_p_desi->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p_desi->ForeColor = System::Drawing::Color::Black;
			this->textBox_p_desi->Location = System::Drawing::Point(3, 55);
			this->textBox_p_desi->Name = L"textBox_p_desi";
			this->textBox_p_desi->Size = System::Drawing::Size(225, 32);
			this->textBox_p_desi->TabIndex = 14;
			this->textBox_p_desi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_p_pht
			// 
			this->textBox_p_pht->BackColor = System::Drawing::Color::White;
			this->textBox_p_pht->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_p_pht->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p_pht->ForeColor = System::Drawing::Color::Black;
			this->textBox_p_pht->Location = System::Drawing::Point(234, 55);
			this->textBox_p_pht->Name = L"textBox_p_pht";
			this->textBox_p_pht->Size = System::Drawing::Size(225, 32);
			this->textBox_p_pht->TabIndex = 13;
			this->textBox_p_pht->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_p_qte
			// 
			this->textBox_p_qte->BackColor = System::Drawing::Color::White;
			this->textBox_p_qte->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_p_qte->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p_qte->ForeColor = System::Drawing::Color::Black;
			this->textBox_p_qte->Location = System::Drawing::Point(3, 159);
			this->textBox_p_qte->Name = L"textBox_p_qte";
			this->textBox_p_qte->Size = System::Drawing::Size(225, 32);
			this->textBox_p_qte->TabIndex = 15;
			this->textBox_p_qte->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_p_seuil
			// 
			this->textBox_p_seuil->BackColor = System::Drawing::Color::White;
			this->textBox_p_seuil->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_p_seuil->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_p_seuil->ForeColor = System::Drawing::Color::Black;
			this->textBox_p_seuil->Location = System::Drawing::Point(234, 159);
			this->textBox_p_seuil->Name = L"textBox_p_seuil";
			this->textBox_p_seuil->Size = System::Drawing::Size(225, 32);
			this->textBox_p_seuil->TabIndex = 16;
			this->textBox_p_seuil->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_produits, 0, 7);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_qtes, 0, 7);
			this->tableLayoutPanel6->Controls->Add(this->label_d_ref, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label_d_valide, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->label_d_envoi, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->label_paiment, 1, 2);
			this->tableLayoutPanel6->Controls->Add(this->label_d_moyen, 0, 4);
			this->tableLayoutPanel6->Controls->Add(this->label_total, 1, 4);
			this->tableLayoutPanel6->Controls->Add(this->label_d_produits, 0, 6);
			this->tableLayoutPanel6->Controls->Add(this->label_d_qtes, 1, 6);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_ref, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_valide, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_paiement, 1, 3);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_envoi, 0, 3);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_moyen, 0, 5);
			this->tableLayoutPanel6->Controls->Add(this->textBox_d_total, 1, 5);
			this->tableLayoutPanel6->Enabled = false;
			this->tableLayoutPanel6->Location = System::Drawing::Point(224, 12);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 8;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(462, 318);
			this->tableLayoutPanel6->TabIndex = 7;
			this->tableLayoutPanel6->Visible = false;
			// 
			// textBox_d_produits
			// 
			this->textBox_d_produits->BackColor = System::Drawing::Color::White;
			this->textBox_d_produits->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_produits->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_produits->Location = System::Drawing::Point(3, 276);
			this->textBox_d_produits->Name = L"textBox_d_produits";
			this->textBox_d_produits->Size = System::Drawing::Size(225, 32);
			this->textBox_d_produits->TabIndex = 22;
			this->textBox_d_produits->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_d_qtes
			// 
			this->textBox_d_qtes->BackColor = System::Drawing::Color::White;
			this->textBox_d_qtes->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_qtes->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_qtes->Location = System::Drawing::Point(234, 276);
			this->textBox_d_qtes->Name = L"textBox_d_qtes";
			this->textBox_d_qtes->Size = System::Drawing::Size(225, 32);
			this->textBox_d_qtes->TabIndex = 21;
			this->textBox_d_qtes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_d_ref
			// 
			this->label_d_ref->AutoSize = true;
			this->label_d_ref->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_d_ref->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_d_ref->Location = System::Drawing::Point(3, 0);
			this->label_d_ref->Name = L"label_d_ref";
			this->label_d_ref->Size = System::Drawing::Size(225, 39);
			this->label_d_ref->TabIndex = 4;
			this->label_d_ref->Text = L"reference";
			this->label_d_ref->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_d_valide
			// 
			this->label_d_valide->AutoSize = true;
			this->label_d_valide->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_d_valide->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_d_valide->Location = System::Drawing::Point(234, 0);
			this->label_d_valide->Name = L"label_d_valide";
			this->label_d_valide->Size = System::Drawing::Size(225, 39);
			this->label_d_valide->TabIndex = 5;
			this->label_d_valide->Text = L"paiment valide";
			this->label_d_valide->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_d_envoi
			// 
			this->label_d_envoi->AutoSize = true;
			this->label_d_envoi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_d_envoi->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_d_envoi->Location = System::Drawing::Point(3, 78);
			this->label_d_envoi->Name = L"label_d_envoi";
			this->label_d_envoi->Size = System::Drawing::Size(225, 39);
			this->label_d_envoi->TabIndex = 6;
			this->label_d_envoi->Text = L"date d\'envoi";
			this->label_d_envoi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_paiment
			// 
			this->label_paiment->AutoSize = true;
			this->label_paiment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_paiment->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_paiment->Location = System::Drawing::Point(234, 78);
			this->label_paiment->Name = L"label_paiment";
			this->label_paiment->Size = System::Drawing::Size(225, 39);
			this->label_paiment->TabIndex = 7;
			this->label_paiment->Text = L"date de paiement";
			this->label_paiment->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_d_moyen
			// 
			this->label_d_moyen->AutoSize = true;
			this->label_d_moyen->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_d_moyen->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_d_moyen->Location = System::Drawing::Point(3, 156);
			this->label_d_moyen->Name = L"label_d_moyen";
			this->label_d_moyen->Size = System::Drawing::Size(225, 39);
			this->label_d_moyen->TabIndex = 8;
			this->label_d_moyen->Text = L"moyen de paiement";
			this->label_d_moyen->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_total
			// 
			this->label_total->AutoSize = true;
			this->label_total->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_total->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_total->Location = System::Drawing::Point(234, 156);
			this->label_total->Name = L"label_total";
			this->label_total->Size = System::Drawing::Size(225, 39);
			this->label_total->TabIndex = 9;
			this->label_total->Text = L"nombre totale d\'articles";
			this->label_total->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_d_produits
			// 
			this->label_d_produits->AutoSize = true;
			this->label_d_produits->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_d_produits->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_d_produits->Location = System::Drawing::Point(3, 234);
			this->label_d_produits->Name = L"label_d_produits";
			this->label_d_produits->Size = System::Drawing::Size(225, 39);
			this->label_d_produits->TabIndex = 10;
			this->label_d_produits->Text = L"Produits";
			this->label_d_produits->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_d_qtes
			// 
			this->label_d_qtes->AutoSize = true;
			this->label_d_qtes->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_d_qtes->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_d_qtes->Location = System::Drawing::Point(234, 234);
			this->label_d_qtes->Name = L"label_d_qtes";
			this->label_d_qtes->Size = System::Drawing::Size(225, 39);
			this->label_d_qtes->TabIndex = 11;
			this->label_d_qtes->Text = L"Quantit�s";
			this->label_d_qtes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_d_ref
			// 
			this->textBox_d_ref->BackColor = System::Drawing::Color::White;
			this->textBox_d_ref->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_ref->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_ref->Location = System::Drawing::Point(3, 42);
			this->textBox_d_ref->Name = L"textBox_d_ref";
			this->textBox_d_ref->Size = System::Drawing::Size(225, 32);
			this->textBox_d_ref->TabIndex = 15;
			this->textBox_d_ref->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_d_valide
			// 
			this->textBox_d_valide->BackColor = System::Drawing::Color::White;
			this->textBox_d_valide->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_valide->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_valide->Location = System::Drawing::Point(234, 42);
			this->textBox_d_valide->Name = L"textBox_d_valide";
			this->textBox_d_valide->Size = System::Drawing::Size(225, 32);
			this->textBox_d_valide->TabIndex = 16;
			this->textBox_d_valide->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_d_paiement
			// 
			this->textBox_d_paiement->BackColor = System::Drawing::Color::White;
			this->textBox_d_paiement->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_paiement->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_paiement->Location = System::Drawing::Point(234, 120);
			this->textBox_d_paiement->Name = L"textBox_d_paiement";
			this->textBox_d_paiement->Size = System::Drawing::Size(225, 32);
			this->textBox_d_paiement->TabIndex = 17;
			this->textBox_d_paiement->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_d_envoi
			// 
			this->textBox_d_envoi->BackColor = System::Drawing::Color::White;
			this->textBox_d_envoi->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_envoi->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_envoi->Location = System::Drawing::Point(3, 120);
			this->textBox_d_envoi->Name = L"textBox_d_envoi";
			this->textBox_d_envoi->Size = System::Drawing::Size(225, 32);
			this->textBox_d_envoi->TabIndex = 18;
			this->textBox_d_envoi->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_d_moyen
			// 
			this->textBox_d_moyen->BackColor = System::Drawing::Color::White;
			this->textBox_d_moyen->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_moyen->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_moyen->Location = System::Drawing::Point(3, 198);
			this->textBox_d_moyen->Name = L"textBox_d_moyen";
			this->textBox_d_moyen->Size = System::Drawing::Size(225, 32);
			this->textBox_d_moyen->TabIndex = 19;
			this->textBox_d_moyen->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_d_total
			// 
			this->textBox_d_total->BackColor = System::Drawing::Color::White;
			this->textBox_d_total->Font = (gcnew System::Drawing::Font(L"Cuprum", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_d_total->ForeColor = System::Drawing::Color::Black;
			this->textBox_d_total->Location = System::Drawing::Point(234, 198);
			this->textBox_d_total->Name = L"textBox_d_total";
			this->textBox_d_total->Size = System::Drawing::Size(225, 32);
			this->textBox_d_total->TabIndex = 20;
			this->textBox_d_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1421, 640);
			this->Controls->Add(this->tableLayoutPanel6);
			this->Controls->Add(this->tableLayoutPanel7);
			this->Controls->Add(this->tableLayoutPanel5);
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
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: void activatebuttons() 
	{
		this->tableLayoutPanel2->Enabled = true;
		this->tableLayoutPanel3->Enabled = true;
		this->button_afficher->Enabled = true;
	}
	private: void showData(int index) {

		if(this->tableLayoutPanel4->Visible == true)
		{
			this->textBox_nom->Text = this->dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			this->textBox_prenom->Text = this->dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			this->textBox_date_embauche->Text = this->dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			this->textBox_poste->Text = this->dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			this->textBox_adresse->Text = this->dataGridView1->Rows[index]->Cells[6]->Value->ToString();
			this->textBox_ville->Text = this->dataGridView1->Rows[index]->Cells[7]->Value->ToString();
			this->textBox_cp->Text = this->dataGridView1->Rows[index]->Cells[8]->Value->ToString();
		}
		else if (this->tableLayoutPanel5->Visible == true)
		{
			this->textBox_c_nom->Text = this->dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			this->textBox_c_prenom->Text = this->dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			this->textBox_c_date->Text = this->dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			this->textBox_c_nbcommande->Text = this->dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			this->textBox_c_adrfact->Text = this->dataGridView1->Rows[index]->Cells[6]->Value->ToString();
			this->textBox_c_villefact->Text = this->dataGridView1->Rows[index]->Cells[7]->Value->ToString();
			this->textBox_c_cpfact->Text = this->dataGridView1->Rows[index]->Cells[8]->Value->ToString();
			this->textBox_c_adrliv->Text = this->dataGridView1->Rows[index]->Cells[10]->Value->ToString();
			this->textBox_c_villeliv->Text = this->dataGridView1->Rows[index]->Cells[11]->Value->ToString();
			this->textBox1_c_cpliv->Text = this->dataGridView1->Rows[index]->Cells[12]->Value->ToString();
		}
		else if (this->tableLayoutPanel6->Visible == true)
		{
			this->textBox_d_ref->Text = this->dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			this->textBox_d_valide->Text = this->dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			this->textBox_d_envoi->Text = this->dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			this->textBox_d_paiement->Text = this->dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			this->textBox_d_moyen->Text = this->dataGridView1->Rows[index]->Cells[5]->Value->ToString();
			this->textBox_d_total->Text = this->dataGridView1->Rows[index]->Cells[6]->Value->ToString();
			this->textBox_d_produits->Text = this->dataGridView1->Rows[index]->Cells[8]->Value->ToString();
			this->textBox_d_qtes->Text = this->dataGridView1->Rows[index]->Cells[9]->Value->ToString();
		}
		else if (this->tableLayoutPanel7->Visible == true) 
		{
			this->textBox_p_desi->Text = this->dataGridView1->Rows[index]->Cells[1]->Value->ToString();
			this->textBox_p_pht->Text = this->dataGridView1->Rows[index]->Cells[2]->Value->ToString();
			this->textBox_p_qte->Text = this->dataGridView1->Rows[index]->Cells[3]->Value->ToString();
			this->textBox_p_seuil->Text = this->dataGridView1->Rows[index]->Cells[4]->Value->ToString();
			this->textBox_p_tva->Text = this->dataGridView1->Rows[index]->Cells[5]->Value->ToString();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Employe* TableEmploye = new Employe;
		DataSet^ DS = TableEmploye->afficher();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = "Employe";
		this->dataGridView1->Columns[0]->Visible = false;
		this->dataGridView1->Columns[5]->Visible = false;
		this->dataGridView1->Rows[0]->Selected = true;

		activatebuttons();

		this->tableLayoutPanel4->Visible = true;
		this->tableLayoutPanel4->Enabled = true;
		this->tableLayoutPanel5->Visible = false;
		this->tableLayoutPanel5->Enabled = false;
		this->tableLayoutPanel6->Visible = false;
		this->tableLayoutPanel6->Enabled = false;
		this->tableLayoutPanel7->Visible = false;
		this->tableLayoutPanel7->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Client* TableClient = new Client;
		DataSet^ DS = TableClient->afficher();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = "Client";
		this->dataGridView1->Columns[0]->Visible = false;
		this->dataGridView1->Columns[5]->Visible = false;
		this->dataGridView1->Columns[9]->Visible = false;
		this->dataGridView1->Rows[0]->Selected = true;

		activatebuttons();

		this->tableLayoutPanel4->Visible = false;
		this->tableLayoutPanel4->Enabled = false;
		this->tableLayoutPanel5->Visible = true;
		this->tableLayoutPanel5->Enabled = true;
		this->tableLayoutPanel6->Visible = false;
		this->tableLayoutPanel6->Enabled = false;
		this->tableLayoutPanel7->Visible = false;
		this->tableLayoutPanel7->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Commande* TableCommande = new Commande;
		DataSet^ DS = TableCommande->afficher();

		activatebuttons();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = "Commande";
		this->dataGridView1->Columns[0]->Visible = false;
		this->dataGridView1->Columns[7]->Visible = false;

		this->tableLayoutPanel4->Visible = false;
		this->tableLayoutPanel4->Enabled = false;
		this->tableLayoutPanel5->Visible = false;
		this->tableLayoutPanel5->Enabled = false;
		this->tableLayoutPanel6->Visible = true;
		this->tableLayoutPanel6->Enabled = true;
		this->tableLayoutPanel7->Visible = false;
		this->tableLayoutPanel7->Enabled = false;

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NT = "Produit";
		Produit* TableProduit = new Produit;
		DataSet^ DS = TableProduit->afficher(NT);

		activatebuttons();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = NT;
		this->dataGridView1->Columns[0]->Visible = false;

		this->tableLayoutPanel4->Visible = false;
		this->tableLayoutPanel4->Enabled = false;
		this->tableLayoutPanel5->Visible = false;
		this->tableLayoutPanel5->Enabled = false;
		this->tableLayoutPanel6->Visible = false;
		this->tableLayoutPanel6->Enabled = false;
		this->tableLayoutPanel7->Visible = true;
		this->tableLayoutPanel7->Enabled = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NT = "Statistiques";
		Table* TableEmploye = new Table;
		DataSet^ DS = TableEmploye->afficher(NT);

		activatebuttons();

		this->dataGridView1->DataSource = DS;
		this->dataGridView1->DataMember = NT;

		this->tableLayoutPanel4->Visible = false;
		this->tableLayoutPanel4->Enabled = false;
		this->tableLayoutPanel5->Visible = false;
		this->tableLayoutPanel5->Enabled = false;
	}
	private: System::Void button__first_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dataGridView1->Rows[0]->Selected = true;

		showData(0);
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


		this->dataGridView1->Rows[Index - 1]->Selected = true;

		showData(Index - 1);
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

		this->dataGridView1->Rows[Index + 1]->Selected = true;

		showData(Index + 1);
	}

	private: System::Void button_last_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dataGridView1->Rows[(this->dataGridView1->RowCount)-2]->Selected = true;

		showData((this->dataGridView1->RowCount) - 2);
	}
	private: System::Void button_afficher_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Data::DataSet^ DS;

		if (this->tableLayoutPanel4->Visible == true) {
			
			Employe* TableEmploye = new Employe;
			DS = TableEmploye->afficher();
		}
		else if (this->tableLayoutPanel5->Visible == true) {

			Client* TableClient = new Client;
			DS = TableClient->afficher();
		}
		else if (this->tableLayoutPanel6->Visible == true) {

			Commande* TableCommande = new Commande;
			DS = TableCommande->afficher();
		}
		else if (this->tableLayoutPanel7->Visible == true) {

			String^ NT = "Produit";
			Produit* TableProduit = new Produit;
			DS = TableProduit->afficher(NT);
		}


		this->dataGridView1->DataSource = DS;
		this->dataGridView1->Rows[0]->Selected = true;
		showData(0);
	}
	private: System::Void button_ajouter_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->tableLayoutPanel4->Visible == true) {
			
			Employe* emp = new Employe;
			emp->ajouter(this->textBox_nom->Text, this->textBox_prenom->Text, this->textBox_date_embauche->Text, this->textBox_poste->Text, this->textBox_adresse->Text, this->textBox_ville->Text, this->textBox_cp->Text);
		}
		else if (this->tableLayoutPanel5->Visible == true) {

			Client* clt = new Client;
			clt->ajouter(this->textBox_c_nom->Text, this->textBox_c_prenom->Text, this->textBox_c_date->Text, this->textBox_c_nbcommande->Text, this->textBox_c_adrfact->Text, this->textBox_c_villefact->Text, this->textBox_c_cpfact->Text, this->textBox_c_adrliv->Text, this->textBox_c_villeliv->Text, this->textBox1_c_cpliv->Text);
		}
		else if (this->tableLayoutPanel6->Visible == true) {

			Commande* cmd = new Commande;
			cmd->ajouter(this->textBox_d_ref->Text, this->textBox_d_valide->Text, this->textBox_d_envoi->Text, this->textBox_d_paiement->Text, this->textBox_d_moyen->Text, this->textBox_d_total->Text, this->textBox_d_produits->Text, this->textBox_d_qtes->Text);
		}
		else if (this->tableLayoutPanel7->Visible == true) {

			Produit* pdt = new Produit;
			pdt->ajouter(this->textBox_p_desi->Text, this->textBox_p_pht->Text, this->textBox_p_qte->Text, this->textBox_p_seuil->Text, this->textBox_p_tva->Text);
		}
	}
	private: System::Void button_modifier_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			if (this->dataGridView1->Rows[i]->Selected == true) {
				Index = i;
			}
		}

		if (this->tableLayoutPanel4->Visible == true) {

			Employe* emp = new Employe;
			emp->modifier(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString(), this->textBox_nom->Text, this->textBox_prenom->Text, this->textBox_date_embauche->Text, this->textBox_poste->Text, this->textBox_adresse->Text, this->textBox_ville->Text, this->textBox_cp->Text);
		}
		else if (this->tableLayoutPanel5->Visible == true) {

			Client* clt = new Client;
			clt->modifier(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString(), this->dataGridView1->Rows[Index]->Cells[5]->Value->ToString(), this->dataGridView1->Rows[Index]->Cells[9]->Value->ToString(), this->textBox_c_nom->Text, this->textBox_c_prenom->Text, this->textBox_c_date->Text, this->textBox_c_nbcommande->Text, this->textBox_c_adrfact->Text, this->textBox_c_villefact->Text, this->textBox_c_cpfact->Text, this->textBox_c_adrliv->Text, this->textBox_c_villeliv->Text, this->textBox1_c_cpliv->Text);
 		}
		else if (this->tableLayoutPanel6->Visible == true) {

			Commande* cmd = new Commande;
			cmd->modifier(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString(), this->textBox_d_ref->Text, this->textBox_d_valide->Text, this->textBox_d_envoi->Text, this->textBox_d_paiement->Text, this->textBox_d_moyen->Text, this->textBox_d_total->Text, this->textBox_d_produits->Text, this->textBox_d_qtes->Text);
		}
		else if (this->tableLayoutPanel7->Visible == true) {

			Produit* pdt = new Produit;
			pdt->modifier(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString(), this->textBox_p_desi->Text, this->textBox_p_pht->Text, this->textBox_p_qte->Text, this->textBox_p_seuil->Text, this->textBox_p_tva->Text);
		}
	}
	private: System::Void button_supprimer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			if (this->dataGridView1->Rows[i]->Selected == true) {
				Index = i;
			}
		}

		if (this->tableLayoutPanel4->Visible == true) {

			Employe* emp = new Employe;
			emp->supprimer(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString(), this->dataGridView1->Rows[Index]->Cells[5]->Value->ToString());
		}
		else if (this->tableLayoutPanel5->Visible == true) {
			
			Client* clt = new Client;
			clt->supprimer(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString(), this->dataGridView1->Rows[Index]->Cells[5]->Value->ToString(), this->dataGridView1->Rows[Index]->Cells[9]->Value->ToString());
		}
		else if (this->tableLayoutPanel6->Visible == true) {

			Commande* cmd = new Commande;
			cmd->supprimer(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString());
		}
		else if (this->tableLayoutPanel7->Visible == true) {

			Produit* pdt = new Produit;
			pdt->supprimer(this->dataGridView1->Rows[Index]->Cells[0]->Value->ToString());
		}
	}
	private: System::Void textBox_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			if (this->textBox_nom->Text == this->dataGridView1->Rows[i]->Cells[1]->Value->ToString()) {
				this->dataGridView1->Rows[i]->Selected = true;
				showData(i);
			}
		}
	}
	private: System::Void textBox_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < (this->dataGridView1->RowCount) - 1; i++) {
			if (this->textBox_prenom->Text == this->dataGridView1->Rows[i]->Cells[2]->Value->ToString()) {
				this->dataGridView1->Rows[i]->Selected = true;
				showData(i);
			}
		}
	}
};
}
