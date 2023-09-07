#include "Zombie.h"

Zombie* newZombie( std::string name )
{
	Zombie *newzombie;
	newzombie = new Zombie(name);
	return (newzombie);
}
