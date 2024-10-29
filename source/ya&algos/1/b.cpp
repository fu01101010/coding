// tees and socks :: майки и носки

#include <iostream>
#include <algorithm>

int main () {
	
	int bTees, rTees, bSocks, rSocks;
	std::cin >> bTees >> rTees >> bSocks >> rSocks;
	
	if (bTees == 0) {
		
		std::cout << "1 " << bSocks + 1 << std::endl;
	} else if (rTees == 0) {
		
		std::cout << "1 " << rSocks + 1 << std::endl;
	} else if (bSocks == 0) {

		std::cout << bTees + 1 << " 1" << std::endl;
	} else if (rSocks == 0) {
		
		std::cout << rTees + 1 << " 1" << std::endl;
	} else if (((bTees > rTees) && (bSocks > rSocks)) || ((bTees < rTees) && (bSocks < rSocks))){
		
		if ((((std::min(bTees, rTees) + 1) + std::min(bSocks, rSocks) + 1) <= (std::max(bTees, rTees) + 2)) &&
		    (((std::min(bTees, rTees) + 1) + std::min(bSocks, rSocks) + 1) <= (std::max(bSocks, rSocks) + 2))) {
			
			std::cout << std::min(bTees, rTees) + 1 << ' ' << std::min(bSocks, rSocks) + 1 << std::endl;
		} else if ((std::max(bTees, rTees) + 2) <= (std::max(bSocks, rSocks) + 2)) {

			std::cout << std::max(bTees, rTees) + 1 << " 1" << std::endl;
		} else {
			
			std::cout << "1 " << std::max(bSocks, rSocks) + 1 << std::endl;
		}	
	} else {
		
		if ((std::max(bTees, rTees) + 2) <= (std::max(bSocks, rSocks) + 2)) {
			
			std::cout << std::max(bTees, rTees) + 1 << " 1" << std::endl;
		} else {
			
			std::cout << "1 " << std::max(bSocks, rSocks) + 1 << std::endl;
		}
	}		

	return 0;
}
