#include "Table.h"

using namespace System::IO;

Table::Table() 
{
	this->connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	this->connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
}


System::Data::DataSet^ Table::ExecuteAdapter(System::Data::SqlClient::SqlDataAdapter^ adapter, System::String^ SourceTable) 
{
	System::Data::DataSet^ dataset = gcnew System::Data::DataSet();

	try
	{
		this->connection->Open();
		adapter->Fill(dataset, SourceTable);
		this->connection->Close();

		return dataset;

	}
	catch (System::Exception^ ex)
	{
		System::Console::WriteLine(ex->Message);
		return dataset;
	}
}

void Table::ExecuteCommand(System::Data::SqlClient::SqlCommand^ command) 
{
	try
	{
		this->connection->Open();
		command->ExecuteNonQuery();
		this->connection->Close();
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
	}
}

System::Data::DataSet^ Table::afficher(System::String^ NomTable) 
{
	System::String^ querystring = "SELECT * FROM [ProjetPOO].[dbo].[" + NomTable + "];";

	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(querystring, this->connection);

	return this->ExecuteAdapter(adapter, NomTable);
}

