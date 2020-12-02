#pragma once

#include "Table.h"
#include "Humain.h"
#include "Adresse.h"

class Employe : public Table, public Humain, public Adresse 
{
public :

	System::Data::DataSet^ afficher();
	void ajouter(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void modifier(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimer(System::String^, System::String^);
};

