#pragma once
#include "Table.h"

class Produit : public Table
{
public:

	void ajouter(System::String^, System::String^, System::String^, System::String^, System::String^);
	void modifier(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimer(System::String^);
};

