// OpenCalculator :: OpenCalculator

#include <iostream>
#include <set>

int main() {

	std::set<short int> data;

	int helper;
	short int dataPiece;

	for (int i = 0; i < 3; ++i) {

		std::cin >> dataPiece;
		data.insert(dataPiece);
	}	

	std::cin >> helper;

	short int result = 0;

	while (helper > 0) {
	
		auto iteratorHelper = data.find(helper % 10);
		
		if (iteratorHelper == data.end()) {
			
			data.insert(helper % 10);
			result++;
		}

		helper /= 10;
	}

	std::cout << result << std::endl;

	return 0;
}
