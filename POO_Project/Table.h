#pragma once

ref class Table
{

protected :
	
	System::String^ connectionString;
	System::Data::SqlClient::SqlConnection^ connection;

public :
	
	Table();
	System::Data::DataSet^ afficher(System::String^);
	System::Data::DataSet^ ExecuteAdapter(System::Data::SqlClient::SqlDataAdapter^, System::String^);
	void ExecuteCommand(System::Data::SqlClient::SqlCommand^);
};

