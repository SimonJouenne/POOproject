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
	/// Summary for CreateLotForm
	/// </summary>
	public ref class CreateLotForm : public System::Windows::Forms::Form
	{
	public:
		CreateLotForm(Login^ log)
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
		~CreateLotForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: Login^ login;
	private: System::Windows::Forms::TextBox^ textBoxTaille;
	private: System::Windows::Forms::TextBox^ textBoxPrix;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textBoxCouleur;

	private: System::Windows::Forms::TextBox^ textBoxID;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBoxTaille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrix = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxTaille
			// 
			this->textBoxTaille->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTaille->Location = System::Drawing::Point(34, 183);
			this->textBoxTaille->Name = L"textBoxTaille";
			this->textBoxTaille->Size = System::Drawing::Size(242, 22);
			this->textBoxTaille->TabIndex = 34;
			// 
			// textBoxPrix
			// 
			this->textBoxPrix->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrix->Location = System::Drawing::Point(34, 238);
			this->textBoxPrix->Name = L"textBoxPrix";
			this->textBoxPrix->Size = System::Drawing::Size(242, 22);
			this->textBoxPrix->TabIndex = 32;
			// 
			// textBoxCouleur
			// 
			this->textBoxCouleur->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCouleur->Location = System::Drawing::Point(34, 128);
			this->textBoxCouleur->Name = L"textBoxCouleur";
			this->textBoxCouleur->Size = System::Drawing::Size(242, 22);
			this->textBoxCouleur->TabIndex = 31;
			// 
			// textBoxID
			// 
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxID->Location = System::Drawing::Point(34, 73);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(242, 22);
			this->textBoxID->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 21);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Prix HT du Lot";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 21);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Nombre d\'Article dans le Lot";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 21);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Couleur des Articles";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 24;
			this->label2->Text = L"ID Article";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(101, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 36);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Créer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateLotForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 21);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Création d\'un Lot";
			// 
			// CreateLotForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(299, 339);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxTaille);
			this->Controls->Add(this->textBoxPrix);
			this->Controls->Add(this->textBoxCouleur);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"CreateLotForm";
			this->Text = L"CreateLotForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		login->createLot(textBoxID->Text, textBoxCouleur->Text, textBoxTaille->Text, textBoxPrix->Text);
		this->Close();
	}
};
}
