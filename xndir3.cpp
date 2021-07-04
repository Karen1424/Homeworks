//Մուտքագրելզանգվածի տարրերի արժեքները։
//Տպելզանգվածի առավելագույն եւ նվազագույն արժեքների գումարը
#include <iostream>
int main () {
	const int size = 10;
	int arr[size];
	for(int i = 0; i < size;++i) {
		std::cin >> arr[i];
	} 
	int min = 0;
	int max = 0;
	for(int i = 1; i < size;++i) {
		if(arr[min]> arr[i] ) {
			min = i;
		}
		else if (arr[max] < arr[i] ) {
			max = i;
		}
	}
	std::cout << (arr[min]+ arr[max]);

	return 0;
}