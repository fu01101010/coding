// improving GPA :: улучшение успеваемости

#include <iostream>
#include <cmath>

int main() {

	long long int a, b, c, getMoreAs;
	std::cin >> a >> b >> c;

	long long int p1 = 2 * a + 3 * b + 4 * c;
	long long int p2 = a + b + c;	

	long long fw = 0, bw = p2 + 1;

	while (fw < bw) {
		
		getMoreAs = (fw + bw) / 2;

		if (((p1 + 5.0 * getMoreAs)/(p2 + getMoreAs)) < 3.5)
			fw = getMoreAs + 1;
		else
			bw = getMoreAs;
	}

	std::cout << fw << std::endl;

	return 0;
}
