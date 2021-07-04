//Մատրիցի բոլոր տարրեր ըարտագրելմիաչափ զանգվածի մեջ։Տպելարդյունքը
#include <iostream>
int main () {
	const int row = 4;
	const int col = 3;
	int arr[row][col];
	int arr1[row*col];
	int k = 0;
	for(int i = 0; i < row;++i) {
		for(int j = 0; j < col;++j) {
			std::cin >> arr[i][j];
			arr1[k] = arr[i][j];
			k++;
		}
	}
	for(int i = 0; i < row*col;++i) {
		std::cout << arr1[i] << std::endl;
	}
	return 0;
}