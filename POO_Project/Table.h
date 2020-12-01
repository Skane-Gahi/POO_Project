#pragma once

class Table
{
public :
	
	virtual System::Data::DataSet^ afficher(System::String^);
	virtual void supprimer(System::String^);
	virtual void ajouter();
	virtual void modifier();
};

