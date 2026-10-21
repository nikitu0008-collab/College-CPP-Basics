#include <iostream>
int myDegree(int osn, int step) {
	int degree = 1;
	for (int i = 0; i < step; i++) {
			degree *= osn;
		}
return degree;
}

int main() {
	system("chcp 65001");
	int osn;
	std::cout << "Введите число: ";
	std::cin >> osn;
	int step;
	std::cout << "Введите степень: ";
	std::cin >> step;
	std::cout << "Число в степени: " << myDegree(osn, step);

}