#pragma once

#include "Table.h"
#include "Humain.h"
#include "Adresse.h"

 class Client : public Table, public Humain, public Adresse
{
public:

	System::Data::DataSet^ afficher();
};

