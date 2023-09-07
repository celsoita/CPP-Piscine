/*
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp
Forbidden functions : None
First, you have to implement a class! How original!
It will be called ClapTrap and will have the following private attributes initialized
to the values specified in brackets:
• Name, which is passed as parameter to a constructor
• Hit points (10), represent the health of the ClapTrap
• Energy points (10)
• Attack damage (0)
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
#include "ClapTrap.hpp"
int main()
{
	ClapTrap robot;
	robot.setName("rd2d2");	
	std::cout<< " Clap Trap "<< robot.getName() << " has spawned " << " Life " << robot.getHitpoints() << " Energy " << robot.getEnergyPoints() << std::endl;

	for(int i = 0; i < 10; i++)
	{
		robot.attack("wall");
	}
	std::cout << " continuing to bump into the wall hurt " << robot.getName() << " damaging it self" << std::endl;
	robot.takeDamage(9);
	std::cout<< " Clap Trap "<< robot.getName() << " remaning life " << robot.getHitpoints() << " remaning energy " << robot.getEnergyPoints() << std::endl;
	std::cout << " Clap Trap " << robot.getName() << " want repair it self "<< std::endl;
	robot.beRepaired(2);

		

}