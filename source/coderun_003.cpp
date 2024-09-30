// larger than adjacent :: больше чем соседи

#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> data;
	int number, sum = 0;

    	while (std::cin >> number) {

		data.push_back(number);
	}

    	for (int i = 1; i < data.size() - 1; ++i) {

		if (data.at(i) > data.at(i - 1) && data.at(i) > data.at(i + 1))
			sum++;
	}

	std::cout << sum << std::endl;

	return 0;
}
