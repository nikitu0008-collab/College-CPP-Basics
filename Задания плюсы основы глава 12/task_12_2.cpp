#include <iostream>
int myFunc(char words[]) {
	int count = 0;
	while (words[count] != '\0') {
		count++;
	}
	return count;
}
int main() {
	system("chcp 65001");
	char word[30];
	std::cout << "Введите строку максимум 30 элементов: ";
	std::cin >> word;
	std::cout << "\n";
	std::cout << "Размер строки = " << myFunc(word);
}