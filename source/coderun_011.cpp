// synonim vocabulary :: словарь синонимов

#include<iostream>
#include <vector>
#include <string>

int main() {

	int nWords;
	std::cin >> nWords;

	std::vector<std::vector<std::string> > vocabulary (nWords, std::vector<std::string>(2));

	std::string wordA, wordB;
	for (int i = 0; i < nWords; ++i) {
		
		std::cin >> wordA >> wordB;

		vocabulary.at(i).at(0) = wordA;
		vocabulary.at(i).at(1) = wordB;
	}

	std::string toFind;
	std::cin >> toFind;

	for (int i = 0; i < nWords; ++i) {
		
		if (vocabulary.at(i).at(0) == toFind) {
			
			std::cout << vocabulary.at(i).at(1) << std::endl;
			return 0;
		} else if (vocabulary.at(i).at(1) == toFind) {
			
			std::cout << vocabulary.at(i).at(0) << std::endl;
			return 0;

		}
	}

	return 0;
}
