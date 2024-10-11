// closest number :: ближайшее число

#include <iostream>
#include <vector>

int main() {

	int nNums;
	std::cin >> nNums;

	std::vector<int> nums(nNums);

	int num;
	for (int i = 0; i < nNums; ++i) {
		
		std::cin >> num;
		nums.at(i) = num;
	}

	int findClosestTo;
	std::cin >> findClosestTo;

	int minDif = std::abs(nums.at(0) - findClosestTo);
	int minNum = nums.at(0);

	for (int i = 1; i < nNums; ++i) {
		
		if (abs(nums.at(i) - findClosestTo) < minDif) {
			minDif = abs(nums.at(i) - findClosestTo);
			minNum = nums.at(i);
		}
	}

	std::cout << minNum << std::endl;

	return 0;
}
