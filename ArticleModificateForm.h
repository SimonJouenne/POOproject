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
	/// Summary for ArticleModificateForm
	/// </summary>
	public ref class ArticleModificateForm : public System::Windows::Forms::Form
	{
	public:
		ArticleModificateForm(String^ id, Login^ log)
		{
			InitializeComponent();
			this->log = log;
			idarticle = id;
			recupvalue();
			//
			//TODO: Add the constructor code here
			//
		}
	protected: String^ idarticle;
			 Login^ log;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArticleModificateForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: void recupvalue() {
		try
		{
			String^ constr = "Server=" + log->ip + ";Uid=" + log->id + ";Pwd=" + log->mdp + ";Database=" + log->Database;
			log->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT NOM_ARTICLE,NATURE.ID_NATURE, PRIX_HT_ARTICLE, TAUX_TVA , QUANTITE_STOCK_ARTICLE ,SEUIL_REAPPROVISIONEMENT_ARTICLE FROM ARTICLE,TVA,NATURE WHERE TVA.ID_TVA=ARTICLE.ID_TVA AND NATURE.ID_NATURE=ARTICLE.ID_NATURE AND ID_ARTICLE='"+idarticle+"'", log->con);
			MySqlDataReader^ dr;
			log->con->Open();
			dr = cmd->ExecuteReader();

			while (dr->Read()) {
				textBoxNom->Text = dr->GetString(0);
				textBoxIDType->Text = dr->GetString(1);
				textBoxprix->Text = dr->GetString(2);
				textBoxTVA->Text = dr->GetString(3);
				textBoxQuantité->Text = dr->GetString(4);
				textBoxSeuil->Text = dr->GetString(5);
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

				  MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE ARTICLE SET ID_TVA=(SELECT ID_TVA FROM TVA WHERE TAUX_TVA ='" + textBoxTVA->Text + "'),ID_NATURE=(SELECT ID_NATURE FROM NATURE WHERE NATURE.ID_NATURE='" + textBoxIDType->Text + "'),NOM_ARTICLE='" + textBoxNom->Text + "',QUANTITE_STOCK_ARTICLE='" + textBoxQuantité->Text + "',SEUIL_REAPPROVISIONEMENT_ARTICLE='" + textBoxSeuil->Text + "',PRIX_HT_ARTICLE='" + textBoxprix->Text + "' WHERE ID_ARTICLE='" + idarticle + "'", log->con);
				  MySqlDataReader^ dr;
				  log->con->Open();
				  dr = cmd->ExecuteReader();
				  log->con->Close();


			  }
			  catch (Exception^ ex)
			  {
				  MessageBox::Show(ex->Message);
			  }
		  }
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxQuantité;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxprix;
	private: System::Windows::Forms::TextBox^ textBoxSeuil;


	private: System::Windows::Forms::TextBox^ textBoxTVA;

	private: System::Windows::Forms::TextBox^ textBoxIDType;

	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArticleModificateForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxQuantité = (gcnew System::Windows::Forms::TextBox());
			this->textBoxprix = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeuil = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(94, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 35);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Confirmer";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ArticleModificateForm::button1_Click);
			// 
			// textBoxQuantité
			// 
			this->textBoxQuantité->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQuantité->Location = System::Drawing::Point(34, 253);
			this->textBoxQuantité->Name = L"textBoxQuantité";
			this->textBoxQuantité->Size = System::Drawing::Size(242, 22);
			this->textBoxQuantité->TabIndex = 36;
			// 
			// textBoxprix
			// 
			this->textBoxprix->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxprix->Location = System::Drawing::Point(34, 143);
			this->textBoxprix->Name = L"textBoxprix";
			this->textBoxprix->Size = System::Drawing::Size(242, 22);
			this->textBoxprix->TabIndex = 35;
			// 
			// textBoxSeuil
			// 
			this->textBoxSeuil->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSeuil->Location = System::Drawing::Point(34, 308);
			this->textBoxSeuil->Name = L"textBoxSeuil";
			this->textBoxSeuil->Size = System::Drawing::Size(242, 22);
			this->textBoxSeuil->TabIndex = 34;
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTVA->Location = System::Drawing::Point(34, 198);
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(242, 22);
			this->textBoxTVA->TabIndex = 33;
			// 
			// textBoxIDType
			// 
			this->textBoxIDType->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDType->Location = System::Drawing::Point(34, 88);
			this->textBoxIDType->Name = L"textBoxIDType";
			this->textBoxIDType->Size = System::Drawing::Size(242, 22);
			this->textBoxIDType->TabIndex = 32;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(34, 33);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(242, 22);
			this->textBoxNom->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(34, 283);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(238, 21);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Seuil Mini de Réaprovisionement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(34, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 21);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Quantité Article Stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 21);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Taux TVA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 21);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Prix HT Unitaire";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 21);
			this->label3->TabIndex = 26;
			this->label3->Text = L"ID Type d\'Article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Nom";
			// 
			// ArticleModificateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(317, 390);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxQuantité);
			this->Controls->Add(this->textBoxprix);
			this->Controls->Add(this->textBoxSeuil);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->textBoxIDType);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"ArticleModificateForm";
			this->Text = L"ArticleModificateForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		update();
		MessageBox::Show("Article Modifié");
		this->Close();
	}
};
}
