// determine sequence type :: определить вид последовательности

#include <iostream>

int main() {

	int n1, n2;
	std::cin >> n1 >> n2;

	int nASC = 0, nDES = 0, nCON = 0;

	while (n2 != -2000000000) {
		
		if (n2 > n1)
			++nASC;
		else if(n2 < n1)
			++nDES;
		else
			++nCON;

		n1 = n2;
		std::cin >> n2;
	}

	if (nCON) {

		if(nASC && nDES)
			std::cout << "RANDOM" << std::endl;
		else if (nASC) 
			std::cout << "WEAKLY ASCENDING" << std::endl;
		else if (nDES)
			std::cout << "WEAKLY DESCENDING" << std::endl;
		else
			std::cout << "CONSTANT" << std::endl;
	}
	else if(nASC && !nDES)
		std::cout << "ASCENDING" << std::endl;
	else if(nDES && !nASC)
		std::cout << "DESCENDING" << std::endl;
	else
		std::cout << "RANDOM" << std::endl;
 
	return 0;
}
