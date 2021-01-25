#pragma once
#include "Share.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ShareFonctionality;

	/// <summary>
	/// Summary for ClientModificateForm
	/// </summary>
	public ref class ClientModificateForm : public System::Windows::Forms::Form
	{
	public:
		ClientModificateForm(String^ id, Login^log)
		{
			InitializeComponent();
			this->log = log;
			idclient = id;
			recupvalue();
			//
			//TODO: Add the constructor code here
			//
		}
	protected: String^ idclient;
			 Login^ log;

	public: void recupvalue() {
		try
		{
			String^ constr = "Server=" + log->ip + ";Uid=" + log->id + ";Pwd=" + log->mdp + ";Database=" + log->Database;
			log->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT NOM_CLIENT , PRENOM_CLIENT , tmp.DATE , tmp2.DATE ,tmp3.ADRESSE , tmp4.ADRESSE  FROM CLIENT, DATE as tmp, DATE as tmp2, ADRESSE as tmp3, ADRESSE as tmp4 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATENAISSANCE AND tmp3.ID_ADRESSE=CLIENT.ID_ADRESSELIVRAISON AND tmp4.ID_ADRESSE=CLIENT.ID_ADRESSEFACTURATION AND ID_CLIENT='"+idclient+"'", log->con);
			MySqlDataReader^ dr;
			log->con->Open();
			dr = cmd->ExecuteReader();

			while (dr->Read()) {
				textBoxNom->Text = dr->GetString(0);
				textBoxPrenom->Text = dr->GetString(1);
				textBoxAnniv->Text = dr->GetString(2);
				textBoxAchat->Text = dr->GetString(3);
				textBoxAdressF->Text = dr->GetString(4);
				textBoxAdressL->Text = dr->GetString(5);
			}

			log->con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

		  void update() {
			  try
			  {
				  String^ constr = "Server=" + log->ip + ";Uid=" + log->id + ";Pwd=" + log->mdp + ";Database=" + log->Database;
				  log->con = gcnew MySqlConnection(constr);

				  MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','"+textBoxAdressF->Text+"' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + textBoxAdressF->Text + "')", log->con);
				  MySqlDataReader^ dr;
				  log->con->Open();
				  dr = cmd->ExecuteReader();
				  log->con->Close();

				  MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','" + textBoxAdressL->Text + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + textBoxAdressL->Text + "')", log->con);
				  log->con->Open();
				  dr = cmd1->ExecuteReader();
				  log->con->Close();

				  MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','"+textBoxAnniv->Text+"' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + textBoxAnniv->Text + "')", log->con);
				  log->con->Open();
				  dr = cmd2->ExecuteReader();
				  log->con->Close();

				  MySqlCommand^ cmd3 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','" + textBoxAchat->Text + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + textBoxAchat->Text + "')", log->con);
				  log->con->Open();
				  dr = cmd3->ExecuteReader();
				  log->con->Close();

				  MySqlCommand^ cmd4 = gcnew MySqlCommand("UPDATE CLIENT        Set ID_ADRESSELIVRAISON =(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE = '"+textBoxAdressL->Text+"'), ID_ADRESSEFACTURATION=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE = '"+textBoxAdressF->Text+"'), ID_DATENAISSANCE=(SELECT ID_DATE FROM DATE WHERE DATE = '"+textBoxAnniv->Text+"'), ID_DATE1ER=(SELECT ID_DATE FROM DATE WHERE DATE = '"+textBoxAchat->Text+"'),NOM_CLIENT = '"+textBoxNom->Text+"', PRENOM_CLIENT = '"+textBoxPrenom->Text+"' WHERE CLIENT.ID_CLIENT = '"+idclient+"'", log->con);
				  log->con->Open();
				  dr = cmd4->ExecuteReader();
				  log->con->Close();

			  }
			  catch (Exception^ex)
			  {
				  MessageBox::Show(ex->Message);
			  }
		  }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientModificateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxAdressF;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxAnniv;
	private: System::Windows::Forms::TextBox^ textBoxAdressL;
	private: System::Windows::Forms::TextBox^ textBoxAchat;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientModificateForm::typeid));
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxAdressF
			// 
			this->textBoxAdressF->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdressF->Location = System::Drawing::Point(40, 255);
			this->textBoxAdressF->Name = L"textBoxAdressF";
			this->textBoxAdressF->Size = System::Drawing::Size(242, 22);
			this->textBoxAdressF->TabIndex = 23;
			this->textBoxAdressF->TextChanged += gcnew System::EventHandler(this, &ClientModificateForm::textBoxAdressF_TextChanged);
			// 
			// textBoxAnniv
			// 
			this->textBoxAnniv->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnniv->Location = System::Drawing::Point(40, 145);
			this->textBoxAnniv->Name = L"textBoxAnniv";
			this->textBoxAnniv->Size = System::Drawing::Size(242, 22);
			this->textBoxAnniv->TabIndex = 22;
			this->textBoxAnniv->TextChanged += gcnew System::EventHandler(this, &ClientModificateForm::textBoxAnniv_TextChanged);
			// 
			// textBoxAdressL
			// 
			this->textBoxAdressL->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdressL->Location = System::Drawing::Point(40, 310);
			this->textBoxAdressL->Name = L"textBoxAdressL";
			this->textBoxAdressL->Size = System::Drawing::Size(242, 22);
			this->textBoxAdressL->TabIndex = 21;
			this->textBoxAdressL->TextChanged += gcnew System::EventHandler(this, &ClientModificateForm::textBoxAdressL_TextChanged);
			// 
			// textBoxAchat
			// 
			this->textBoxAchat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAchat->Location = System::Drawing::Point(40, 200);
			this->textBoxAchat->Name = L"textBoxAchat";
			this->textBoxAchat->Size = System::Drawing::Size(242, 22);
			this->textBoxAchat->TabIndex = 20;
			this->textBoxAchat->TextChanged += gcnew System::EventHandler(this, &ClientModificateForm::textBoxAchat_TextChanged);
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrenom->Location = System::Drawing::Point(40, 90);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(242, 22);
			this->textBoxPrenom->TabIndex = 19;
			this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &ClientModificateForm::textBoxPrenom_TextChanged);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(40, 35);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(242, 22);
			this->textBoxNom->TabIndex = 18;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &ClientModificateForm::textBoxNom_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 21);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Adresse de Livraison";
			this->label7->Click += gcnew System::EventHandler(this, &ClientModificateForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 21);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Adresse de Facturation";
			this->label6->Click += gcnew System::EventHandler(this, &ClientModificateForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(217, 21);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Date 1er Achat (AAAA-MM-JJ)";
			this->label5->Click += gcnew System::EventHandler(this, &ClientModificateForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 21);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Date De Naissance (AAAA-MM-JJ)";
			this->label4->Click += gcnew System::EventHandler(this, &ClientModificateForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Prénom";
			this->label3->Click += gcnew System::EventHandler(this, &ClientModificateForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nom";
			this->label2->Click += gcnew System::EventHandler(this, &ClientModificateForm::label2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(100, 347);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 35);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Confirmer";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ClientModificateForm::button1_Click);
			// 
			// ClientModificateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(317, 369);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxAdressF);
			this->Controls->Add(this->textBoxAnniv);
			this->Controls->Add(this->textBoxAdressL);
			this->Controls->Add(this->textBoxAchat);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"ClientModificateForm";
			this->Text = L"ClientModificateForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

















	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		update();
		MessageBox::Show("Client modifier !");
		this->Close();
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxPrenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxAdressF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxAnniv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxAchat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxAdressL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
