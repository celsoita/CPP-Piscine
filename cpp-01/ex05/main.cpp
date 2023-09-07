#include "Harl.hpp"

int main()
{
	Harl test;

	std::string arrayPrint[] ={"DEBUG","INFO", "WARNING", "ERROR"};
	
	int i = 0; 
	while(i < 4)
	{
		test.complain(arrayPrint[i]);
		i++;
	}
}