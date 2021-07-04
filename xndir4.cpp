//Մուտքագրել զանգվածի տարրերի արժեքները։
//Տպելզանգվածի տարրերը հակառակ հերթականությամբ։
#include <iostream>
int main () {
	const int size = 10;
	int arr[size];
	for(int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
        for(int i = size-1; i >= 0; --i) {
		std::cout << arr[i] << " ";
	}


	return 0;
}