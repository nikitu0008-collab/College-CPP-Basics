#include <iostream>
int main() {
	system("chcp 65001");
	int num;
	std::cout << "Введите число: ";
	std::cin >> num;
	if (num < 0) num = -num;
	if (num >= 100000 && num <= 999999) {
		std::cout << "Введённое число - шестизначное";
	}
	else std::cout << "Введённое число - не шестизначное";

}