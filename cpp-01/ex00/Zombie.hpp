#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "Zombie.h"

class Zombie
{
	private:
		std::string name;
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie();
};


// Functions
void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif