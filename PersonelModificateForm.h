#pragma once
#include "Share.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace ShareFonctionality;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PersonelModificateForm
	/// </summary>
	public ref class PersonelModificateForm : public System::Windows::Forms::Form
	{
	public:
		PersonelModificateForm(String^ id, Login^ log)
		{
			InitializeComponent();
			this->log = log;
			idpersonnel = id;
			recupvalue();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PersonelModificateForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: String^ idpersonnel;
			 Login^ log;

	public: void recupvalue() {
		try
		{
			String^ constr = "Server=" + log->ip + ";Uid=" + log->id + ";Pwd=" + log->mdp + ";Database=" + log->Database;
			log->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT NOM_PERSONNEL , PRENOM_PERSONNEL, DATE ,ADRESSE, ID_SUPERIEUR FROM PERSONNEL, DATE , ADRESSE WHERE PERSONNEL.ID_PERSONNEL='"+idpersonnel+"' AND DATE.ID_DATE=PERSONNEL.ID_DATEENBAUCHE AND ADRESSE.ID_ADRESSE=PERSONNEL.ID_ADRESSEP", log->con);
			MySqlDataReader^ dr;
			log->con->Open();
			dr = cmd->ExecuteReader();

			while (dr->Read()) {
				textBoxNom->Text = dr->GetString(0);
				textBoxPrenom->Text = dr->GetString(1);
				textBoxDate->Text = dr->GetString(2);
				textBoxAdresse->Text = dr->GetString(3);
				textBoxSupID->Text = dr->GetString(4);
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

				  MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','" + textBoxAdresse->Text + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + textBoxAdresse->Text + "')", log->con);
				  MySqlDataReader^ dr;
				  log->con->Open();
				  dr = cmd->ExecuteReader();
				  log->con->Close();


				  MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','" + textBoxDate->Text + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + textBoxDate->Text + "')", log->con);
				  log->con->Open();
				  dr = cmd2->ExecuteReader();
				  log->con->Close();


				  MySqlCommand^ cmd4 = gcnew MySqlCommand("UPDATE PERSONNEL SET ID_ADRESSEP = (SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE = '"+ textBoxAdresse->Text +"'),ID_SUPERIEUR='"+textBoxSupID->Text+"', ID_DATEENBAUCHE = (SELECT ID_DATE FROM DATE WHERE DATE = '"+textBoxDate->Text+"'), NOM_PERSONNEL = '"+textBoxNom->Text+"', PRENOM_PERSONNEL = '"+textBoxPrenom->Text+"' WHERE PERSONNEL.ID_PERSONNEL = '"+idpersonnel+"'", log->con);
				  log->con->Open();
				  dr = cmd4->ExecuteReader();
				  log->con->Close();

			  }
			  catch (Exception^ ex)
			  {
				  MessageBox::Show(ex->Message);
			  }
		  }
	private: System::Windows::Forms::TextBox^ textBoxSupID;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxDate;
	private: System::Windows::Forms::TextBox^ textBoxAdresse;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonelModificateForm::typeid));
			this->textBoxSupID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresse = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxSupID
			// 
			this->textBoxSupID->Location = System::Drawing::Point(25, 255);
			this->textBoxSupID->Name = L"textBoxSupID";
			this->textBoxSupID->Size = System::Drawing::Size(242, 20);
			this->textBoxSupID->TabIndex = 19;
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(25, 200);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(242, 20);
			this->textBoxDate->TabIndex = 18;
			// 
			// textBoxAdresse
			// 
			this->textBoxAdresse->Location = System::Drawing::Point(25, 145);
			this->textBoxAdresse->Name = L"textBoxAdresse";
			this->textBoxAdresse->Size = System::Drawing::Size(242, 20);
			this->textBoxAdresse->TabIndex = 17;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(25, 90);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(242, 20);
			this->textBoxPrenom->TabIndex = 16;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(25, 35);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(242, 20);
			this->textBoxNom->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 21);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Adresse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 21);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Date D\'embauche";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"ID Supérieur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 21);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 21);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Prénom";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(79, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 35);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Confirmer";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PersonelModificateForm::button1_Click);
			// 
			// PersonelModificateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(299, 339);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxSupID);
			this->Controls->Add(this->textBoxDate);
			this->Controls->Add(this->textBoxAdresse);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"PersonelModificateForm";
			this->Text = L"PersonelModificateForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		update();
		MessageBox::Show("Personnel Modifié");
		this->Close();
	}
};
}
