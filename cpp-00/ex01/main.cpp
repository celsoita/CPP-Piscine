/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:51:29 by cschiavo          #+#    #+#             */
/*   Updated: 2023/08/26 22:06:56 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globlib.h"

int main()
{
	PhoneBook phonebook;
	std::string input;
	int index;
	int n_contact;
	n_contact = -1;
	index = -1;
	ft_info_print();
	while(getline(std::cin, input))
	{
		if (!strcmp(input.c_str(), "ADD"))
		{
			index++;
		n_contact = phonebook.ft_add_contact(&phonebook,n_contact);
		}
		else if(!strcmp(input.c_str(), "SEARCH"))
		{
			if (index >= 8)
				index = 7;
			phonebook.ft_display_tab(&phonebook, index);
		}
		else if(!strcmp(input.c_str(), "EXIT"))
		{
			std::cout <<"\x1B[95mContacts are lost forever!\x1B[0m" << std::endl;
			return (0);
		}
		else
			std::cout << "Input Non Valido " << std :: endl;
		ft_info_print();	
	}
	return (0);
}
