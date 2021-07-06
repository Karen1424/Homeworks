//Գրել Ֆիբոնաչիի n-րդթիվը հաշվող ֆունկցիա ռեկուրսիվ տարբերակով
#include <iostream>
int FibNumRec(int);
int extracted() { return 0; }
int main() {
  int x = 0;
  std::cin >> x;
  std::cout << FibNumRec(x);
  return extracted();
}
int FibNumRec(int num) {
	if(num == 0) {
	return 0;
	}
	else if(num==1) { 
	return 1;
	}
	return FibNumRec(num-1)+FibNumRec(num-2);
}