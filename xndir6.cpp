//Մուտքագրելերկու զանգվածներ, տպել դրանց արտադրյալը։
#include <iostream>
int main () {
	const int size1 = 4;
	const int size2 = 6;
	int arr1[size1] {1,5,3,8};
	int arr2[size2] {5,9,8,1,2,7};
	for(int i = 0; i < size2;++i ) {
		if(i < size1) {
			std::cout << arr1[i]*arr2[i] << std::endl;
		} else {
			std::cout << arr2[i] << std::endl;
		}
	}


	return 0;
}