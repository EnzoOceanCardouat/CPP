#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>

PhoneBook::PhoneBook() : _num_of_contact(0) {}


std::string const	PhoneBook::get_input(std::string const &input) {
	std::string line;
	while (line.empty()) {
		if (std::cin.eof())
			std::exit(1) ;
		std::cout << input;
		std::getline(std::cin, line);
	}
	return (line);
}

void	PhoneBook::addcontact() {
	_contacts[_num_of_contact %8].set_first_name(get_input("first name :"));
	_contacts[_num_of_contact %8].set_last_name(get_input("last name :"));
	_contacts[_num_of_contact %8].set_nickname(get_input("nickname :"));
	_contacts[_num_of_contact %8].set_phone_number(get_input("phone number :"));
	_contacts[_num_of_contact %8].set_darkest_secret(get_input("darkest secret :"));
	_num_of_contact++;
}

void	PhoneBook::print_10_char(std::string const &str) {
	if (str.length() > 10) {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::search() {
	std::string line;
	std::cout << "╭──────────┬──────────┬──────────┬──────────╮" << std::endl;
	for (int i = 0; i < _num_of_contact && i < 8; i++) {
		std::cout << "|" << std::setw(10) << i << "|";
		print_10_char(_contacts[i].get_first_name());
		std::cout << "|";
		print_10_char(_contacts[i].get_last_name());
		std::cout << "|";
		print_10_char(_contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "╰──────────┴──────────┴──────────┴──────────╯" << std::endl;
	std::getline(std::cin, line);
	if ((line == "0" || line == "1" || line == "2" || line == "3" || line == "4" || line == "5" || line == "6" || line == "7") && std::atoi(line.c_str()) +1 <= _num_of_contact) {
		std::cout << "first name: " << _contacts[std::atoi(line.c_str())].get_first_name() << std::endl;
		std::cout << "last name: " << _contacts[std::atoi(line.c_str())].get_last_name() << std::endl;
		std::cout << "nickname: " << _contacts[std::atoi(line.c_str())].get_nickname() << std::endl;
		std::cout << "phone number: " << _contacts[std::atoi(line.c_str())].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << _contacts[std::atoi(line.c_str())].get_darkest_secret() << std::endl;
	}
}

int main() {
	std::string line;
	PhoneBook book;

	while (line != "EXIT") {
		if (std::cin.eof())
			break ;
		std::cout << "Commands: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, line);
		if (line == "ADD")
			book.addcontact();
		else if (line == "SEARCH")
			book.search();
	}
}
