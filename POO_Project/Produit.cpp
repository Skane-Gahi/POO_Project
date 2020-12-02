#include "Produit.h"

using namespace System::IO;

void Produit::ajouter(System::String^ desi, System::String^ pht, System::String^ qte, System::String^ seuil, System::String^ tva) {

	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("ajouterProduitScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	command->Parameters->AddWithValue("@desi", desi);
	command->Parameters->Add("@pht", System::Data::SqlDbType::Money, 9, "prix_HT")->Value = pht;
	command->Parameters->AddWithValue("@qte", System::Convert::ToInt32(qte));
	command->Parameters->AddWithValue("@seuil", System::Convert::ToInt32(seuil));
	command->Parameters->Add("@tva",System::Data::SqlDbType::Float, 6, "taux_TVA_produit")->Value = tva;

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

void Produit::modifier(System::String^ ID, System::String^ desi, System::String^ pht, System::String^ qte, System::String^ seuil, System::String^ tva) {

	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("modifierProduitScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	command->Parameters->AddWithValue("@ID", System::Convert::ToInt32(ID));

	command->Parameters->AddWithValue("@desi", desi);
	command->Parameters->Add("@pht", System::Data::SqlDbType::Money, 9, "prix_HT")->Value = pht;
	command->Parameters->AddWithValue("@qte", System::Convert::ToInt32(qte));
	command->Parameters->AddWithValue("@seuil", System::Convert::ToInt32(seuil));
	command->Parameters->Add("@tva", System::Data::SqlDbType::Float, 6, "taux_TVA_produit")->Value = tva;


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

void Produit::supprimer(System::String^ ID) {

	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("supprimerProduitScript.sql");

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