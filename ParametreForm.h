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
	/// Summary for ParametreForm
	/// </summary>
	public ref class ParametreForm : public System::Windows::Forms::Form
	{
	public:
		ParametreForm(Login^ log)
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
		~ParametreForm()
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
	private: System::Windows::Forms::TextBox^ textBoxIP;
	private: System::Windows::Forms::TextBox^ textBoxDB;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonConfirm;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ParametreForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Paramètres";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"IP Serveur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Base De Donnée";
			// 
			// textBoxIP
			// 
			this->textBoxIP->Location = System::Drawing::Point(40, 115);
			this->textBoxIP->Name = L"textBoxIP";
			this->textBoxIP->Size = System::Drawing::Size(190, 20);
			this->textBoxIP->TabIndex = 3;
			// 
			// textBoxDB
			// 
			this->textBoxDB->Location = System::Drawing::Point(40, 215);
			this->textBoxDB->Name = L"textBoxDB";
			this->textBoxDB->Size = System::Drawing::Size(190, 20);
			this->textBoxDB->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Par Default (51.75.246.94)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 15);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Par Default (POO Project)";
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->FlatAppearance->BorderSize = 0;
			this->buttonConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConfirm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonConfirm.Image")));
			this->buttonConfirm->Location = System::Drawing::Point(85, 290);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->buttonConfirm->Size = System::Drawing::Size(110, 40);
			this->buttonConfirm->TabIndex = 7;
			this->buttonConfirm->Text = L"  Confirmer";
			this->buttonConfirm->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &ParametreForm::buttonConfirm_Click);
			// 
			// ParametreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(284, 361);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxDB);
			this->Controls->Add(this->textBoxIP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(300, 400);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(300, 400);
			this->Name = L"ParametreForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Paramètres";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		login->ip = textBoxIP->Text;
		login->Database = textBoxDB->Text;
		MessageBox::Show("Paramètres Sauvegardés");
		this->Close();
	}
};
}
