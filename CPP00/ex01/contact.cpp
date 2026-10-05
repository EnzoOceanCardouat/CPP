#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::set_first_name(std::string const &name) {
	_first_name = name;
}
void Contact::set_last_name(std::string const &name) {
	_last_name = name;
}
void Contact::set_nickname(std::string const &name) {
	_nickname = name;
}
void Contact::set_phone_number(std::string const &number) {
	_phone_number = number;
}
void Contact::set_darkest_secret(std::string const &secret) {
	_darkest_secret = secret;
}

std::string const & Contact::get_first_name() {
	return (_first_name);
}
std::string const & Contact::get_last_name() {
	return (_last_name);
}
std::string const & Contact::get_nickname() {
	return (_nickname);
}
std::string const & Contact::get_phone_number() {
	return (_phone_number);
}
std::string const & Contact::get_darkest_secret() {
	return (_darkest_secret);
}
