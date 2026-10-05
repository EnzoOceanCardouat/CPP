#include "Fixed.hpp"

Fixed::Fixed() : _rawNumber(0) {}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		_rawNumber = other._rawNumber;
	return *this;
}

Fixed::~Fixed() {}

void Fixed::setRawBits(int const raw) {
	_rawNumber = raw;
}

Fixed::Fixed(const int value) {
	_rawNumber = value << _fractionalBits;
}

Fixed::Fixed(const float value) : _rawNumber(roundf(value * (1 << _fractionalBits))) {}

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

bool Fixed::operator>(const Fixed& other) const {
	return _rawNumber > other._rawNumber;
}

bool Fixed::operator<(const Fixed& other) const {
	return _rawNumber < other._rawNumber;
}

bool Fixed::operator>=(const Fixed& other) const {
	return _rawNumber >= other._rawNumber;
}

bool Fixed::operator<=(const Fixed& other) const {
	return _rawNumber <= other._rawNumber;
}

bool Fixed::operator==(const Fixed& other) const {
	return _rawNumber == other._rawNumber;
}

bool Fixed::operator!=(const Fixed& other) const {
	return _rawNumber != other._rawNumber;
}

Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
	_rawNumber++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	_rawNumber++;
	return temp;
}

Fixed& Fixed::operator--() {
	_rawNumber--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	_rawNumber--;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}
