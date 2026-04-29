#include <iostream>
#include <cstdlib>

auto main() -> int{
    system("chcp 1251");

    double num1, num2, num3, num4;

    std::cout << "1 ?????: ";
    std::cin >> num1;
    std::cout << "2 ?????: ";
    std::cin >> num2;
    std::cout << "3 ?????: ";
    std::cin >> num3;
    std::cout << "4 ?????: ";
    std::cin >> num4;

    std::cout << num3 << ", " << num2 << ", " << num4 << ", " << num1 << '\n';

    return EXIT_SUCCESS;
}