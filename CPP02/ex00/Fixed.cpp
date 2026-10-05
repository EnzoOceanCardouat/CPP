#include "Fixed.hpp"

Fixed::Fixed() : _rawNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _rawNumber(other._rawNumber) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_rawNumber = other._rawNumber;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _rawNumber;
}

void Fixed::setRawBits(int const raw) {
	_rawNumber = raw;
}
