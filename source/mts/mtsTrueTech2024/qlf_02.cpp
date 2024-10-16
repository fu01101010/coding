// mts-strings :: мтс-строки

#include <iostream>
#include <string>

int main() {

	std::string data;
	std::cin >> data;

	bool mFound = 0, tFound = 0, sFound = 0;

	for (int i = 0; i < data.size(); ++i) {

		if (!mFound) 
			if (data.at(i) == 'M')
				mFound = 1;

		if (mFound && !tFound)
			if (data.at(i) == 'T')
				tFound = 1;

		if (mFound && tFound && !sFound)
			if (data.at(i) == 'S')
				sFound = 1;
	}

	if (mFound && tFound && sFound)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;

	return 0;
}
