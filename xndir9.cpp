//Տպել քառակուսային մատրիցի գլխավոր ե օժանդակ անկյունագծերի տարրերի գումարները։
#include <iostream> 
int main () {

	const int size = 3;
	int arr[size][size];
	for(int i = 0; i < size;++i) {
		for(int j = 0; j < size;++j) {
			std::cin >> arr[i][j];
		}
	} 
	for(int i = 0; i < size; ++i ) {
		int j = size-1-i;
		std::cout << arr[i][i]+arr[i][j] << std::endl;
	}



	return 0;
	}