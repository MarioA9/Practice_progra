#include <iostream>
#include <string>
#include <vector>

using namespace std;
 int main()
 {
	 vector <string> inventory;

	 inventory.push_back("espada");
	 inventory.push_back("escudo");
	 inventory.push_back("martillo");

	 cout << "tienes " << inventory.size() << " objetos en tu inventario" << endl;

	 for (unsigned int i = 0; i < inventory.size(); i++)
	 {
		 cout << inventory[i] << endl;
	 }

	 cout << "cambiaste tu " << inventory[0] << " por una bomba" << endl;
	 inventory[0] = "bomba";

	 for (unsigned int i = 0; i < inventory.size(); i++)
	 {
		 cout << inventory[i] << endl;
	 }
 }