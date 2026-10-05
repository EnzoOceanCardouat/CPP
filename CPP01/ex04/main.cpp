#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>

std::string new_file_name(std::string file) {
	std::string replace = ".replace";
	char *new_name = new char[file.length() + replace.length()];
	int i = 0;
	int j = 0;

	while (file[i]) {
		new_name[i] = file[i];
		i++;
	}
	while (j < (int)replace.length()) {
		new_name[i++] = replace[j++];
	}
	new_name[i] = '\0';
	std::string str_new_name = new_name;
	return (str_new_name);
}

bool parsing(int ac, char **av) {
	std::ifstream file(av[1]);
	if (ac < 4) {
		std::cerr << "Error: not enough argument given" << std::endl;
		return true;
	}
	else if (ac > 4) {
		std::cerr << "Error: too much argument given" << std::endl;
		return true;
	}
	if (!file) {
		std::cerr << "Error: fail to open " << av[1] << std::endl;
		return true;
	}
	return false;
}

int main(int ac, char **av) {
	if (parsing(ac, av)) {
		return 1;
	}
	std::ifstream file(av[1]);
	std::string new_file = new_file_name(av[1]);
	std::string line;
	int index;
	std::string new_word = av[3];
	std::string og_word = av[2];
	std::ofstream replace_file(new_file.c_str());

	while (getline(file, line)) {
		index = line.find(og_word);
		while (std::string::npos != (size_t) index) {
			line.erase(index, og_word.length());
			line.insert(index, new_word);
			index = line.find(og_word);
		}
		replace_file << line << std::endl;
	}
	replace_file.close();
	return 0;
}
