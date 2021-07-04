// gntel zangv. min arjeqov tari index@
#include <iostream>
int main () {
	const int size = 10;
	int arr[size];
	for(int i = 0; i < size;++i) {
		std::cin >> arr[i];
	}
	int min = 0;
	for(int i = 1; i < size;++i) {
		if(arr[min] > arr[i]) {
			min = i; 
		}
	}
	std::cout << min;
	return 0;
}
