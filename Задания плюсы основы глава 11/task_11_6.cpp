#include <iostream>
#include <vector>

void vectorFunc(std::vector<int>vectr) {
	for (size_t i = 0; i < vectr.size(); i++) {
		std::cout << i << " элемент вектора " << vectr.at(i) << " По адресу " << " - " << &vectr.at(i) << "\n";
	}
}


int main() {
	system("chcp 65001");
	srand(static_cast<int>(time(0)));
	std::vector<int>vectr(20);

	for (size_t i = 0; i < vectr.size(); i++) vectr.at(i) = i;
	vectorFunc(vectr);
	std::cout << "\n";

	for (size_t i = 0; i < vectr.size(); i++) vectr.at(i) = rand() % 10;
	vectorFunc(vectr);
	std::cout << "\n";

	vectr.resize(19);
	for (size_t i = 0; i < vectr.size(); i++) vectr.at(i) = i;
	vectorFunc(vectr);
	std::cout << "\n";

	vectr.resize(21);
	for (size_t i = 0; i < vectr.size(); i++) vectr.at(i) = rand() % 10;
	vectorFunc(vectr);

}