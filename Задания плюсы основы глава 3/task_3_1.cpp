#include <iostream>
#include <cstdlib>  // для EXIT_SUCCESS

auto main() -> int {
    system("chcp 65001");
    double num1, num2, num3;
    std::cout << "Введите 3 вещественных числа: ";
    std::cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        std::cout << num1 << " Больше";
    }
    if (num2 > num1 && num2 > num3) {
        std::cout << num2 << " Больше";
    }
    if (num3 > num2 && num3 > num1) {
        std::cout << num3 << " Больше";
    }
    // При равенстве чисел ничего не выводится (можно доработать по необходимости)

    return EXIT_SUCCESS;
}