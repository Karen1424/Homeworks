//ԳրելՖիբոնաչիի n-րդթիվը հաշվող ֆունկցիա իտերատիվ տարբերակով
#include <iostream>
int FibonachiNum(int);
int main () {
	int x = 0;
	std::cin >> x;
	std::cout << FibonachiNum(x);
	return 0;
}
int FibonachiNum(int num) {
	int a = 0;
	int b = 1;
	for(int i = 0; i < num;++i) {
		int tmp = a+b;
		a = b;
		b = tmp;
	}
	return b;
}