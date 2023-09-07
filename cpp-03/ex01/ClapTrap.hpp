#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{

	protected:
		std::string _Name;
		int _Hitpoints;
		int _Energypoints;
		int _Attackdamage;

	public:
		ClapTrap(void);//default
		ClapTrap(std::string Name);//init name
		ClapTrap(ClapTrap const &src);//copy construct
		ClapTrap& operator=(ClapTrap const &rhs);
		std::string getName(void);
		int getAttackDamage(void);
		int getEnergyPoints(void);
		int getHitpoints(void);

		void setName(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap(void);//distruct
		
};
#endif
/*
Add the following public member functions so the ClapTrap looks more realistic:
• void attack(const std::string& target);
• void takeDamage(unsigned int amount);
• void beRepaired(unsigned int amount);
When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
or energy points left.
5
C++ - Module 03 Inheritance
In all of these member functions, you have to print a message to describe what happens. For example, the attack() function may display something like (of course, without
the angle brackets):
ClapTrap <name> attacks <target>, causing <damage> points of damage!
The constructors and destructor must also display a message, so your peer-evaluators
can easily see they have been called.
Implement and turn in your own tests to ensure your code works as expected.
*/
