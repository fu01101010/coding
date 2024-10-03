// 29th analytics problem :: 29 задача аналитики

#include <iomanip>
#include <iostream>
#include <cmath>

int main() {

	int a, b, c;
	std::cin >> a >> b >> c;

	int disc = (b * b) - (4 * a * c);

	if (disc < 0) {
		
		std::cout << 0 << std::endl;
	} else if (disc == 0) {
		
		float x1 = -b / (2.0f * a);
		std::cout << 1 << std::endl << std::fixed << std::showpoint << std::setprecision(6) << x1 << std::endl;
	} else {
		
		float x1 = ((-1.0f * b) - std::sqrt(disc)) / (2.0f * a);
		float x2 = ((-1.0f * b) + std::sqrt(disc)) / (2.0f * a);
		
		if (x1 > x2) {

			std::cout << 2 << std::endl << std::fixed << std::showpoint << std::setprecision(6) << x2 << ' ' << x1 << std::endl;
		} else {
			
			std::cout << 2 << std::endl << std::fixed << std::showpoint << std::setprecision(6) << x1 << ' ' << x2 << std::endl;
		}
	}

	return 0;
}
