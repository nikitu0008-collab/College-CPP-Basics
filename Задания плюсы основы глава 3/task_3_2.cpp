#include <iostream>
#include <cstdlib>
#include <cmath>     // для std::abs

auto main() -> int {
    system("chcp 1251");

    double num1, num2;
    std::cout << "Введите 2 числа: ";
    std::cin >> num1 >> num2;

    double modul_num1 = std::abs(num1);
    double modul_num2 = std::abs(num2);
    double modul_sum   = std::abs(num1 + num2);

    std::cout << "\nмодуль 1 числа: " << modul_num1 << ','
              << "\nмодуль 2 числа: " << modul_num2 << ','
              << "\nСумма модулей: " << modul_num1 + modul_num2 << ','
              << "\nМодуль суммы: " << modul_sum << "\n";

    return EXIT_SUCCESS;
}