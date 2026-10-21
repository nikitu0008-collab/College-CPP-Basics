#include <iostream>
#include <string>
int main() {
	system("chcp 65001");
	std::string str;
	std::cout << "Введите строку: ";
	std::getline(std::cin, str);
	double kirill = 0, latin = 0;
	for (size_t i = 0; i < str.size(); i++) {
		// Кириллица в UTF-8 кодируется байтами 0xD0-0xD1, латиница — 0x00-0x7F
		const auto code = static_cast<unsigned char>(str.at(i));
		if (code >= 0xD0 && code <= 0xD1) {
			kirill++;
			std::cout << str.at(i) << " ";
		}
	}
	std::cout << "\n" << kirill;
	std::cout << '\n';
	for (size_t i = 0; i < str.size(); i++) {
		const auto code = static_cast<unsigned char>(str.at(i));
		if ((code >= 'A' && code <= 'Z') || (code >= 'a' && code <= 'z')) {
			latin++;
			std::cout << str.at(i) << " ";
		}
	}
	double sum = kirill + latin;
	double procent_kirila = kirill / sum * 100;
	double procent_latini = latin / sum * 100;
	std::cout << "Процент кирилицы " << procent_kirila << "%";
	std::cout << "\n" << "Процент латиницы " << procent_latini << "%";
	

}