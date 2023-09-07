#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
class  PhoneBook
{
	private:
	 Contact contact[8];
	public:
	int	ft_add_contact(PhoneBook *phonebook, int n_contact);
	void ft_display_tab(PhoneBook *phonebook, int index);
	void ft_info_contact(PhoneBook phonebook, int i);

};

#endif
