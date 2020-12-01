#include "Client.h"

using namespace System::IO;

System::Data::DataSet^ Client::afficher()
{
	System::String^ connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	System::String^ querystring = File::ReadAllText("afficherClientScript.sql");

	System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(querystring, connection);

	System::Data::DataSet^ dataset = gcnew System::Data::DataSet();

	try
	{
		connection->Open();
		adapter->Fill(dataset, "Client");
		connection->Close();

		return dataset;

	}
	catch (System::Exception^ ex)
	{
		System::Console::WriteLine(ex->Message);
		return dataset;
	}
}