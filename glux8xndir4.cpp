//Նախորդ խնդրիֆունկցիան իրականացնել իտերատիվ տարբերակով
#include <iostream>
void GetNums(int);
int main () {
	int x = 0;
	std::cin >> x;
	GetNums(x);
	return 0;
}
void GetNums(int num) {
	while(num) {
		if(num>0) {
			std::cout << num << " ";
			num--;
		} else {
			std::cout << num << " ";
			num++;
		}
	}
	std::cout << 0 << " ";
}