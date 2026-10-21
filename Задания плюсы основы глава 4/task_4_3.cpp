#include <iostream>
#include <cstdlib>   // для system, EXIT_SUCCESS, EXIT_FAILURE

auto main() -> int {
    system("chcp 65001");

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    std::cout << "Введите 4 числа: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    // Проверка, что ввод был успешным (пользователь ввёл четыре целых числа)
    if (std::cin.fail()) {
        std::cerr << "Ошибка: необходимо ввести четыре целых числа.\n";
        return EXIT_FAILURE;
    }

    int sum = num1 + num2 + num3 + num4;

    std::cout << "Сумма: " << sum << '\n';

    return EXIT_SUCCESS;
}