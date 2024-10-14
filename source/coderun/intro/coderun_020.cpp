// word appearence number :: номер появления слова

#include <iostream>
#include <string>
#include <utility>
#include <map>

int main() {
	
	std::string word;
	std::map<std::string, int> text;

	while(std::cin >> word) {
		
		auto search = text.find(word);		

		if (search == text.end()) {
			
			text.insert(std::pair<std::string, int>(word, 0));
			std::cout << 0 << ' ';
		} else {
			
			++(search->second);
			std::cout << search->second << ' ';
		}
	}

	return 0;
}
