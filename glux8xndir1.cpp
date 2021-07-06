//. Իրականացնելֆակտորիալի հաշվարկում ըռեկուրսիվ եղանակով
#include <iostream>
int factorial(int);
int main () {
	int x = 0;
	std::cin >> x;
	std::cout << factorial(x);
	return 0;
}
int factorial (int x) {
	if(x == 0 ){
	return 0;
	}
	if(x==1) {
	return 1;
	}
	if(x>1) {
	return x*factorial(x-1);
	}
          
}