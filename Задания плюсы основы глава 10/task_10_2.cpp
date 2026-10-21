#include <iostream>
int recFunc(int num, int num2, int num3) {
	if (num < num2) std::cout << recFunc(num+num3, num2, num3) << " ";
	return num;
}
int main() {
	system("chcp 65001");
	int num,dochego,nascoco;
	std::cout << "Введите от чего, до чего, и на сколько: ";
	std::cin >> num >> dochego >> nascoco;
	recFunc(num, dochego, nascoco);
}