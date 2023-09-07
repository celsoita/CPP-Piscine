/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:00:20 by cschiavo          #+#    #+#             */
/*   Updated: 2023/08/26 22:10:38 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globlib.h"

int IsNum(std::string input)
{
	int	i;

	i = 0;
	while (i < input.length())
	{
		if (isalpha(input[i]))
			return (-1);
		i++;
	}
	return(0);
}
//safe atoi for convert
int safeStringToInt(const std::string& input)
{
	size_t i;
	
	i = 0;
    while (i < input.length())
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Conversione fallita o input non valido." << std::endl;
			return (-1);
        }
		i++;
	}
    return std::atoi(input.c_str()); // Utilizza atoi anziché stoi
}

//truncate the output
std::string	ft_truncate_output(std::string phonebook_str)
{
	int lenght;
	std::string temp;
	lenght = phonebook_str.length();
	if (lenght > 10)
	{
		
		temp = phonebook_str;
		if (temp.length() > 10)
		{
			temp.resize(10);
			temp.insert(9, 1, '.');
			temp.erase(10, 1);
		}
	}
	else
		temp = phonebook_str;
	return (temp);
}

//info on that program
void	ft_info_print()
{
	std::cout << std::setw(21) << std::setfill('~') << "" << std::endl;
 	std::cout << std::setw(22) << std::internal << "\x1B[35m\x1B[104mMy awesome PhoneBook!\x1B[0m" << std::endl;
	std::cout << std::setw(21) << std::setfill('~') << "" << std::endl;
 	std::cout <<std::setw(20) << std::internal << "\x1B[45m Command you can use \x1B[0m" << std::endl;
	std::cout << std::setw(21) << std::setfill('#') << "" << std::endl;
 	std::cout << std::setw(15) << std::internal << "\x1B[42m         ADD         \x1B[0m" << std::endl;
 	std::cout << std::setw(19) << std::internal << "\x1B[43m        SEARCH       \x1B[0m" << std::endl;
 	std::cout << std::setw(20) << std::internal << "\x1B[41m         EXIT        \x1B[0m"<< "\n" << std::endl;
}