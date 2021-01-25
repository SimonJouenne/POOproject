#pragma once

#include "Share.h"
#include "DataViewer.h"
#include "ArticleModificateForm.h"
#include "CreateLotForm.h"
#include "ParametreForm.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ShareFonctionality;

	/// <summary>
	/// Summary for StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	public:
		StockForm(Login^log)
		{
			InitializeComponent();
			login = log;
			//
			//TODO: Add the constructor code here
			//
		}
	public: 
		Login^ login;

	public:









	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBoxArtSupr;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxIDModif;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxQuantité;

	private: System::Windows::Forms::TextBox^ textBoxPrix;
	private: System::Windows::Forms::TextBox^ textBoxSeuil;



	private: System::Windows::Forms::TextBox^ textBoxIDTVA;

	private: System::Windows::Forms::TextBox^ textBoxIDArticle;

	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
		   Form^ activeForm;
			 
			 void OpenChildForm(Form^ childForm, Object^ sender, Panel^panel) {
				 if (this->activeForm != nullptr)
				 {
					 this->activeForm->Close();
				 }
				 this->activeForm = childForm;
				 childForm->TopLevel = false;
				 childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 childForm->Dock = DockStyle::Fill;
				 panel->Controls->Add(childForm);
				 panel->Tag = childForm;
				 childForm->BringToFront();
				 childForm->Show();

			 }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panelModif;
	private: System::Windows::Forms::Panel^ panelCreation;



	protected:













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StockForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panelModif = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBoxArtSupr = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDModif = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panelCreation = (gcnew System::Windows::Forms::Panel());
			this->textBoxQuantité = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrix = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeuil = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panelModif->SuspendLayout();
			this->panelCreation->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panelTop);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panelModif);
			this->panel1->Controls->Add(this->panelCreation);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(811, 633);
			this->panel1->TabIndex = 0;
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::White;
			this->panelTop->Controls->Add(this->button9);
			this->panelTop->Controls->Add(this->label1);
			this->panelTop->Controls->Add(this->pictureBox1);
			this->panelTop->Controls->Add(this->button1);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(811, 50);
			this->panelTop->TabIndex = 7;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Right;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(761, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 4;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &StockForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gestion Des Stocks";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 24);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(50, 89);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(713, 65);
			this->panel2->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(496, 0);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(165, 65);
			this->button5->TabIndex = 3;
			this->button5->Text = L"  Supprimer";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &StockForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Dock = System::Windows::Forms::DockStyle::Left;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(331, 0);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(165, 65);
			this->button4->TabIndex = 2;
			this->button4->Text = L"  Modifier";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &StockForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Dock = System::Windows::Forms::DockStyle::Left;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(166, 0);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(165, 65);
			this->button3->TabIndex = 1;
			this->button3->Text = L"  Afficher";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StockForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(166, 65);
			this->button2->TabIndex = 0;
			this->button2->Text = L"  Créer";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StockForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel3->Location = System::Drawing::Point(0, 296);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(7, 50);
			this->panel3->TabIndex = 8;
			// 
			// panelModif
			// 
			this->panelModif->BackColor = System::Drawing::Color::White;
			this->panelModif->Controls->Add(this->button7);
			this->panelModif->Controls->Add(this->button6);
			this->panelModif->Controls->Add(this->textBoxArtSupr);
			this->panelModif->Controls->Add(this->label11);
			this->panelModif->Controls->Add(this->label10);
			this->panelModif->Controls->Add(this->textBoxIDModif);
			this->panelModif->Controls->Add(this->label9);
			this->panelModif->Controls->Add(this->label8);
			this->panelModif->Location = System::Drawing::Point(395, 184);
			this->panelModif->Name = L"panelModif";
			this->panelModif->Size = System::Drawing::Size(315, 378);
			this->panelModif->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(158, 333);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->button7->Size = System::Drawing::Size(158, 45);
			this->button7->TabIndex = 19;
			this->button7->Text = L"  Afficher Lot";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &StockForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(0, 333);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->button6->Size = System::Drawing::Size(158, 45);
			this->button6->TabIndex = 18;
			this->button6->Text = L"  Créer Lot";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &StockForm::button6_Click);
			// 
			// textBoxArtSupr
			// 
			this->textBoxArtSupr->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxArtSupr->Location = System::Drawing::Point(30, 250);
			this->textBoxArtSupr->Name = L"textBoxArtSupr";
			this->textBoxArtSupr->Size = System::Drawing::Size(257, 25);
			this->textBoxArtSupr->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(30, 220);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 21);
			this->label11->TabIndex = 16;
			this->label11->Text = L"ID Article à Suprimer";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(95, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 21);
			this->label10->TabIndex = 15;
			this->label10->Text = L"       Supression";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxIDModif
			// 
			this->textBoxIDModif->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDModif->Location = System::Drawing::Point(30, 120);
			this->textBoxIDModif->Name = L"textBoxIDModif";
			this->textBoxIDModif->Size = System::Drawing::Size(257, 25);
			this->textBoxIDModif->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(30, 90);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 21);
			this->label9->TabIndex = 13;
			this->label9->Text = L"ID Article à Modifier";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Location = System::Drawing::Point(95, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 21);
			this->label8->TabIndex = 12;
			this->label8->Text = L"       Modification";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelCreation
			// 
			this->panelCreation->BackColor = System::Drawing::Color::White;
			this->panelCreation->Controls->Add(this->textBoxQuantité);
			this->panelCreation->Controls->Add(this->textBoxPrix);
			this->panelCreation->Controls->Add(this->textBoxSeuil);
			this->panelCreation->Controls->Add(this->textBoxIDTVA);
			this->panelCreation->Controls->Add(this->textBoxIDArticle);
			this->panelCreation->Controls->Add(this->textBoxNom);
			this->panelCreation->Controls->Add(this->label7);
			this->panelCreation->Controls->Add(this->label6);
			this->panelCreation->Controls->Add(this->label5);
			this->panelCreation->Controls->Add(this->label4);
			this->panelCreation->Controls->Add(this->label3);
			this->panelCreation->Controls->Add(this->label2);
			this->panelCreation->Location = System::Drawing::Point(50, 184);
			this->panelCreation->Name = L"panelCreation";
			this->panelCreation->Size = System::Drawing::Size(315, 378);
			this->panelCreation->TabIndex = 10;
			// 
			// textBoxQuantité
			// 
			this->textBoxQuantité->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQuantité->Location = System::Drawing::Point(36, 273);
			this->textBoxQuantité->Name = L"textBoxQuantité";
			this->textBoxQuantité->Size = System::Drawing::Size(242, 22);
			this->textBoxQuantité->TabIndex = 23;
			// 
			// textBoxPrix
			// 
			this->textBoxPrix->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrix->Location = System::Drawing::Point(36, 163);
			this->textBoxPrix->Name = L"textBoxPrix";
			this->textBoxPrix->Size = System::Drawing::Size(242, 22);
			this->textBoxPrix->TabIndex = 22;
			// 
			// textBoxSeuil
			// 
			this->textBoxSeuil->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSeuil->Location = System::Drawing::Point(36, 328);
			this->textBoxSeuil->Name = L"textBoxSeuil";
			this->textBoxSeuil->Size = System::Drawing::Size(242, 22);
			this->textBoxSeuil->TabIndex = 21;
			// 
			// textBoxIDTVA
			// 
			this->textBoxIDTVA->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDTVA->Location = System::Drawing::Point(36, 218);
			this->textBoxIDTVA->Name = L"textBoxIDTVA";
			this->textBoxIDTVA->Size = System::Drawing::Size(242, 22);
			this->textBoxIDTVA->TabIndex = 20;
			// 
			// textBoxIDArticle
			// 
			this->textBoxIDArticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDArticle->Location = System::Drawing::Point(36, 108);
			this->textBoxIDArticle->Name = L"textBoxIDArticle";
			this->textBoxIDArticle->Size = System::Drawing::Size(242, 22);
			this->textBoxIDArticle->TabIndex = 19;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(36, 53);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(242, 22);
			this->textBoxNom->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(36, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(238, 21);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Seuil Mini de Réaprovisionement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 21);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Quantité Article Stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 21);
			this->label5->TabIndex = 15;
			this->label5->Text = L"ID Taux TVA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 21);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Prix HT Unitaire";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"ID Type d\'Article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nom";
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->ClientSize = System::Drawing::Size(811, 633);
			this->Controls->Add(this->panel1);
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			this->panel1->ResumeLayout(false);
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panelModif->ResumeLayout(false);
			this->panelModif->PerformLayout();
			this->panelCreation->ResumeLayout(false);
			this->panelCreation->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew DataViewer(login, "ARTICLE"), sender, panel1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		login->a_getvalue(textBoxNom->Text, textBoxIDArticle->Text, textBoxIDTVA->Text, textBoxPrix->Text, textBoxQuantité->Text, textBoxSeuil->Text);
		login->createArticle();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		login->deleteArticle(textBoxArtSupr->Text);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew ArticleModificateForm(textBoxIDModif->Text, login), sender, panelModif);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew DataViewer(login, "LOT"), sender, panel1);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew CreateLotForm(login), sender, panelCreation);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		ParametreForm^ setingForm = gcnew ParametreForm(login);
		setingForm->ShowDialog();
	}
};
}
