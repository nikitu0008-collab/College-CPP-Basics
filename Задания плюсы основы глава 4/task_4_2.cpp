#include <iostream>
#include <cstdlib>

auto main() -> int {
    system("chcp 65001");

    std::cout << "Введите сколько раз: ";
    int hello = 0;
    std::cin >> hello;

    if (std::cin.fail() || hello < 0) {
        std::cerr << "Ошибка: нужно ввести неотрицательное целое число.\n";
        return EXIT_FAILURE;
    }

    for (int i = 0; i <= hello; ++i) {
        std::cout << i << ". Hello underworld!\n";
    }

    return EXIT_SUCCESS;
}