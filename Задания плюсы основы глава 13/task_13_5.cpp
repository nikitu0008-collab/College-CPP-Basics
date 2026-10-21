#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

int main() {
	system("chcp 65001");
	std::string name_file, text, text_rev;
	std::cin >> name_file;
	std::ifstream file(name_file);
	text.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	file.close();

	std::ofstream rev_file("reverse.txt");
	for (int i = static_cast<int>(text.size()) - 1; i >= 0; i--) {
		text_rev.push_back(text.at(i));
	}
	rev_file << text_rev;
	rev_file.close();
}
