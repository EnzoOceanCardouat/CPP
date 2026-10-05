#include "Fixed.hpp"

Fixed::Fixed() : _rawNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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

void Fixed::setRawBits(int const raw) {
	_rawNumber = raw;
}

Fixed::Fixed(const int value) {
	_rawNumber = value << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _rawNumber(roundf(value * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt() const {
	return _rawNumber >> _fractionalBits;
}

float Fixed::toFloat() const {
	return (float)_rawNumber / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
