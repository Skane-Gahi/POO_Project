#include "Table.h"

using namespace System::IO;

System::Data::DataSet^ Table::afficher(System::String^ NomTable) 
{
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = "SELECT * FROM [ProjetPOO].[dbo].[" + NomTable + "];";

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(querystring, connection);

	System::Data::DataSet^ dataset = gcnew System::Data::DataSet();

	try
	{
		connection->Open();
		adapter->Fill(dataset, NomTable);
		connection->Close();

		return dataset;

	}
	catch (System::Exception^ ex)
	{
		System::Console::WriteLine(ex->Message);
		return dataset;
	}
}

void Table::supprimer(System::String^ NomTable) 
{
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = "DELETE FROM" + NomTable + ";";

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(querystring, connection);

	try
	{
		connection->Open();

		command->ExecuteNonQuery();

		connection->Close();

	}
	catch (System::Exception^ ex)
	{
		System::Console::WriteLine(ex->Message);
	}
}

void Table::modifier() {

}

void Table::ajouter() {

}