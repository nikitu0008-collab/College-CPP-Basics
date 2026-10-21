#include <iostream>
#include <cstdint>
#include <cstdlib>
auto main() -> int{
	system("chcp 65001");
	int16_t num1, num2;
	std::cout << "1 число: "; std::cin >> num1; std::cout << "2 число: "; std::cin >> num2;
	std::cout << "Разница:" << num1 - num2 << "Сумма:" << num1 + num2 << "Произведение:" << num1 * num2;
	return EXIT_SUCCESS;

}