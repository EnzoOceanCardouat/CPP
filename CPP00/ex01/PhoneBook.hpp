#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int	_num_of_contact;
		std::string const	get_input(std::string const &input);
	public:
		PhoneBook();
		void	addcontact();
		void	search();
		void	print_10_char(std::string const &str);
};
