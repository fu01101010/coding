// text word count :: количество слов в тексте

#include <iostream>
#include <string>
#include <set>

int main() {
	
	std::string word;
	std::set<std::string> text;

	int result = 0;

	while(std::cin >> word) {

		auto iteratorHelper = text.find(word);
		
		if (iteratorHelper == text.end()) {
			
			text.insert(word);
			result++;
		}
	}

	std::cout << result << std::endl;

	return 0;
}
