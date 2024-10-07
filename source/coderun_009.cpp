// multiply and transpose :: умножай и транспонируй

#include <iostream>
#include <vector>

int main() {

	short int n, m, k;
	std::cin >> n >> m >> k;

	std::vector<std::vector<short int> > matrixA (n, std::vector<short int>(m));
	std::vector<std::vector<short int> > matrixB (m, std::vector<short int>(k));

	short int matrixPiece;
	for (short int i = 0; i < n; ++i) {
		
		for (short int j = 0; j < m; ++j) {
			
			std::cin >> matrixPiece;
			matrixA.at(i).at(j) = matrixPiece;
		}
	}

	for (short int i = 0; i < m; ++i) {
		
		for (short int j = 0; j < k; ++j) {
			
			std::cin >> matrixPiece;
			matrixB.at(i).at(j) = matrixPiece;
		}
	}

	//multiplying matrices
	std::vector<std::vector<short int> > matrixC (n, std::vector<short int>(k));
	
	for (short int i = 0; i < n; ++i) {
		
		for (short int j = 0; j < k; ++j) {
			
			matrixC.at(i).at(j) = 0;

			for (short int l = 0; l < m; ++l) {

				matrixC.at(i).at(j) += (matrixA.at(i).at(l) * matrixB.at(l).at(j));
			}
		}
	}

	//transposing the matrix
	std::vector<std::vector<short int> > matrixCT (k, std::vector<short int>(n));

	for (short int i = 0; i < k; ++i) {
		
		for (short int j = 0; j < n; ++j) {
			
			matrixCT.at(i).at(j) = matrixC.at(j).at(i);
			std::cout << matrixCT.at(i).at(j) << ' ';
		}

		std::cout << std::endl;
	}

	return 0;
}
