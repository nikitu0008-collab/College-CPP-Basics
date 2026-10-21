#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>   // для EXIT_SUCCESS, EXIT_FAILURE, system

auto main() -> int {
    system("chcp 65001");

    int choice;
    double num1 = 0.0, num2 = 0.0;

    std::cout << "1. Вывести сообщение на экран\n"
              << "2. Посчитать сумму чисел\n"
              << "3. Увидеть смертельный файл\n"
              << "4. Остановить критическую систему (не рекомендуется)\n"
              << ">_: ";
    std::cin >> choice;

    // Проверка успешности ввода
    if (std::cin.fail()) {
        std::cerr << "Ошибка: введите число.\n";
        return EXIT_FAILURE;
    }

    //TODO
    //*Явное преобразование типов не требуется, но если бы choice сравнивался с double,
    //*то использовали бы static_cast<double>(choice). Здесь всё в рамках int.

    switch (choice) {
        case 1:
            std::cout << R"(Cactus
        #%:.     
 #%=   ###%=:    
##%=   |##%::    
##%=   ###%=:    
 #%%=  |##%=:    
 ##%== ###%=:    ===
  ##%%=!##%=:    ====
   ###%%##%=   :==== 
    ######%=: .:==== 
      ####%%======= 
       ###%%%===: 
       |%#%%=:=:  
       ####%=:   
       |##%%:    
-------####%:---=
       |%#%%:    )";
            break;

        case 2:
            std::cout << "Введите 2 числа: ";
            std::cin >> num1 >> num2;
            if (std::cin.fail()) {
                std::cerr << "Ошибка ввода чисел.\n";
                return EXIT_FAILURE;
            }
            std::cout << "Сумма этих чисел: " << num1 + num2 << '\n';
            break;

        case 3:
            system("Start C:\\123\\23.mp3");
            system("Start C:\\123\\123.jfif");
            system("taskKill /im 123.jfif /f");
            break;

        case 4:
            system("Taskkill /im System");
            break;

        default:
            std::cerr << "Неверный выбор. Введите число от 1 до 4.\n";
            return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}