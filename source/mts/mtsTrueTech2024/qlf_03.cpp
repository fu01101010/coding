// connections statistics :: статистика соединений

#include <iostream>

int main() {
	
	int nConn;
	std::cin >> nConn;

	long long int sum = 0;
	long long int cPiece;
	for (int i = 0; i < nConn; ++i) {
		
		std::cin >> cPiece;
		sum+=cPiece;
	}

	if (sum%2) 
		std::cout << 0 << std::endl;
	else 
		std::cout << 1 << std::endl;

	return 0;
}
