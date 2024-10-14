// minesweeper :: сапёр

#include <iostream>
#include <vector>

int main() {
	
	int fieldY, fieldX, nMines;
	std::cin >> fieldY >> fieldX >> nMines;

	std::vector<std::vector<char> > field((fieldY + 2), std::vector<char>(fieldX + 2));

	int mineY, mineX;
	for (int i = 0; i < nMines; ++i) {
		
		std::cin >> mineY >> mineX;
		field.at(mineY).at(mineX) = '*';

		if (field.at(mineY - 1).at(mineX - 1) != '*')
			++field.at(mineY - 1).at(mineX - 1);
		if (field.at(mineY - 1).at(mineX) != '*')
			++field.at(mineY - 1).at(mineX);
		if (field.at(mineY - 1).at(mineX + 1) != '*')
			++field.at(mineY - 1).at(mineX + 1);
		if (field.at(mineY).at(mineX - 1) != '*')
			++field.at(mineY).at(mineX - 1);
		if (field.at(mineY).at(mineX + 1) != '*')
			++field.at(mineY).at(mineX + 1);
		if (field.at(mineY + 1).at(mineX - 1) != '*')
			++field.at(mineY + 1).at(mineX - 1);
		if (field.at(mineY + 1).at(mineX) != '*')
			++field.at(mineY + 1).at(mineX);
		if (field.at(mineY + 1).at(mineX + 1) != '*')
			++field.at(mineY + 1).at(mineX + 1);
	}

	for (int i = 1; i < fieldY + 1; ++i) {
		
		for (int j = 1; j < fieldX + 1; ++j) {
			
			if(field.at(i).at(j) == '*')
				std::cout << (field.at(i).at(j)) << ' ';
			else
				std::cout << (int)(field.at(i).at(j)) << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}
