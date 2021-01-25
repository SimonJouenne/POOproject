#pragma once
#include "Share.h"
#include "DataViewer.h"
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
	/// Summary for StatForm
	/// </summary>
	public ref class StatForm : public System::Windows::Forms::Form
	{
	public:
		StatForm(Login^ log)
		{
			InitializeComponent();
			login = log;

			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ buttonREQUETE9;

	private: System::Windows::Forms::Button^ buttonREQUETE7;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ buttonREQUETE5;


	private: System::Windows::Forms::Button^ buttonREQUETE4;

	private: System::Windows::Forms::Button^ buttonREQUETE3;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ buttonREQUETE1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBoxMois;
	private: System::Windows::Forms::TextBox^ textBoxREQUETE4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected: Login^ login;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public:Form^ activeForm;
		  void OpenChildForm(Form^ childForm, Object^ sender, Panel^ panel) {
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StatForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxREQUETE4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMois = (gcnew System::Windows::Forms::TextBox());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonREQUETE9 = (gcnew System::Windows::Forms::Button());
			this->buttonREQUETE7 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->buttonREQUETE5 = (gcnew System::Windows::Forms::Button());
			this->buttonREQUETE4 = (gcnew System::Windows::Forms::Button());
			this->buttonREQUETE3 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonREQUETE1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->textBoxREQUETE4);
			this->panel1->Controls->Add(this->textBoxMois);
			this->panel1->Controls->Add(this->panelTop);
			this->panel1->Controls->Add(this->buttonREQUETE9);
			this->panel1->Controls->Add(this->buttonREQUETE7);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->buttonREQUETE5);
			this->panel1->Controls->Add(this->buttonREQUETE4);
			this->panel1->Controls->Add(this->buttonREQUETE3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->buttonREQUETE1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 547);
			this->panel1->TabIndex = 0;
			// 
			// textBoxREQUETE4
			// 
			this->textBoxREQUETE4->Location = System::Drawing::Point(72, 206);
			this->textBoxREQUETE4->Name = L"textBoxREQUETE4";
			this->textBoxREQUETE4->Size = System::Drawing::Size(127, 20);
			this->textBoxREQUETE4->TabIndex = 25;
			// 
			// textBoxMois
			// 
			this->textBoxMois->Location = System::Drawing::Point(295, 110);
			this->textBoxMois->Name = L"textBoxMois";
			this->textBoxMois->Size = System::Drawing::Size(127, 20);
			this->textBoxMois->TabIndex = 24;
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
			this->panelTop->TabIndex = 13;
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
			this->button9->Click += gcnew System::EventHandler(this, &StatForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Statistique";
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
			// buttonREQUETE9
			// 
			this->buttonREQUETE9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonREQUETE9->FlatAppearance->BorderSize = 0;
			this->buttonREQUETE9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonREQUETE9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonREQUETE9->ForeColor = System::Drawing::Color::White;
			this->buttonREQUETE9->Location = System::Drawing::Point(295, 320);
			this->buttonREQUETE9->Name = L"buttonREQUETE9";
			this->buttonREQUETE9->Size = System::Drawing::Size(127, 38);
			this->buttonREQUETE9->TabIndex = 22;
			this->buttonREQUETE9->Text = L"REQUETE 8";
			this->buttonREQUETE9->UseVisualStyleBackColor = false;
			this->buttonREQUETE9->Click += gcnew System::EventHandler(this, &StatForm::buttonREQUETE9_Click);
			// 
			// buttonREQUETE7
			// 
			this->buttonREQUETE7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonREQUETE7->FlatAppearance->BorderSize = 0;
			this->buttonREQUETE7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonREQUETE7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonREQUETE7->ForeColor = System::Drawing::Color::White;
			this->buttonREQUETE7->Location = System::Drawing::Point(72, 320);
			this->buttonREQUETE7->Name = L"buttonREQUETE7";
			this->buttonREQUETE7->Size = System::Drawing::Size(127, 38);
			this->buttonREQUETE7->TabIndex = 21;
			this->buttonREQUETE7->Text = L"REQUETE 7";
			this->buttonREQUETE7->UseVisualStyleBackColor = false;
			this->buttonREQUETE7->Click += gcnew System::EventHandler(this, &StatForm::buttonREQUETE7_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(524, 232);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(127, 38);
			this->button7->TabIndex = 20;
			this->button7->Text = L"REQUETE 6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &StatForm::button7_Click);
			// 
			// buttonREQUETE5
			// 
			this->buttonREQUETE5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonREQUETE5->FlatAppearance->BorderSize = 0;
			this->buttonREQUETE5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonREQUETE5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonREQUETE5->ForeColor = System::Drawing::Color::White;
			this->buttonREQUETE5->Location = System::Drawing::Point(295, 232);
			this->buttonREQUETE5->Name = L"buttonREQUETE5";
			this->buttonREQUETE5->Size = System::Drawing::Size(127, 38);
			this->buttonREQUETE5->TabIndex = 19;
			this->buttonREQUETE5->Text = L"REQUETE 5";
			this->buttonREQUETE5->UseVisualStyleBackColor = false;
			this->buttonREQUETE5->Click += gcnew System::EventHandler(this, &StatForm::buttonREQUETE5_Click);
			// 
			// buttonREQUETE4
			// 
			this->buttonREQUETE4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonREQUETE4->FlatAppearance->BorderSize = 0;
			this->buttonREQUETE4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonREQUETE4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonREQUETE4->ForeColor = System::Drawing::Color::White;
			this->buttonREQUETE4->Location = System::Drawing::Point(72, 232);
			this->buttonREQUETE4->Name = L"buttonREQUETE4";
			this->buttonREQUETE4->Size = System::Drawing::Size(127, 38);
			this->buttonREQUETE4->TabIndex = 18;
			this->buttonREQUETE4->Text = L"REQUETE 4";
			this->buttonREQUETE4->UseVisualStyleBackColor = false;
			this->buttonREQUETE4->Click += gcnew System::EventHandler(this, &StatForm::buttonREQUETE4_Click);
			// 
			// buttonREQUETE3
			// 
			this->buttonREQUETE3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonREQUETE3->FlatAppearance->BorderSize = 0;
			this->buttonREQUETE3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonREQUETE3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonREQUETE3->ForeColor = System::Drawing::Color::White;
			this->buttonREQUETE3->Location = System::Drawing::Point(524, 136);
			this->buttonREQUETE3->Name = L"buttonREQUETE3";
			this->buttonREQUETE3->Size = System::Drawing::Size(127, 38);
			this->buttonREQUETE3->TabIndex = 17;
			this->buttonREQUETE3->Text = L"REQUETE 3";
			this->buttonREQUETE3->UseVisualStyleBackColor = false;
			this->buttonREQUETE3->Click += gcnew System::EventHandler(this, &StatForm::buttonREQUETE3_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(295, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 38);
			this->button3->TabIndex = 16;
			this->button3->Text = L"REQUETE 2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StatForm::button3_Click);
			// 
			// buttonREQUETE1
			// 
			this->buttonREQUETE1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->buttonREQUETE1->FlatAppearance->BorderSize = 0;
			this->buttonREQUETE1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonREQUETE1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonREQUETE1->ForeColor = System::Drawing::Color::White;
			this->buttonREQUETE1->Location = System::Drawing::Point(72, 136);
			this->buttonREQUETE1->Name = L"buttonREQUETE1";
			this->buttonREQUETE1->Size = System::Drawing::Size(127, 38);
			this->buttonREQUETE1->TabIndex = 15;
			this->buttonREQUETE1->Text = L"REQUETE 1";
			this->buttonREQUETE1->UseVisualStyleBackColor = false;
			this->buttonREQUETE1->Click += gcnew System::EventHandler(this, &StatForm::buttonREQUETE1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel2->Location = System::Drawing::Point(0, 346);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(7, 50);
			this->panel2->TabIndex = 14;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 374);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(758, 173);
			this->richTextBox1->TabIndex = 26;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// StatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->ClientSize = System::Drawing::Size(758, 547);
			this->Controls->Add(this->panel1);
			this->Name = L"StatForm";
			this->Text = L"StatForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	 
	private: System::Void buttonREQUETE1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server="+ login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database="+login->Database;
			login->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT AVG(PRIX_TTC_COMMANDE) FROM COMMANDE", login->con);
			MySqlDataReader^ dr;
			login->con->Open();
			dr = cmd->ExecuteReader();
			dr->Read();
			String^ result = dr->GetString(0);

			login->con->Close();

			MessageBox::Show(result + " €", "Valeur Moyenne d'une Commande");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void buttonREQUETE3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew DataViewer(login, "REQUETE3"), sender, panel1);
	}
	private: System::Void buttonREQUETE7_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
			login->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT SUM(ARTICLE.PRIX_HT_ARTICLE*ARTICLE.QUANTITE_STOCK_ARTICLE) FROM ARTICLE", login->con);
			MySqlDataReader^ dr;
			login->con->Open();
			dr = cmd->ExecuteReader();
			dr->Read();
			String^ result = dr->GetString(0);

			login->con->Close();

			MessageBox::Show(result + " €", "Valeur Commercial du Stock");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		ParametreForm^ setingForm = gcnew ParametreForm(login);
		setingForm->ShowDialog();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
			login->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT SUM(PRIX_TTC_COMMANDE) FROM COMMANDE INNER JOIN DATE ON COMMANDE.ID_DATEEMMISSION =DATE.ID_DATE WHERE MONTH(DATE.DATE)='"+textBoxMois->Text+"'", login->con);
			MySqlDataReader^ dr;
			login->con->Open();
			dr = cmd->ExecuteReader();
			dr->Read();
			String^ result = dr->GetString(0);

			login->con->Close();

			MessageBox::Show(result + " €", "Chiffre d'Affaire sur le Mois Demandé");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void buttonREQUETE4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
			login->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT SUM(COMMANDE.PRIX_TTC_COMMANDE) FROM COMMANDE INNER JOIN CLIENT ON COMMANDE.ID_CLIENT = CLIENT.ID_CLIENT WHERE CLIENT.ID_CLIENT = '"+textBoxREQUETE4->Text+"'", login->con);
			MySqlDataReader^ dr;
			login->con->Open();
			dr = cmd->ExecuteReader();
			dr->Read();
			String^ result = dr->GetString(0);

			login->con->Close();

			MessageBox::Show(result + " €", "Montant totale d'achat du Client");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void buttonREQUETE5_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew DataViewer(login, "REQUETE5"), sender, panel1);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenChildForm(gcnew DataViewer(login, "REQUETE6"), sender, panel1);
	}
	private: System::Void buttonREQUETE9_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
			login->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT SUM(ARTICLE.PRIX_HT_ARTICLE*ARTICLE.QUANTITE_STOCK_ARTICLE *(TVA.TAUX_TVA+1)) FROM ARTICLE, TVA WHERE ARTICLE.ID_TVA = TVA.ID_TVA", login->con);
			MySqlDataReader^ dr;
			login->con->Open();
			dr = cmd->ExecuteReader();
			dr->Read();
			String^ result = dr->GetString(0);

			login->con->Close();

			MessageBox::Show(result + " €", "Valeur D'Achat du Stock");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
