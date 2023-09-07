#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	horde = new Zombie[N];
	int i;
	i = 0;
	while (i < N)
	{
		horde[i].seTname(name);
		i++;
	}
	return(horde);
}