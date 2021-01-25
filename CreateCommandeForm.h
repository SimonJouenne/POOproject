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
	/// Summary for CreateCommandeForm
	/// </summary>
	public ref class CreateCommandeForm : public System::Windows::Forms::Form
	{
	public:
		CreateCommandeForm(Login^ log)
		{
			InitializeComponent();
			login = log;
			//
			//TODO: Add the constructor code here
			//
		}
	protected: Login^ login;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateCommandeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxIDC;
	private: System::Windows::Forms::TextBox^ textBoxRef;
	private: System::Windows::Forms::TextBox^ textBoxmdpmt;
	private: System::Windows::Forms::TextBox^ textBoxmtpmt;
	private: System::Windows::Forms::TextBox^ textBoxdtpmt;
	private: System::Windows::Forms::TextBox^ textBoxdtsld;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxdtems;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxdtrliv;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateCommandeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRef = (gcnew System::Windows::Forms::TextBox());
			this->textBoxmdpmt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxmtpmt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdtpmt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdtsld = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxdtems = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxdtrliv = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(191, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Création d\'une Commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Reference Commande";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Reglement";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Mode de Payement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 21);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Montant (0 Lors de la Création)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 450);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Date de Solde (AAAA-MM-JJ)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(30, 385);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 21);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Date de Payement (AAAA-MM-JJ)";
			// 
			// textBoxIDC
			// 
			this->textBoxIDC->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxIDC->Location = System::Drawing::Point(30, 100);
			this->textBoxIDC->Name = L"textBoxIDC";
			this->textBoxIDC->Size = System::Drawing::Size(225, 23);
			this->textBoxIDC->TabIndex = 8;
			// 
			// textBoxRef
			// 
			this->textBoxRef->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRef->Location = System::Drawing::Point(30, 165);
			this->textBoxRef->Name = L"textBoxRef";
			this->textBoxRef->Size = System::Drawing::Size(225, 23);
			this->textBoxRef->TabIndex = 9;
			// 
			// textBoxmdpmt
			// 
			this->textBoxmdpmt->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxmdpmt->Location = System::Drawing::Point(30, 279);
			this->textBoxmdpmt->Name = L"textBoxmdpmt";
			this->textBoxmdpmt->Size = System::Drawing::Size(225, 23);
			this->textBoxmdpmt->TabIndex = 10;
			// 
			// textBoxmtpmt
			// 
			this->textBoxmtpmt->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxmtpmt->Location = System::Drawing::Point(30, 345);
			this->textBoxmtpmt->Name = L"textBoxmtpmt";
			this->textBoxmtpmt->Size = System::Drawing::Size(225, 23);
			this->textBoxmtpmt->TabIndex = 11;
			// 
			// textBoxdtpmt
			// 
			this->textBoxdtpmt->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtpmt->Location = System::Drawing::Point(30, 410);
			this->textBoxdtpmt->Name = L"textBoxdtpmt";
			this->textBoxdtpmt->Size = System::Drawing::Size(225, 23);
			this->textBoxdtpmt->TabIndex = 12;
			// 
			// textBoxdtsld
			// 
			this->textBoxdtsld->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtsld->Location = System::Drawing::Point(30, 475);
			this->textBoxdtsld->Name = L"textBoxdtsld";
			this->textBoxdtsld->Size = System::Drawing::Size(225, 23);
			this->textBoxdtsld->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(380, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 24);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Livraison";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(380, 140);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(217, 21);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Date Emission  (AAAA-MM-JJ)";
			// 
			// textBoxdtems
			// 
			this->textBoxdtems->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtems->Location = System::Drawing::Point(380, 165);
			this->textBoxdtems->Name = L"textBoxdtems";
			this->textBoxdtems->Size = System::Drawing::Size(225, 23);
			this->textBoxdtems->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(380, 215);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 21);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Date Livraison (AAAA-MM-JJ)";
			// 
			// textBoxdtrliv
			// 
			this->textBoxdtrliv->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxdtrliv->Location = System::Drawing::Point(380, 240);
			this->textBoxdtrliv->Name = L"textBoxdtrliv";
			this->textBoxdtrliv->Size = System::Drawing::Size(225, 23);
			this->textBoxdtrliv->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(380, 353);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(225, 80);
			this->button1->TabIndex = 19;
			this->button1->Text = L" Créer";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateCommandeForm::button1_Click);
			// 
			// CreateCommandeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 521);
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
			this->Controls->Add(this->textBoxRef);
			this->Controls->Add(this->textBoxIDC);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(650, 560);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(650, 560);
			this->Name = L"CreateCommandeForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Création de Commande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		login->cmd_getvalue(textBoxIDC->Text, textBoxRef->Text, textBoxmdpmt->Text, textBoxdtpmt->Text, textBoxmtpmt->Text, textBoxdtsld->Text, textBoxdtems->Text, textBoxdtrliv->Text);
		login->createCommande();
	}
};
}
