#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie *newZombie(std::string);
void randomChump(std::string name);

int main() {
	
	Zombie *watson = new Zombie("Watson");;
	watson->announce();
	randomChump("otaku zombie");
	delete watson;

	std::cout << std::endl;

	
	Zombie *mickel = newZombie("Mickel");
	mickel->announce();
	Zombie *peppa = newZombie("Peppa pig");
	peppa->announce();
	mickel->announce();
	delete mickel;
	peppa->announce();
	delete peppa;

	std::cout << std::endl;

	// random chumps
	randomChump("vegan zombie");

	return 0;
}
