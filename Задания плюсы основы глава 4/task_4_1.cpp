#include <iostream>
#include <cstdlib>   // для EXIT_SUCCESS, EXIT_FAILURE, system

auto main() -> int {
    system("chcp 65001");

    int num1 = 0;
    int num2 = 0;
    int nachalo = 0;
    int konec = 0;

    // Задание 1
    std::cout << "Задание 1: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << i << ' ';
    }

    // Задание 2
    std::cout << "\nЗадание 2: ";
    for (int i = -10; i < 10; ++i) {
        std::cout << i << ' ';
    }

    // Задание 3
    std::cout << "\nЗадание 3: ";
    for (int i = 15; i > -25; --i) {
        std::cout << i << ' ';
    }

    // Задание 4
    std::cout << "\nЗадание 4: ";
    for (int i = 0; i < 100; i += 15) {
        std::cout << i << ' ';
    }

    // Задание 5
    std::cout << "\nЗадание 5: \nВведите число больше 0: ";
    std::cin >> num1;
    if (std::cin.fail() || num1 <= 0) {
        std::cerr << "Ошибка: нужно положительное число.\n";
        return EXIT_FAILURE;
    }
    for (int i = 0; i < num1; ++i) {
        std::cout << i << ' ';
    }

    // Задание 6
    std::cout << "\nЗадание 6: \nВведите число меньше 100: ";
    std::cin >> num2;
    if (std::cin.fail() || num2 >= 100) {
        std::cerr << "Ошибка: нужно число от 0 до 99.\n";
        return EXIT_FAILURE;
    }
    for (int i = num2; i < 100; ++i) {
        std::cout << i << ' ';
    }

    // Задание 7
    std::cout << "\nЗадание 7: \nВведите начало диапазона: ";
    std::cin >> nachalo;
    std::cout << "Введите конец диапазона: ";
    std::cin >> konec;
    if (std::cin.fail()) {
        std::cerr << "Ошибка ввода.\n";
        return EXIT_FAILURE;
    }

    // Явное определение направления цикла вместо тернарного оператора внутри for
    if (nachalo <= konec) {
        for (int i = nachalo; i <= konec; ++i) {
            std::cout << i << ' ';
        }
    } else {
        for (int i = nachalo; i >= konec; --i) {
            std::cout << i << ' ';
        }
    }

    std::cout << '\n';
    return EXIT_SUCCESS;
}