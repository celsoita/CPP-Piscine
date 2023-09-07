#include "Zombie.h"

void randomChump( std::string name )
{
	Zombie *newzombie;
	newzombie = new Zombie(name);
	std::cout << name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
	delete(newzombie);
}