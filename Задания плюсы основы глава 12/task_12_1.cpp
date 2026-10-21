#include <iostream>
#include <vector>
int main() {
	system("chcp 65001");
	char name[30], surename[30];
	std::cout << "Введите имя(Максимум 30 символов)>_ ";
	std::cin >> name;
	std::cout << "Введите фамилию(Максимум 30 символов)>_ ";
	std::cin >> surename;
	std::cout << "Приветствую " << surename << ", " << name;
	
}