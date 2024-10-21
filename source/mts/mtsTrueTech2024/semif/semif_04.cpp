// king's life :: king's life

#include <iostream>
#include <utility>
#include <set>
#include <vector>
#include <cmath>

int main() {

	int nPairs, nRequests;
	std::cin >> nPairs >> nRequests; 
	
	std::set<std::pair<int, int> > pawnsDataS;
	int x, y;
	for (int i = 0; i < nPairs; ++i) {
		
		std::cin >> x >> y;
		pawnsDataS.insert(std::pair<int, int>(x, y));
	}

	std::vector<std::pair<int, int> > pawnsDataV(pawnsDataS.begin(), pawnsDataS.end());
	
	for (int i = 0; i < nRequests; ++i) {

		int minDistance = 1002;
		std::cin >> x >> y;

		for(std::pair<int, int> coord : pawnsDataV) {
			
			minDistance = std::min(std::max(std::abs(coord.first - x), std::abs(coord.second - y)), minDistance);
		}	

		std::cout << minDistance << std::endl;
	}

	return 0;
}
