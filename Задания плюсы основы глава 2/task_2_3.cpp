#include <iostream>
#include <cstdint>
#include <cstdlib>
auto main() -> int{
	system("chcp 65001");
	uint16_t x, t, g; 
        int k;
	std::cout << "Введите значение переменных";
	std::cin >> x >> t >> g;
	k = (x / 2 + (t + t + t) - (g + g) - t * t);
	std::cout << "Сумма чисел: " << k;
	return EXIT_SUCCESS;
}