#include <iostream>
#include <cstdint>
#include <cstdlib>
auto main() -> int{
	system("chcp 1251");
	uint16_t x, t, g; 
        int k;
	std::cout << "¬ведите значение переменных";
	std::cin >> x >> t >> g;
	k = (x / 2 + (t + t + t) - (g + g) - t * t);
	std::cout << "—умма чисел: " << k;
	return EXIT_SUCCESS;
}