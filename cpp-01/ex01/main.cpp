#include "Zombie.h"

int main()
{
	int i;
	Zombie *carlos;
	i = 10;
	carlos = zombieHorde(i, "mario");
	while(i--)
	{
		carlos->announce();
	}
	delete[](carlos);
}