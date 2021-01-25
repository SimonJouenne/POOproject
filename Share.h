#pragma once

using namespace MySql::Data::MySqlClient;

namespace ShareFonctionality {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Login
	{
	public:
		void connexion(String^, String^);
		void connect(Object ^, BindingSource^, Object^);
		//Form^ getreturnForm();
		void setreturnForm(Form^ form);
		void p_getvalue(String^, String^, String^, String^, String^);
		void c_getvalue(String^, String^, String^, String^, String^, String^);
		void a_getvalue(String^, String^, String^, String^, String^, String^);
		void cmd_getvalue(String^, String^, String^, String^, String^, String^, String^, String^);
		void cmd_a_getvalue(String^, String^, String^, String^);
		//void s_getvalue();
		//void cmd_getvalue();
		void createClient();
		void deleteClient(String^ );

		void createPersonel();
		void deletePersonel(String^);

		void createArticle();
		void deleteArticle(String^);
		void createLot(String^,String^,String^,String^);

		void createCommande();
		void createCmdArticle();
		void deleteCommande(String^);


	public:
		MySqlConnection^ con;
		String^  id;
		String^  mdp;
		String^ ip = "51.75.246.94";
		String^ Database = "Projet POO";

	public:
		//Personel value
		String^ p_nom;
		String^ p_prenom;
		String^ p_adresse;
		String^ p_date;
		String^ sup_id;

		// Client Value
		String^ c_nom;
		String^ c_prenom;
		String^ c_date_aniv;
		String^ c_date_achat;
		String^ c_adresse_l;
		String^ c_adresse_f;

		// Article Value
		String^ a_nom;
		String^ a_squantité;
		String^ a_seuil;
		String^ a_prix;
		String^ a_natureID;
		String^ a_tvaID;

		// Commande Value
		String^ cmd_idclient;
		String^ cmd_reference;
		String^ cmd_moyenpmt;
		String^ cmd_datepmt;
		String^ cmd_montantpmt;
		String^ cmd_dates;
		String^ cmd_datee;
		String^ cmd_datel;

		// Commande Article Value
		String^ cmd_a_idcmd;
		String^ cmd_a_ida;
		String^ cmd_a_quantité;
		String^ cmd_a_TVA;
		

	public:Form^ returnForm;

	};


}