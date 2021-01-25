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
	/// Summary for CommandeModificateForm
	/// </summary>
	public ref class CommandeModificateForm : public System::Windows::Forms::Form
	{
	public:
		CommandeModificateForm(Login^log, String^ idc)
		{
			InitializeComponent();
			this->idc = idc;
			login = log;
			recupvalue();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		Login^ login;
		String^ idc;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CommandeModificateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: void recupvalue() {
		try
		{
			String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
			login->con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT ID_CLIENT  ,MODE_REGLEMENT.NOM_MODEREGLE,REGLEMENT.MONTANT_REGLEMENT,DATELIVR.DATE , DATEEMIS.DATE , DATEPAY.DATE , DATEREGL.DATE  FROM COMMANDE LEFT JOIN DATE AS DATELIVR ON COMMANDE.ID_DATELIVRAISON=DATELIVR.ID_DATE LEFT JOIN DATE AS DATEEMIS ON COMMANDE.ID_DATEEMMISSION=DATEEMIS.ID_DATE LEFT JOIN DATE AS DATEPAY ON COMMANDE.ID_DATEDESOLDE=DATEPAY.ID_DATE LEFT JOIN REGLEMENT ON COMMANDE.ID_REGLEMENT=REGLEMENT.ID_REGLEMENT LEFT JOIN MODE_REGLEMENT ON MODE_REGLEMENT.ID_MODEREGLE=REGLEMENT.ID_MODEREGLE LEFT JOIN DATE AS DATEREGL ON REGLEMENT.ID_DATEREGLE=DATEREGL.ID_DATE WHERE ID_COMMANDE='"+idc+"'", login->con);
			MySqlDataReader^ dr;
			login->con->Open();
			dr = cmd->ExecuteReader();

			while (dr->Read()) {
				textBoxIDC->Text = dr->GetString(0);
				textBoxmdpmt->Text = dr->GetString(1);
				textBoxmtpmt->Text = dr->GetString(2);
				textBoxdtrliv->Text = dr->GetString(3);
				textBoxdtems->Text = dr->GetString(4);
				textBoxdtsld->Text = dr->GetString(5);
				textBoxdtpmt->Text = dr->GetString(6);
			}

			login->con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		  void update() {
			  try
			  {
				  String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
				  login->con = gcnew MySqlConnection(constr);

				  MySqlCommand^ cmd = gcnew MySqlCommand("call update_reglement('"+ textBoxmdpmt->Text +"','"+ textBoxmtpmt->Text +"','"+ textBoxdtpmt->Text +"','"+ textBoxIDC->Text +"','"+ textBoxdtrliv->Text +"','"+ textBoxdtems->Text +"','"+ textBoxdtsld->Text +"','"+idc+"')", login->con);
				  MySqlDataReader^ dr;
				  login->con->Open();
				  dr = cmd->ExecuteReader();
				  login->con->Close();


			  }
			  catch (Exception^ ex)
			  {
				  MessageBox::Show(ex->Message);
			  }
		  }
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxdtrliv;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxdtems;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxdtsld;
	private: System::Windows::Forms::TextBox^ textBoxdtpmt;
	private: System::Windows::Forms::TextBox^ textBoxmtpmt;
	private: System::Windows::Forms::TextBox^ textBoxmdpmt;

	private: System::Windows::Forms::TextBox^ textBoxIDC;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CommandeModificateForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxdtrliv = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxdtems = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxdtsld = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdtpmt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxmtpmt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxmdpmt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDC = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(375, 351);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(225, 80);
			this->button1->TabIndex = 39;
			this->button1->Text = L" Modifier";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CommandeModificateForm::button1_Click);
			// 
			// textBoxdtrliv
			// 
			this->textBoxdtrliv->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtrliv->Location = System::Drawing::Point(375, 238);
			this->textBoxdtrliv->Name = L"textBoxdtrliv";
			this->textBoxdtrliv->Size = System::Drawing::Size(225, 23);
			this->textBoxdtrliv->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(375, 213);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 21);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Date Livraison (AAAA-MM-JJ)";
			// 
			// textBoxdtems
			// 
			this->textBoxdtems->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtems->Location = System::Drawing::Point(375, 163);
			this->textBoxdtems->Name = L"textBoxdtems";
			this->textBoxdtems->Size = System::Drawing::Size(225, 23);
			this->textBoxdtems->TabIndex = 36;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(375, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(217, 21);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Date Emission  (AAAA-MM-JJ)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(375, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 24);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Livraison";
			// 
			// textBoxdtsld
			// 
			this->textBoxdtsld->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtsld->Location = System::Drawing::Point(25, 407);
			this->textBoxdtsld->Name = L"textBoxdtsld";
			this->textBoxdtsld->Size = System::Drawing::Size(225, 23);
			this->textBoxdtsld->TabIndex = 33;
			// 
			// textBoxdtpmt
			// 
			this->textBoxdtpmt->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtpmt->Location = System::Drawing::Point(25, 342);
			this->textBoxdtpmt->Name = L"textBoxdtpmt";
			this->textBoxdtpmt->Size = System::Drawing::Size(225, 23);
			this->textBoxdtpmt->TabIndex = 32;
			// 
			// textBoxmtpmt
			// 
			this->textBoxmtpmt->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxmtpmt->Location = System::Drawing::Point(25, 277);
			this->textBoxmtpmt->Name = L"textBoxmtpmt";
			this->textBoxmtpmt->Size = System::Drawing::Size(225, 23);
			this->textBoxmtpmt->TabIndex = 31;
			// 
			// textBoxmdpmt
			// 
			this->textBoxmdpmt->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxmdpmt->Location = System::Drawing::Point(25, 211);
			this->textBoxmdpmt->Name = L"textBoxmdpmt";
			this->textBoxmdpmt->Size = System::Drawing::Size(225, 23);
			this->textBoxmdpmt->TabIndex = 30;
			// 
			// textBoxIDC
			// 
			this->textBoxIDC->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDC->Location = System::Drawing::Point(25, 98);
			this->textBoxIDC->Name = L"textBoxIDC";
			this->textBoxIDC->Size = System::Drawing::Size(225, 23);
			this->textBoxIDC->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(25, 317);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 21);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Date de Payement (AAAA-MM-JJ)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(25, 382);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 21);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Date de Solde (AAAA-MM-JJ)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 252);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 21);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Montant (0 Lors de la Création)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 21);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Mode de Payement";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 24);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Reglement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 21);
			this->label2->TabIndex = 21;
			this->label2->Text = L"ID Client";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(186, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 30);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Modification d\'une Commande";
			// 
			// CommandeModificateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxdtrliv);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBoxdtems);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxdtsld);
			this->Controls->Add(this->textBoxdtpmt);
			this->Controls->Add(this->textBoxmtpmt);
			this->Controls->Add(this->textBoxmdpmt);
			this->Controls->Add(this->textBoxIDC);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(650, 500);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(650, 500);
			this->Name = L"CommandeModificateForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CommandeModificateForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		update();
		MessageBox::Show("Commande modifier !");
		this->Close();
	}
};
}
