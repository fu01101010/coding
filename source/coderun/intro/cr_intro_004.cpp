// placing tags :: выставление тегов

#include <iostream>
#include <cmath>

int main() {

	int n_problems, sum = 0;

	std::cin >> n_problems;

	for(int i = 1; i <= n_problems; ++i) {
		
		int result = ((std::pow(((1 + std::pow(5, 0.5)) / 2), i) - std::pow(((1 - pow(5, 0.5)) / 2), i)) / (std::pow(5, 0.5)));
		sum += result;
	}

	std::cout << sum << std::endl;

	return 0;
}
