#include <iostream>
void myMult(int& num,const int& mult) {
	num *= mult;
}
int main() {
	system("chcp 65001");
	int num = 0;
	std::cout << "Введите значение: ";
	std::cin >> num;
	int mult = 0;
	std::cout <<"\n"<< "Введите множитель: ";
	std::cin >> mult;
	myMult(num, mult);
	std::cout << "\n" << "Число после умножения: " << num << "\n";
}
