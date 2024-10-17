// billing :: тарификация

#include <iostream>

int main() {
	
	int a, b, u;
	std::cin >> a >> b >> u;
	
	int result;
	if ((u - 100) > 0)
		result = a + ((u - 100) * b);
	else
		result = a;

	std::cout << result << std::endl;

	return 0;
}
