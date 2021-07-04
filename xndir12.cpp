//Տպել զանգվածի զույգ թվերի քանակը։
#include <iostream>
int main () {
	const int size = 10;
	int arr[size] {1,5,6,8,9,10,11,14,3,17};
	for(int i = 0;  i < size; ++i) {
		if(arr[i]%2 == 0){
			std::cout << arr[i] << std::endl;
		}
	}
	return 0;
}