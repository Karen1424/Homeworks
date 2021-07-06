//Գրել ֆունկցիա, որը ստանում է զանգված եւ ինդեքսի համար։
//Ֆունկցիան հեռացնում է զանգվածի տրված ինդեքսով տարրը եւ
//վերադարձնում նոր զանգվածը որպես արդյունք։
#include <iostream> 

void get_array(int * , int, int);
int main () {
      const int size = 10;
      int arr[size] {1,2,3,4,5,6,7,8,9,10};
      int x;
      std::cin >> x;
      get_array(arr, size, x);
      
      return 0;
}
void get_array(int * p, int size,int key) {
  for(int i = 0; i < size;++i) {
    if(i== key) {
      continue;
    } else {
      std::cout << p[i] << " ";
    }
  }
}