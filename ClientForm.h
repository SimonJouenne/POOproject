#pragma once
#include "Share.h"
#include "DataViewer.h"
#include "ClientModificateForm.h"
#include "ParametreForm.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace ShareFonctionality;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(Login^ log)
		{
			InitializeComponent();
			login = log;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Login^ login;
	private: System::Windows::Forms::Panel^ panel1;
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
	private: System::Windows::Forms::Panel^ panelClientModicate;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxAdressF;

	private: System::Windows::Forms::TextBox^ textBoxAnniv;
	private: System::Windows::Forms::TextBox^ textBoxAdressL;


	private: System::Windows::Forms::TextBox^ textBoxAchat;

	private: System::Windows::Forms::TextBox^ textBoxPrenom;

	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxIDClient;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxClientSupr;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;


	protected:













	public:Form^ activeForm;
		  void OpenChildForm(Form^ childForm, Object^ sender, Panel^ panel) {
			  if (this->activeForm != nullptr)
			  {
				  this->activeForm->Close();
			  }
			  if (childForm == gcnew DataViewer(login, "CLIENT")) {
				  login->setreturnForm(this->activeForm);
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientForm::typeid));
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
			this->panelClientModicate = (gcnew System::Windows::Forms::Panel());
			this->textBoxClientSupr = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDClient = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBoxAdressF = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnniv = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdressL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAchat = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
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
			this->panelClientModicate->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panelTop);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panelClientModicate);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 549);
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
			this->panelTop->Size = System::Drawing::Size(758, 50);
			this->panelTop->TabIndex = 7;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Right;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(708, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 4;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ClientForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gestion Des Clients";
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
			this->panel2->Size = System::Drawing::Size(660, 65);
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
			this->button5->Click += gcnew System::EventHandler(this, &ClientForm::button5_Click);
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
			this->button4->Click += gcnew System::EventHandler(this, &ClientForm::button4_Click);
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
			this->button3->Click += gcnew System::EventHandler(this, &ClientForm::button3_Click);
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
			this->button2->Click += gcnew System::EventHandler(this, &ClientForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel3->Location = System::Drawing::Point(0, 196);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(7, 50);
			this->panel3->TabIndex = 8;
			// 
			// panelClientModicate
			// 
			this->panelClientModicate->BackColor = System::Drawing::Color::White;
			this->panelClientModicate->Controls->Add(this->textBoxClientSupr);
			this->panelClientModicate->Controls->Add(this->label11);
			this->panelClientModicate->Controls->Add(this->label10);
			this->panelClientModicate->Controls->Add(this->textBoxIDClient);
			this->panelClientModicate->Controls->Add(this->label9);
			this->panelClientModicate->Controls->Add(this->label8);
			this->panelClientModicate->Location = System::Drawing::Point(395, 184);
			this->panelClientModicate->Name = L"panelClientModicate";
			this->panelClientModicate->Size = System::Drawing::Size(315, 385);
			this->panelClientModicate->TabIndex = 11;
			// 
			// textBoxClientSupr
			// 
			this->textBoxClientSupr->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxClientSupr->Location = System::Drawing::Point(33, 273);
			this->textBoxClientSupr->Name = L"textBoxClientSupr";
			this->textBoxClientSupr->Size = System::Drawing::Size(257, 25);
			this->textBoxClientSupr->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(33, 243);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(150, 21);
			this->label11->TabIndex = 4;
			this->label11->Text = L"ID Client à Suprimer";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(98, 203);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 21);
			this->label10->TabIndex = 3;
			this->label10->Text = L"       Supression";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxIDClient
			// 
			this->textBoxIDClient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDClient->Location = System::Drawing::Point(33, 143);
			this->textBoxIDClient->Name = L"textBoxIDClient";
			this->textBoxIDClient->Size = System::Drawing::Size(257, 25);
			this->textBoxIDClient->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(33, 113);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 21);
			this->label9->TabIndex = 1;
			this->label9->Text = L"ID Client à Modifier";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Location = System::Drawing::Point(98, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 21);
			this->label8->TabIndex = 0;
			this->label8->Text = L"       Modification";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->textBoxAdressF);
			this->panel5->Controls->Add(this->textBoxAnniv);
			this->panel5->Controls->Add(this->textBoxAdressL);
			this->panel5->Controls->Add(this->textBoxAchat);
			this->panel5->Controls->Add(this->textBoxPrenom);
			this->panel5->Controls->Add(this->textBoxNom);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Location = System::Drawing::Point(50, 184);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(315, 385);
			this->panel5->TabIndex = 10;
			// 
			// textBoxAdressF
			// 
			this->textBoxAdressF->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdressF->Location = System::Drawing::Point(36, 269);
			this->textBoxAdressF->Name = L"textBoxAdressF";
			this->textBoxAdressF->Size = System::Drawing::Size(242, 22);
			this->textBoxAdressF->TabIndex = 11;
			// 
			// textBoxAnniv
			// 
			this->textBoxAnniv->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnniv->Location = System::Drawing::Point(36, 159);
			this->textBoxAnniv->Name = L"textBoxAnniv";
			this->textBoxAnniv->Size = System::Drawing::Size(242, 22);
			this->textBoxAnniv->TabIndex = 10;
			// 
			// textBoxAdressL
			// 
			this->textBoxAdressL->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdressL->Location = System::Drawing::Point(36, 324);
			this->textBoxAdressL->Name = L"textBoxAdressL";
			this->textBoxAdressL->Size = System::Drawing::Size(242, 22);
			this->textBoxAdressL->TabIndex = 9;
			// 
			// textBoxAchat
			// 
			this->textBoxAchat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAchat->Location = System::Drawing::Point(36, 214);
			this->textBoxAchat->Name = L"textBoxAchat";
			this->textBoxAchat->Size = System::Drawing::Size(242, 22);
			this->textBoxAchat->TabIndex = 8;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrenom->Location = System::Drawing::Point(36, 104);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(242, 22);
			this->textBoxPrenom->TabIndex = 7;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(36, 49);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(242, 22);
			this->textBoxNom->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(36, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 21);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Adresse de Livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 21);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Adresse de Facturation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(217, 21);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Date 1er Achat (AAAA-MM-JJ)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 21);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Date De Naissance (AAAA-MM-JJ)";
			this->label4->Click += gcnew System::EventHandler(this, &ClientForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 21);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nom";
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->ClientSize = System::Drawing::Size(758, 549);
			this->Controls->Add(this->panel1);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->panel1->ResumeLayout(false);
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panelClientModicate->ResumeLayout(false);
			this->panelClientModicate->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew DataViewer(login, "CLIENT"), sender, panel1);
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		login->c_getvalue(textBoxNom->Text, textBoxPrenom->Text, textBoxAnniv->Text, textBoxAchat->Text, textBoxAdressF->Text, textBoxAdressL->Text);
		login->createClient();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew ClientModificateForm(textBoxIDClient->Text, login), sender, panelClientModicate);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		login->deleteClient(textBoxClientSupr->Text);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		ParametreForm^ setingForm = gcnew ParametreForm(login);
		setingForm->ShowDialog();
	}
};
}
