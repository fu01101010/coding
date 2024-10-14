// if castle prisoner :: узник замка иф

#include <iostream>

int main() {
	
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	if(((a <= d) && (b <= e)) || ((a <= e) && (b <= d)) || ((b <= d) && (c <= e)) || ((b <= e) && (c <= d)) || ((a <= d) && (c <= e)) || ((a <= e) && (c <= d)))
		std::cout << "YES" << std::endl;
	else 
		std::cout << "NO" << std::endl;

	return 0;
}
