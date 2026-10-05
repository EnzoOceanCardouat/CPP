#pragma once

#include <iostream>

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		void	set_first_name(std::string const &);
		void	set_last_name(std::string const &);
		void	set_nickname(std::string const &);
		void	set_phone_number(std::string const &);
		void	set_darkest_secret(std::string const &);
		std::string const &	get_first_name();
		std::string const &	get_last_name();
		std::string const &	get_nickname();
		std::string const &	get_phone_number();
		std::string const &	get_darkest_secret();

};
