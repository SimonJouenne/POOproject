#pragma once

#include "Share.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace ShareFonctionality;

	/// <summary>
	/// Summary for DataViewer
	/// </summary>
	public ref class DataViewer : public System::Windows::Forms::Form
	{
	public:
		DataViewer(Login^ log, String^ table)
		{
			InitializeComponent();
			login = log;
			this->table = table;
			TableCreate();
			//
			//TODO: Add the constructor code here
			//
		}
	protected: Login^ login;
	protected: String^ table;

	public:Form^ activeForm;
		  void OpenChildForm(Form^childForm, Object^ sender) {
			  if (this->activeForm != nullptr)
			  {
				  this->activeForm->Close();
			  }
			  
			  this->activeForm = childForm;
			  childForm->TopLevel = false;
			  childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			  childForm->Dock = DockStyle::Fill;
			  panel1->Controls->Add(childForm);
			  panel1->Tag = childForm;
			  childForm->BringToFront();
			  childForm->Show();

		  }
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;

	public:

	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DataViewer()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: void TableCreate() {
		/*System::Object^ data = dataGridView1->DataSource;
		BindingSource^ bd = bindingSource1;
		Object^ dbd = bindingSource1->DataSource;
		login->connect(data, bd, dbd);
		MessageBox::Show("Slt");*/
		String^ constr = "Server=" + login->ip + ";Uid=" + login->id + ";Pwd=" + login->mdp + ";Database=" + login->Database;
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		if (this->table == "CLIENT")
		{
			MySqlDataAdapter^ sda= gcnew MySqlDataAdapter("SELECT NOM_CLIENT as Nom, PRENOM_CLIENT as Prenom, tmp.DATE as 1erLivraison, tmp2.DATE as Anniversaire,tmp3.ADRESSE as AdresseLivraison, tmp4.ADRESSE as AdresseFacturation FROM CLIENT, DATE as tmp, DATE as tmp2, ADRESSE as tmp3, ADRESSE as tmp4 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATENAISSANCE AND tmp3.ID_ADRESSE=CLIENT.ID_ADRESSELIVRAISON AND tmp4.ID_ADRESSE=CLIENT.ID_ADRESSEFACTURATION ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		else if (this->table == "PERSONNEL")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_PERSONNEL as NumPersonnel,NOM_PERSONNEL as Nom, PRENOM_PERSONNEL as Prenom, DATE as DateEmbauche,ADRESSE as Adresse FROM PERSONNEL, DATE , ADRESSE WHERE DATE.ID_DATE=PERSONNEL.ID_DATEENBAUCHE AND ADRESSE.ID_ADRESSE=PERSONNEL.ID_ADRESSEP ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;

		}
		else if (this->table == "ARTICLE")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ARTICLE.ID_ARTICLE as NumArticle, NATURE.NOM_NATURE as TypeArticle, NOM_ARTICLE as Designation,QUANTITE_STOCK_ARTICLE as Stock,SEUIL_REAPPROVISIONEMENT_ARTICLE as SeuilRea, PRIX_HT_ARTICLE as PrixHT, TAUX_TVA as TVA FROM ARTICLE,TVA,NATURE WHERE TVA.ID_TVA=ARTICLE.ID_TVA AND NATURE.ID_NATURE=ARTICLE.ID_NATURE ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;

		}
		else if (this->table == "LOT")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_TARIF as NumLots, NOM_ARTICLE as NomArticle, NOM_COULEUR as Couleur, TAILLE_LOTS_TARIF as QuantitéeArticle, PRIX_TARIF as PrixDuLot FROM TARIF, ARTICLE, COULEUR WHERE ARTICLE.ID_ARTICLE=TARIF.ID_ARTICLE AND COULEUR.ID_COULEUR=TARIF.ID_COULEUR ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		else if (this->table == "COMMANDE")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_COMMANDE,REFERENCE_COMMANDE AS REF ,DATELIVR.DATE as LivréLe, DATEEMIS.DATE as EmisLe, DATEPAY.DATE as PayéLe,  REGLEMENT.MONTANT_REGLEMENT as Montant, DATEREGL.DATE as RégléLe,PRIX_HT_COMMANDE as PrixHT, PRIX_TVA_COMMANDE as PrixTVA, PRIX_TTC_COMMANDE as PrixTTC FROM COMMANDE LEFT JOIN DATE AS DATELIVR ON COMMANDE.ID_DATELIVRAISON=DATELIVR.ID_DATE LEFT JOIN DATE AS DATEEMIS ON COMMANDE.ID_DATEEMMISSION=DATEEMIS.ID_DATE LEFT JOIN DATE AS DATEPAY ON COMMANDE.ID_DATEDESOLDE=DATEPAY.ID_DATE LEFT JOIN REGLEMENT ON COMMANDE.ID_REGLEMENT=REGLEMENT.ID_REGLEMENT LEFT JOIN MODE_REGLEMENT ON REGLEMENT.ID_REGLEMENT=MODE_REGLEMENT.ID_MODEREGLE LEFT JOIN DATE AS DATEREGL ON REGLEMENT.ID_DATEREGLE=DATEREGL.ID_DATE", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		else if (this->table == "CARTICLE")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_COMMANDE, NOM_ARTICLE,QUANTITE_COMMADEE FROM CONTIENT LEFT JOIN ARTICLE ON CONTIENT.ID_ARTICLE=ARTICLE.ID_ARTICLE  WHERE ID_COMMANDE='" + login->cmd_a_idcmd + "' ORDER BY CONTIENT.ID_COMMANDE ASC ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		else if (this->table == "REQUETE3")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT NOM_ARTICLE from ARTICLE WHERE QUANTITE_STOCK_ARTICLE<SEUIL_REAPPROVISIONEMENT_ARTICLE ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		else if (this->table == "REQUETE5")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT NOM_ARTICLE,SUM(QUANTITE_COMMADEE) AS Quantité FROM ARTICLE INNER JOIN CONTIENT ON ARTICLE.ID_ARTICLE=CONTIENT.ID_ARTICLE GROUP BY NOM_ARTICLE ASC ORDER BY SUM(QUANTITE_COMMADEE)  DESC LIMIT 10 ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		else if (this->table == "REQUETE6")
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT NOM_ARTICLE,SUM(QUANTITE_COMMADEE) AS Quantité FROM ARTICLE INNER JOIN CONTIENT ON ARTICLE.ID_ARTICLE=CONTIENT.ID_ARTICLE GROUP BY NOM_ARTICLE ASC ORDER BY SUM(QUANTITE_COMMADEE) ASC LIMIT 10  ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		
		
		
	}

		  
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DataViewer::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->panelTop);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(718, 522);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(0, 50);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 3, 6, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(718, 472);
			this->dataGridView1->TabIndex = 11;
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panelTop->Controls->Add(this->label1);
			this->panelTop->Controls->Add(this->pictureBox1);
			this->panelTop->Controls->Add(this->button1);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(718, 50);
			this->panelTop->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(86, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Visionage des Données";
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &DataViewer::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DataViewer::button1_Click);
			// 
			// DataViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->ClientSize = System::Drawing::Size(718, 522);
			this->Controls->Add(this->panel1);
			this->Name = L"DataViewer";
			this->Text = L"DataViewer";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
