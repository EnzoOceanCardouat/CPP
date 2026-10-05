#pragma once

#include <iostream>

class Brain {
	protected:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain& other);
		virtual ~Brain();
		Brain& operator=(const Brain& other);
		std::string getIdea(const int index) const;
		void setIdea(const std::string idea, const int index);
};
