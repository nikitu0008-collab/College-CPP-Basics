#include <iostream>
int main() {
	system("chcp 65001");
	int* ptr = new int;
	std::cout << ptr << " = " << *ptr;
	std::cout << "\n Введите новое значение динамической переменной: ";
	std::cin >> *ptr;
	std::cout << ptr << " = " << *ptr << "\n";
	delete ptr;
	ptr = new int(100);
	std::cout << ptr << " = " << *ptr;
}