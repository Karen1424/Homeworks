//Իրականացնելֆակտորիալի հաշվարկումը իտերատիվ եղանակով
#include <iostream>
int factorialI(int);
int main () {

	int x = 0;
	std::cin >> x;
	std::cout << factorialI(x);
	return 0;
}
int factorialI(int x) {
	int sum = 1;
	if(x == 0) {
		return 0;
	}
	if(x == 1) {
		return 1;
	}
	for(int i = 2; i <= x;++i) {
		 sum  = sum * i;
	}
	return sum;

}