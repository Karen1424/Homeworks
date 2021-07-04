//xndir1 mutq. zangvaci tarer@ gtnel aavel tari index@ 
#include <iostream>
int main () {
	const int size = 10;
	int arr[size];
	for(int i = 0; i < size;++i) {
		std::cin >> arr[i];
	}
	int max = 0;
	for(int i = 1; i < size;++i) {
		if(arr[max]< arr[i]) {
			max = i;
		}
	}
	std::cout << max;

	return 0;
}