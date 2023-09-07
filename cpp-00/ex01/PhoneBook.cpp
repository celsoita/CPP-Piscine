/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:35:54 by cschiavo          #+#    #+#             */
/*   Updated: 2023/08/26 22:11:52 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globlib.h"
void	PhoneBook::ft_display_tab(PhoneBook *phonebook, int index)
{
	int i;
	std::string input;
	std::string value1;
	std::string value2;
	std::string value3;
	ft_tab_init();
	i = 0;
  while(i <= index)
  {
	value1 = ft_truncate_output(contact[i].getName()); //cam
	value2 = ft_truncate_output(contact[i].getLastName());
	value3 = ft_truncate_output(contact[i].getNickname());
	ft_fill_tab_print(value1,value2, value3, i);
 	 i++;
  }
	std::cout << "\n" << "\x1B[45mPress number of corrispondent index for see more detail of that contact\x1B[0m" << std::endl;
	input.clear();
  	getline(std::cin, input);
 	i = safeStringToInt(input);
	if (!input.empty() && i >= 0 && i <= 8 && i <= index)
		PhoneBook::ft_info_contact(*phonebook, i);
}

//function for add contact
int	PhoneBook::ft_add_contact(PhoneBook *phonebook,int n_contact)
{
	std::string input;	
	int i;
	if (n_contact >= 7)
		n_contact = -1;
	i = n_contact + 1;
	std::cout << "Name" << std :: endl;
	input.clear();
	while(input.empty())
	{	getline(std::cin, input);
		std::cout << "insert valid input" << std :: endl;
		std::cout << "Name" << std :: endl;
	}
	contact[i].setName(input); //.contact[i].setName(input);
	std::cout << "Last Name" << std :: endl;
	input.clear();
	while(input.empty())
	{
		getline(std::cin, input);
		std::cout << "insert valid input" << std :: endl;
		std::cout << "Last Name" << std :: endl;
	}
	contact[i].setLast_Name(input);
	std::cout << "Nickname" << std :: endl;
	input.clear();
	while(input.empty())
	{
		getline(std::cin, input);
		std::cout << "insert valid input" << std :: endl;
		std::cout << "Nickname" << std :: endl;
	}
	contact[i].setNickname(input);
	std::cout << "Phone Number" << std :: endl;
	input.clear();
	while(input.empty() || IsNum(input))
	{
		getline(std::cin, input);
		std::cout << "insert valid input" << std :: endl;
		std::cout << "Phone Number" << std :: endl;
	}
	contact[i].setPhone_Number(input);
	
	std::cout << "Darkest Secret" << std :: endl;
	input.clear();
	while(input.empty())
	{
		getline(std::cin, input);
		std::cout << "insert valid input" << std :: endl;
		std::cout << "Darkest Secret" << std :: endl;
	}
	contact[i].setDarkest_Secret(input);
	return (i);
}
//function for see info contact
void	PhoneBook::ft_info_contact(PhoneBook phonebook, int i)
{	
	std::cout << "\x1B[30mName: \x1B[0m" << "\x1B[37m" << contact[i].getName() << std::endl;
    std::cout << "\x1B[31mLast Name: \x1B[0m" << "\x1B[37m" << contact[i].getLastName() << std::endl;
    std::cout << "\x1B[32mNickname: \x1B[0m" << "\x1B[37m" << contact[i].getNickname() << std::endl;
    std::cout << "\x1B[33mPhone Number: \x1B[0m" << "\x1B[37m" << contact[i].getPhone_Number() << std::endl;
    std::cout << "\x1B[34mDarkest Secret: \x1B[0m" << "\x1B[37m" << contact[i].getDarkest_Secret() << std::endl;
    std::cout << std::endl;
}