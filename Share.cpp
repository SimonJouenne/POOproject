#include "Share.h"
#include "MyForm.h"

using namespace MySql::Data::MySqlClient;
using namespace POOProject;


namespace ShareFonctionality {


	void Login::connexion(String^ identifiant, String^ motdepasse) {

		id = identifiant;
		mdp = motdepasse;

	}

	void Login::connect(Object^ data, BindingSource^ bd, Object^ dbd) {
		String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
		con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from TVA", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		dbd = dt;
		data = bd;

	}

	void Login::p_getvalue(String^ nom, String^ prenom, String^ adresse, String^ date, String^ id) {
		p_nom = nom;
		p_prenom = prenom;
		p_adresse = adresse;
		p_date = date;
		sup_id = id;
	}

	void Login::c_getvalue(String^ nom, String^ prenom, String^ datea, String^ date1, String^ adressF, String^ adressL) {
		c_nom = nom;
		c_prenom = prenom;
		c_date_aniv = datea;
		c_date_achat = date1;
		c_adresse_l = adressF;
		c_adresse_f = adressL;
	}

	void Login::a_getvalue(String^ nom, String^ idtype,String^ idtva, String^ prix, String^ quantité, String^ seuil) {
		a_nom = nom;
		a_natureID = idtype;
		a_tvaID = idtva;
		a_prix = prix;
		a_squantité = quantité;
		a_seuil = seuil;
	}

	void Login::cmd_getvalue(String^ idcl, String^ ref, String^ moy, String^ datep, String^ montant, String^ dates, String^ datee, String^ datel) {
		cmd_idclient = idcl;
		cmd_reference = ref;
		cmd_moyenpmt = moy;
		cmd_datepmt = datep;
		cmd_montantpmt = montant;
		cmd_dates = dates;
		cmd_datee = datee;
		cmd_datel = datel;
	}

	void Login::cmd_a_getvalue(String^ idcmd, String^ idart, String^ quantité, String^ tva) {
		cmd_a_idcmd = idcmd;
		cmd_a_ida = idart;
		cmd_a_quantité = quantité;
		cmd_a_TVA = tva;
	}

	/*Form^ Login::getreturnForm() {
		Object^ sender;
		return returnForm;
	};*/

	void Login::setreturnForm(Form^ form) {
		returnForm = form;
		
	}

	void Login::createClient() {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			if (c_adresse_f == c_adresse_l)

			{
				MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','"+c_adresse_f+"' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='"+c_adresse_f+"')", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','"+c_date_aniv+"' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + c_date_aniv + "')", con);
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','"+c_date_achat+"' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='"+c_date_achat+"')", con);
				con->Open();
				dr = cmd2->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd3 = gcnew MySqlCommand("INSERT INTO CLIENT VALUES('', (SELECT ID_ADRESSE FROM ADRESSE WHERE adresse = '" + c_adresse_f + "'), (SELECT ID_ADRESSE FROM ADRESSE WHERE adresse  = '" + c_adresse_l + "'), (SELECT ID_DATE FROM DATE WHERE DATE = '" + c_date_aniv + "'), (SELECT ID_DATE FROM DATE WHERE DATE = '" + c_date_achat + "'), '" + c_nom + "', '" + c_prenom + "')", con);
				con->Open();
				dr = cmd3->ExecuteReader();
				con->Close();

				MessageBox::Show("Client Ajouté");
			}
			else
			{
				MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','" + c_adresse_f + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + c_adresse_f + "')", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','" + c_adresse_l + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + c_adresse_l + "')", con);
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','" + c_date_aniv + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + c_date_aniv + "')", con);
				con->Open();
				dr = cmd2->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd3 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','" + c_date_achat + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + c_date_achat + "')", con);
				con->Open();
				dr = cmd3->ExecuteReader();
				con->Close();

				MySqlCommand^ cmd4 = gcnew MySqlCommand("INSERT INTO CLIENT VALUES('', (SELECT ID_ADRESSE FROM ADRESSE WHERE adresse = '" + c_adresse_f + "'), (SELECT ID_ADRESSE FROM ADRESSE WHERE adresse  = '" + c_adresse_l + "'), (SELECT ID_DATE FROM DATE WHERE DATE = '" + c_date_aniv + "'), (SELECT ID_DATE FROM DATE WHERE DATE = '" + c_date_achat + "'), '" + c_nom + "', '" + c_prenom + "')", con);
				con->Open();
				dr = cmd4->ExecuteReader();

				MessageBox::Show("Client Ajouté");

			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}

	void Login::deleteClient(String^ idc) {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM CLIENT WHERE ID_CLIENT='"+idc+"'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();


			MessageBox::Show("Client Supprimé");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::createPersonel() {
		
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ADRESSE(ID_ADRESSE ,ADRESSE) SELECT '','"+p_adresse+"' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='"+p_adresse+"')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO DATE(ID_DATE,DATE) SELECT '','"+p_date+"' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')", con);
			con->Open();
			dr = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO PERSONNEL VALUES('', (SELECT ID_ADRESSE FROM ADRESSE WHERE adresse = '"+p_adresse+"'), '"+sup_id+"',(SELECT ID_DATE FROM DATE WHERE DATE = '"+p_date+"'), '"+p_nom+"', '"+p_prenom+"')", con);
			con->Open();
			dr = cmd2->ExecuteReader();
			con->Close();

			MessageBox::Show("Personel Ajouté");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::deletePersonel(String^ idp) {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM PERSONNEL WHERE ID_PERSONNEL='" + idp + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();


			MessageBox::Show("Personnel Supprimé");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::createArticle() {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO ARTICLE VALUES('',(SELECT ID_TVA FROM TVA WHERE TAUX_TVA='" + a_tvaID + "'),(SELECT ID_NATURE FROM NATURE WHERE ID_NATURE='" + a_natureID + "'),'" + a_nom + "','" + a_squantité + "','" + a_seuil + "','" + a_prix + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			MessageBox::Show("Articlé Ajouté");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::deleteArticle(String^ ida) {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM ARTICLE WHERE ID_ARTICLE='" + ida + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();


			MessageBox::Show("Article Supprimé");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::createLot(String^ l_idarticle, String^ l_couleur, String^ l_taile, String^ l_prix) {

		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO COULEUR(ID_COULEUR,NOM_COULEUR) SELECT '','" + l_couleur + "' WHERE NOT EXISTS( SELECT* FROM COULEUR WHERE NOM_COULEUR='" + l_couleur + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO TARIF (ID_TARIF,ID_ARTICLE,ID_COULEUR,PRIX_TARIF,TAILLE_LOTS_TARIF) SELECT'',ARTICLE.ID_ARTICLE,COULEUR.ID_COULEUR,'" + l_prix + "','" + l_taile + "' FROM ARTICLE,COULEUR WHERE ARTICLE.ID_ARTICLE='" + l_idarticle + "' AND COULEUR.NOM_COULEUR='" + l_couleur + "' AND NOT EXISTS(SELECT* FROM TARIF, ARTICLE, COULEUR  WHERE ARTICLE.ID_ARTICLE='" + l_idarticle+"' AND COULEUR.NOM_COULEUR='" + l_couleur + "' AND PRIX_TARIF='" + l_prix + "' AND TAILLE_LOTS_TARIF='" + l_taile + "')", con);
			con->Open();
			dr = cmd1->ExecuteReader();
			con->Close();

			MessageBox::Show("Lot Ajouté");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::createCommande() {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("call create_cmd('"+cmd_datel+"','"+cmd_datee+"','"+cmd_dates+"','"+cmd_datepmt+"','"+cmd_moyenpmt+"','"+cmd_montantpmt+"','"+cmd_idclient+"','"+cmd_reference+"')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			MessageBox::Show("Commande Crée");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::createCmdArticle() {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("call stockA_C('"+cmd_a_idcmd+"','"+cmd_a_ida+"','"+cmd_a_quantité+"','"+cmd_a_TVA+"');", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			MessageBox::Show("Article Ajouté");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	void Login::deleteCommande(String^ idc) {
		try
		{
			String^ constr = "Server=" + ip + ";Uid=" + id + ";Pwd=" + mdp + ";Database=" + Database;
			con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("call delete_commande('"+idc+"')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();


			MessageBox::Show("Commande Supprimé");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}