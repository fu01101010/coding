// board caption :: надпись на табло

#include <iostream>
#include <vector>

int main() {

	int n;
	std::cin >> n;

	std::vector<std::vector<char> > data(n, std::vector<char>(n));

	char item;
	for (int i = 0; i < n; ++i) {

		for (int j = 0; j < n; ++j) {
			
			std::cin >> item;
			data.at(i).at(j) = item;	
		}
	}

	// now find the starting point of the letter
	
	bool foundStart = false;
	int startI, startJ;
	for (startI = 0; startI < n; ++startI) {

		for (startJ = 0; startJ < n; ++startJ) {
			
			if (data.at(startI).at(startJ) == '#') {
				foundStart = true;
				break;	
			}
		}
		if (foundStart)
			break;
	}

	// found starting i and j (counting from top left corner going right and down)

	// now find end of figure in i-direction
	
	int endI = startI;

	while (endI < (n - 1)) {
		
		if (data.at(endI + 1).at(startJ) == '#') 
				++endI;				
		else
			break;
	}
	
	
	// if only one row - its 'X'
	if (!(endI - startI)) {

		std::cout << 'X' << std::endl;
		return 0;
	}
	

	// now check if there are no more '#'s to the left and bottom of the starting tile
	for (int i = 0; i < n; ++i) {

		for (int j = 0; j < startJ; ++j) {
			
			if (data.at(i).at(j) == '#') {
				std::cout << 'X' << std::endl;
				return 0;
			}
		}
	}

	// now find end of figure in j direction for top and bottom side
	
	int endJTop = startJ, endJBottom = startJ;
	int lastJTop = startJ, lastJBottom = startJ;
	int gapTop = 0, gapBottom = 0;

	for (int j = startJ; j < n - 1; ++j) {
		
		if (data.at(startI).at(j + 1) == '#')
			lastJTop = (j + 1);
		if (data.at(endI).at(j + 1) == '#')
			lastJBottom = (j + 1);

		if (data.at(startI).at(j) == '.' && data.at(startI).at(j + 1) == '#')
			gapTop++;
		if (data.at(endI).at(j) == '.' && data.at(endI).at(j + 1) == '#')
			gapBottom++;
	}

	if (gapTop > 1 || gapBottom > 1) {
		std::cout << 'X' << std::endl;
		return 0;
	}

	endJTop = lastJTop;
	endJBottom = lastJBottom;

	// now check if there are no more '#'s on top bottom right of the figure
	
	// top
	for (int i = 0; i < startI; ++i) {

		for (int j = startJ; j < n; ++j) {
			
			if (data.at(i).at(j) == '#') {
				std::cout << 'X' << std::endl;
				return 0;
			}
		}
	}

	// bottom
	for (int i = endI + 1; i < n; ++i) {

		for (int j = startJ; j < n; ++j) {
			
			if (data.at(i).at(j) == '#') {
				std::cout << 'X' << std::endl;
				return 0;
			}
		}
	}

	std::cout << 't' << std::endl;


	// right
	for (int i = 0; i < n; ++i) {

		for (int j = endJTop + 1; j < n; ++j) {
			
			if (data.at(i).at(j) == '#') {
				std::cout << 'X' << std::endl;
				return 0;
			}
		}
	}

	bool gapsInside = false;
	int firstGapI, firstGapJ, lastGapI, lastGapJ;
	bool firstGap = true;
	if (!(gapTop) && !gapBottom && endJTop == endJBottom) {
		//check for I
		//
		for (int i = startI; i <= endI; ++i) {
			for (int j = startJ; j <= endJTop; ++j) {
				if (data.at(i).at(j) == '.') {
					if (firstGap) {
						firstGap = false;
						firstGapI = i;
						firstGapJ = j;
					}
					gapsInside = true;
					lastGapI = i;
					lastGapJ = j;

				}
			}
		}
	}
	
	if (!gapsInside) {
		std::cout << 'I' << std::endl;
		return 0;
	}

	std::cout << firstGapI << ' ' << lastGapI << std::endl;
	std::cout << firstGapJ << ' ' << lastGapJ << std::endl;

	if (gapsInside);


	for (int i = 0; i < n; ++i) {

		for (int j = 0; j < n; ++j) {
			
			std::cout << data.at(i).at(j) << ' ';	
		}
		std::cout << std::endl;
	}


	std::cout << "figure starts at: i:" << startI << " and j:" << startJ << std::endl;
	std::cout << "figure ends at i:" << startI << " and j:" << endJTop << " on top." << std::endl;
	std::cout << "figure ends at i:" << endI << " and j:" << endJBottom << " on the bottom." << std::endl;
	std::cout << "gap top" << gapTop << std::endl << "gapBottom" << gapBottom << std::endl;
	std::cout << "lastJTop " << lastJTop << " lastJBottom" << lastJBottom;

	return 0;
}
