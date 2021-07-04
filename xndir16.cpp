//Գտնելեւ տպել զանգվածի տարրերի գումարի ու արտադրյալի
//միջին թվաբանականը։
#include <iostream>
int main () {

	const int size = 5;
	int arr[size] {1,2,3,4,5};
	int sum = 0;
	int mul = 1;
	for(int i = 0; i < size;++i) {
		sum += arr[i];
		mul *= arr[i];
	}
	std::cout << (sum+mul)/2;

	return 0;
}