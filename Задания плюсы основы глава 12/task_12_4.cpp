#include <iostream>
#include <cstring>
int main() {
	system("chcp 65001");
	char word[30];
	std::cout << "Введите слово: ";
	std::cin >> word;
	for (size_t i = 0; i + 1 < strlen(word); i++) {
		std::cout << word[i] << "\n";
	}
	for (size_t i = strlen(word); i > 0; i--) {
		std::cout << word[i] << " ";
	}
}