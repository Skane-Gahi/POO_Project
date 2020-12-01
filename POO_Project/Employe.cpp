#include "Employe.h"

using namespace System::IO;

System::Data::DataSet^ Employe::afficher()
{
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("afficherEmployeScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(querystring, connection);

	System::Data::DataSet^ dataset = gcnew System::Data::DataSet();

	try
	{
		connection->Open();
		adapter->Fill(dataset, "Employe");
		connection->Close();

		return dataset;

	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
		return dataset;
	}
}

void Employe::ajouter(System::String^ nom, System::String^ prenom, System::String^ date, System::String^ poste, System::String^ adresse, System::String^ ville, System::String^ cp) {
	
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("ajouterEmployeScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	command->Parameters->AddWithValue("@nom", nom);
	command->Parameters->AddWithValue("@prenom", prenom);
	command->Parameters->AddWithValue("@date_embauche", System::Convert::ToDateTime(date));
	command->Parameters->AddWithValue("@poste", poste);
	command->Parameters->AddWithValue("@adresse", adresse);
	command->Parameters->AddWithValue("@ville", ville);
	command->Parameters->AddWithValue("@cp", System::Convert::ToInt32(cp));

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