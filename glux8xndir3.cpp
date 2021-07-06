//Գրել ֆունկցիա, որըորպես արգումենտ ստանում է num ամբողջ տիպի փոփոխականը
// եւ տպում է num-ից մինչեւ 0 արժեքները։
//Ֆունկցիան իրականացնել ռեկուրսիվ տարբերակով
#include <iostream>
void GetNums(int);

int main () {
	int x = 0;
	std::cin >> x;
	GetNums(x);
	return 0;
 }
void GetNums(int num) {
	if(num == 0) {
		std::cout << 0 << " ";
	}
	if(num > 0) {
		std::cout << num << " ";
		GetNums(num-1);
	}
	if(num < 0) {
		std::cout << num << " ";
		GetNums(num+1);
	}
}
