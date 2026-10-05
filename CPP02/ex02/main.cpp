#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed none;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << none.max( a, b ) << std::endl;

	return 0;
}
