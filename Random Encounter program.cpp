
#include <iostream>
#include <vector>
#include <cstdlib>






std::string Enemy_selector(int, std::string);





int main()
{


	/*                                  0-5        6-9       10-13    14-16       17-18
	std::vector <std::string> Enemys{ "Goblin", "Direwolf", "Ogre", "Vampire" , "Dragon" };*/

	srand(time(NULL));

	std::cout << Enemy_selector(std::rand() % 18, "");




}


// Selects Enemy from random but harder enemys have less chance to be slected then esaier enemys 
std::string Enemy_selector(int, std::string) {

	int selector = std::rand() % 18;
	std::string enemy;

	srand(time(NULL));

	if (selector <= 5) {
		enemy = "Goblin";
	}
	else if (selector > 5 && selector <= 9) {
		enemy = "Direwolf";
	}
	else if (selector > 9 && selector <= 13) {
		enemy = "Ogre";
	}
	else if (selector > 13 && selector <= 16) {
		enemy = "Vampire";
	}
	else if (selector > 16 && selector <= 18) {
		enemy = "Dragon";
	}
	return enemy;
}
