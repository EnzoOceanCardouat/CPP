#include "Harl.hpp"

int main(int ac, char **av) {
	Harl harl;

	if (ac < 2) {
		std::cerr << "Error: not enough argument." << std::endl;
		return 1;
	}
	if (ac > 2) {
		std::cerr << "Error: too much argument." << std::endl;
		return 1;
	}
	harl.complain(av[1]);
}
