#include <iostream>
void recFunc(int num) {
		std::cout << num << " ";
		recFunc(num+1);

}
int main() {
	system("chcp 65001");
	int num = 1;
	recFunc(num);

}