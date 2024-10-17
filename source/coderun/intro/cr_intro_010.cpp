// one more number theory problem :: ещё одна задача на теорию чисел

#include <iostream>
#include <algorithm>

int main() {

	long long a, b;
	std::cin >> a >> b;

	int helperA = a, helperB = b;

	// calculating GCD
	while (helperA > 0 && helperB > 0) {
		
		if (helperA >= helperB) 
			helperA %= helperB;

		else
			helperB %= helperA;
	}

	int GCD = std::max(helperA, helperB);

	//calculating LCM
	long long LCM = (a * b);

	std::cout << GCD << ' ' << LCM << std::endl;

	return 0;
}
