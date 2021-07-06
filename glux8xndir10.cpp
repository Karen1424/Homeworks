//Գրել ֆունկցիա, որը վերադարձնում է թվի առաջին k թվանշանները։
//Թիվն ու k-նմուտքագրել։
#include <iostream>
void get_k_num(int,int);
int main () {
	int x = 0;
	int k = 0;
	std::cin >> k;
	std::cin >> x;
	 get_k_num(x,k);
	return 0;
}
void get_k_num(int num,int k) {
	int arr[10];
	int i = 0;
	while(num) {
		arr[i] = num%10;
		num = num/10;
		++i;
	}
	for(int j = i-1; j>=0;--j) {
		if(k) {
			std::cout << arr[j] << "";
			k--;
		}
	}
	
}