#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	i;
		int j;

		j = 1;
		i = 0;
		while (argc > j)
		{
			i = 0;
			while (argv[j][i])
			{
				std::cout << char(toupper(argv[j][i]));
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}