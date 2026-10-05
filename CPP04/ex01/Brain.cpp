#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain has been created." << std::endl;
};

Brain::~Brain() {
	std::cout << "Brain has been destroyed." << std::endl;
};

Brain::Brain(const Brain& other) {
	*this = other;
	std::cout << "Brain copy has been created." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(const int index) const {
	return _ideas[index];
}

void Brain::setIdea(const std::string idea, const int index) {
	_ideas[index] = idea;
}
