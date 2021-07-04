//Քառակուսային մատրիցի գլխավոր եւ օժանդակ
//անկյունագծերի տարրերի արժեքները տեղերով փոխել։
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
		int k = arr[i][i];
		arr[i][i] = arr[i][j];
		arr[i][j] = k;
	}


	return 0;
}