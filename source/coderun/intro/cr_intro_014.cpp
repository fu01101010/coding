// largest three number composition :: наибольшее произведение трёх чисел

#include <iostream>
#include <algorithm>
#include <vector>

int main() {

	std::vector<long double> data;
	long double dataPiece;

	while(std::cin >> dataPiece)
		data.push_back(dataPiece);

	std::sort(data.begin(), data.end());

    	long double n1 = (data.at(0) * data.at(1) * data.at(data.size() - 1));
    	long double n2 = (data.at(data.size() - 1) * data.at(data.size() - 2) * data.at(data.size() - 3));
    
	if(n1 > n2)
		std::cout << (int)data.at(0) << ' ' << (int)data.at(1) << ' '<< (int)data.at(data.size() - 1) << std::endl;
	else 
		std::cout << (int)data.at(data.size() - 1) << ' ' << (int)data.at(data.size() - 2) << ' ' << (int)data.at(data.size() - 3) << std::endl;

	return 0;
}
