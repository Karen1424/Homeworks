//Գրել ֆունկցիա, որը ստանում է զանգված եւ տպում է զանգվածի տարրերը
//էկրանին ռեկուրսիվ տարբերակով։
#include <iostream>
void RecArrElems(int *, int);
int main () {
	const int size = 10;
	int arr[size] {1,2,3,4,5,6,7,8,9,10};
	RecArrElems(arr, size);
	return 0;
}
void RecArrElems(int * p,int size) {
	if(size) {
  	std::cout << *p << " ";
  	RecArrElems(++p,--size);
  	}
} 