
#include "Harl.hpp"

Harl::Harl()
{
	;
}
Harl::~Harl()
{
	;
}
void Harl::_debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::_info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;	
} 		
void Harl::_warning( void )
{	
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;;
}
void Harl::complain(std::string level)
{
	std::string levels[] ={"DEBUG","INFO", "WARNING", "ERROR"};
	void	(Harl::*array[])(void) ={&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int	i = 0;
	while (i < 4)
	{
		if(levels[i] == level)
		{
			(this->*array[i])();
		}
		i++;
	}
}