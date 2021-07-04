//Տրված նախադասության համար տպել ամենակարճ տողը
#include <iostream>
#include <string>
int main() {
    std::string line; 
    std::getline(std::cin,line);
    std::string min_line1 = "";
    std::string min_line2 = "";
    char * p = &line[0];
    while(*p != ' ') {
      min_line1 +=  *p;
      p++;
    }
    p++;
    for(int i = min_line1.size(); i <=line.size();++i) {
      if(*p!= ' ') {
        min_line2 +=p;
        p++;
      } else {
         if(min_line2.size() < min_line1.size()) {
           min_line1 = min_line2;
         }
        p++;min_line2 = "";
        }
      }
      std::cout << min_line1;
    return 0;
  }
