/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:56:49 by cschiavo          #+#    #+#             */
/*   Updated: 2023/08/26 21:36:56 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globlib.h"

//init tab search
void	ft_tab_init(void)
{
	 std::cout << std::setw(10) << std::right << "Index" << " | " \
  << std::setw(10) << std::right << "First Name" << " | "\
  << std::setw(10) << std::right << "Last Name" << " | "\
  << std::setw(10) << std::right << "Nickname" << " |" << std::endl;
  std::cout << std::setw(10) << std::setfill('-') << "" << " + "\
  << std::setw(10) << std::setfill('-') << "" << " + "\
  << std::setw(10) << std::setfill('-') << "" << " + " \
  << std::setw(10) << std::setfill('-') << "" << " |" << std::endl;
}

void	ft_fill_tab_print(std::string value1,std::string value2, std::string value3, int i)
{
	 std::cout << std::setw(10) << i << "" << " | "\
  	<< std::setw(10) << value1 << "" << " | "\
  	<< std::setw(10) << value2 << "" << " | " \
  	<< std::setw(10) << value3 << "" << " |" << std::endl;
 	 std::cout << std::setfill(' ');
 	 i++;
}