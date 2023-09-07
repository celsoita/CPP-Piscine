/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:53:39 by cschiavo          #+#    #+#             */
/*   Updated: 2023/08/26 22:06:51 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GLOBLIB_H
# define GLOBLIB_H

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstring>
#include <cctype>
#include <iomanip>
//ft_tab.cpp
void	ft_tab_init(void);
void	ft_fill_tab_print(std::string value1,std::string value2, std::string value3, int i);
//ft_utils.cpp
int IsNum(std::string input);
int safeStringToInt(const std::string& input);
std::string	ft_truncate_output(std::string phonebook_str);
void	ft_info_print();

#endif