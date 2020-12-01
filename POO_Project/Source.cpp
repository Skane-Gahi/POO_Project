#include <iostream>

using namespace System::IO; // lecture fichier textes

int main() 
{

	int pause;

	System::String^ querystring = File::ReadAllText("D:/CESI/Projets/POO/POO_Project/BDD/Initialize.sql");

	System::Console::WriteLine(querystring);

	std::cin >> pause;

	return 0;
}
