#include <iostream>
int main() {
	system("chcp 65001");
	char name[30];
	char place[30];
	int day;
	int month;
	int year;
	std::cout << "Введите своё имя >_:";
	std::cin >> name;
	std::cout << "\n" << "Введите день рождения >_:";
	std::cin >> day;
	std::cout << "\n" << "Введите месяц рождения >_:";
	std::cin >> month;
	std::cout << "\n" << "Введите год рождения >_:";
	std::cin >> year;
	std::cout << "\n" << "Откуда вы? >_:";
	std::cin >> place;
	int age = 2026 - year;
	std::cout << " Hello, " << name << " from " << place << ' ' << day << '.' << month << '.' << year << '.' << " dob. " << "Your age is " << age;


}