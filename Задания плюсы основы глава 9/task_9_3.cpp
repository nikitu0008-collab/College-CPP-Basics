#include <iostream>
int main() {
	system("chcp 65001 > nul");
	srand(static_cast <int>(time(0)));
	int nicho;
	int arr_size = 1;
	double sum = 0;
	double avg;
	int* arr = nullptr;
	int choice = 0;
	double intnum = 1;

	while (choice != 7) {

		std::cout << R"(МОЖНО ВВОДИТЬ ТОЛЬКО ЧИСЛА
1.Создать массив
2.Вывод массива
3.Поиск максимального и минимального
4.Подсчёт суммы
5.Среднее арифметическое
6.Поиск отрицательных
7.Выход
Ввод: )";
		choice = 0;
		std::cin >> intnum;
		choice = intnum;
		if (choice != intnum || choice <= 0 || choice > 7) {
			system("cls");
			std::cout << "НЕЦЕЛОЕ ЧИСЛО ИЛИ СЛИШКОМ НЕ ОТ 1 ДО 7" << "\n";
		}
		else {
			if (choice == 1) {
				delete[] arr;
				arr = nullptr;
				system("cls");
				std::cout << "Введите кол-во элементов: " << "\n";
				std::cin >> intnum;
				arr_size = intnum;
				if (arr_size <= 0 || arr_size != intnum) { std::cout << "НЕЛЬЗЯ" << "\n"; }
				else {
					std::cout << "Как заполнить? 1.Клавиатура 2.Случайные числа" << '\n';
					std::cin >> intnum;
					nicho = intnum;
					if ((nicho != 1 && nicho != 2) || nicho != intnum) { std::cout << "НЕЛЬЗЯ" << "\n"; }
					else {
						arr = new int[arr_size];
						if (nicho == 1) {
							std::cout << "Введите все элементы: " << "\n";
							for (int i = 0; i < arr_size; i++) {
								std::cin >> intnum;
								arr[i] = intnum;
							}
						}
						if (nicho == 2) {
							for (int i = 0; i < arr_size; i++) {
								arr[i] = rand() % 201 - 100;
							}
						}
					}
				}
			}
			if (choice == 2) {
				system("cls");
				if (arr == nullptr) { std::cout << "НЕЛЬЗЯ" << "\n"; }
				else {
					for (int i = 0; i < arr_size; i++) {
						std::cout << arr[i] << " ";

					}
					std::cout << "\n";
				}
			}
			if (choice == 3) {
				system("cls");
				if (arr == nullptr) { std::cout << "НЕЛЬЗЯ" << "\n"; }
				else {
					int max = arr[0];
					int min = arr[0];
					for (int i = 0; i < arr_size; i++) {
						if (min > arr[i]) min = arr[i];
						if (max < arr[i]) max = arr[i];
					}
					std::cout << "Максимальный и минимальный элемент массива: " << max << " " << min << "\n";
				}
			}
			if (choice == 4) {
				system("cls");
				if (arr == nullptr) { std::cout << "НЕЛЬЗЯ" << "\n"; }
				else {
					for (int i = 0; i < arr_size; i++) {
						sum += arr[i];
					}
					std::cout << "Сумма элементов: " << sum << "\n";
					sum *= 0;
				}
			}
			if (choice == 5) {
				system("cls");
				if (arr == nullptr) { std::cout << "НЕЛЬЗЯ" << "\n"; }
				else {
					for (int i = 0; i < arr_size; i++) {
						sum += arr[i];
					}
					avg = sum / arr_size;
					std::cout << "Среднее арифметическое: " << avg << "\n";
					sum *= 0;
					avg *= 0;
				}
			}
			if (choice == 6) {
				system("cls");
				if (arr == nullptr) { std::cout << "НЕЛЬЗЯ" << "\n"; }
				else {
					for (int i = 0; i < arr_size; i++) {
						if (arr[i] < 0) std::cout << "Элемент по адресу " << "[" << i << "]" << " Отрицательный" << "\n";
					}

				}
			}
		}
		
	}
}