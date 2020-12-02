#include "Commande.h"

using namespace System::IO;

System::Data::DataSet^ Commande::afficher()
{
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("afficherCommandeScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(querystring, connection);

	System::Data::DataSet^ dataset = gcnew System::Data::DataSet();

	try
	{
		connection->Open();
		adapter->Fill(dataset, "Commande");
		connection->Close();

		return dataset;

	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
		return dataset;
	}
}

void Commande::ajouter(System::String^ ref, System::String^ valide, System::String^ envoi, System::String^ paiement, System::String^ moyen, System::String^ total, System::String^ produit, System::String^ qte) {

	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("ajouterCommandeScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	command->Parameters->AddWithValue("@ref", ref);
	command->Parameters->AddWithValue("@valide", System::Convert::ToBoolean(valide));
	command->Parameters->AddWithValue("@envoi", System::Convert::ToDateTime(envoi));
	command->Parameters->AddWithValue("@paiement", System::Convert::ToDateTime(paiement));
	command->Parameters->AddWithValue("@moyen", moyen);
	command->Parameters->AddWithValue("@total", total);
	command->Parameters->AddWithValue("@produit", produit);
	command->Parameters->AddWithValue("@qte", System::Convert::ToInt32(qte));

	try
	{
		connection->Open();
		command->ExecuteNonQuery();
		connection->Close();
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
	}
}

void Commande::modifier(System::String^ ID, System::String^ ref, System::String^ valide, System::String^ envoi, System::String^ paiement, System::String^ moyen, System::String^ total, System::String^ produit, System::String^ qte) {

	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("modifierCommandeScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	command->Parameters->AddWithValue("@ID", System::Convert::ToInt32(ID));

	command->Parameters->AddWithValue("@ref", ref);
	command->Parameters->AddWithValue("@valide", System::Convert::ToBoolean(valide));
	command->Parameters->AddWithValue("@envoi", System::Convert::ToDateTime(envoi));
	command->Parameters->AddWithValue("@paiement", System::Convert::ToDateTime(paiement));
	command->Parameters->AddWithValue("@moyen", moyen);
	command->Parameters->AddWithValue("@total", total);

	command->Parameters->AddWithValue("@produit", produit);
	command->Parameters->AddWithValue("@qte", System::Convert::ToInt32(qte));

	try
	{
		connection->Open();
		command->ExecuteNonQuery();
		connection->Close();
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
	}
}

void Commande::supprimer(System::String^ ID) {

	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("supprimerCommandeScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	command->Parameters->AddWithValue("@ID", System::Convert::ToInt32(ID));

	try
	{
		connection->Open();
		command->ExecuteNonQuery();
		connection->Close();
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
	}
}