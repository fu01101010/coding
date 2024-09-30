// triangle :: треугольник

#include <iostream>

int main() {

	int a, b, c;

	std::cin >> a >> b >> c;

	if(a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
		std::cout << "YES" << std::endl;
	else 
		std::cout << "NO" << std::endl;

	return 0;
}
