#include "Zombie.h"

int main()
{
	Zombie *carlo;
	carlo = newZombie("carlo");
	carlo->announce();
	randomChump("Fabiuz");
	delete(carlo);
}