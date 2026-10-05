#include "Harl.hpp"

int main(int ac, char **av) {
	Harl harl;

	if (ac < 5) {
		std::cerr << "Error: not enough argument." << std::endl;
		return 1;
	}
	if (ac > 5) {
		std::cerr << "Error: too much argument." << std::endl;
		return 1;
	}
	for (int i = 1; av[i];i++) {
		harl.complain(av[i]);
	}
}
