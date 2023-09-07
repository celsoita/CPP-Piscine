#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl test;

	const char *arrayPrint[] ={"DEBUG","INFO", "WARNING", "ERROR"};
	std::string input;
	int i = -1; 
	if (argc == 2)
	{
		while(++i < 4)
		{
			if (!strcmp(argv[1],arrayPrint[i]))
				break ;
		}
		switch(i)
		{
			case 0: case 1: case 2: case 3:
			for(i; i < 4; i++)
			{
				test.complain(arrayPrint[i]);
				std::cout<< "\n" <<std::endl;
			}
			break ;
			default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		}	
	}
	return (0);
}