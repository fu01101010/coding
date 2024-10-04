// do the list values increase? :: возрастает ли список?

#include <iostream>

int main() {

	int num, next_num;
	bool helperFlag = true;

	std::cin >> num;

	while(std::cin >> next_num) {
		
		if (next_num <= num) 
			helperFlag = false;

		num = next_num;
	}

	if(helperFlag)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	return 0;
}
