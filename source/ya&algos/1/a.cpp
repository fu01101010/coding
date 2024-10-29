// the raft :: плот

#include <iostream>

int main() {
	
	int swCornerX, swCornerY, neCornerX, neCornerY, swimmerPosX, swimmerPosY;

	std::cin >> swCornerX >> swCornerY >> neCornerX >> neCornerY >> swimmerPosX >> swimmerPosY;

	if (swimmerPosX < swCornerX) {
		
		if (swimmerPosY < swCornerY) {
			
			std::cout << "SW" << std::endl;
			return 0;
		} else if (swimmerPosY >= swCornerY && swimmerPosY <= neCornerY) {
			
			std::cout << 'W' << std::endl;
			return 0;
		} else {
			
			std::cout << "NW" << std::endl;
			return 0;
		}
	} else if (swimmerPosX >= swCornerX && swimmerPosX <= neCornerX) {
		
		if (swimmerPosY < swCornerY) {
			
			std::cout << 'S' << std::endl;
		} else {
			
			std::cout << 'N' << std::endl;
		}
	} else {
		
		if (swimmerPosY > neCornerY) {
			
			std::cout << "NE" << std::endl;
			return 0;
		} else if (swimmerPosY <= neCornerY && swimmerPosY >= swCornerY) {
			
			std::cout << 'E' << std::endl;
			return 0;
		} else {
			
			std::cout << "SE" << std::endl;
			return 0;
		}
	}

	return 0;
}
