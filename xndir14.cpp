//Մուտքագրել տող։ Գտնել եւ տպել տողում ամենաշատ կրկնվող սիմվոլը։
#include <iostream>
#include <string>
int main () {
	std::string line;
	std::getline(std::cin,line);
	char s1 = line[0];
	int c1 = 1;
	char s2;
	int c2 = 0;
	for(int i = 1; i < line.size();++i) {
		if(s1 == line[i]){
			c1++;
		} else {
			if(c1>c2) {
				c2 = c1;
				s2 = s1;
			}
			c1 = 1;
			s1 = line[i];
		}
	}
	if(c1>c2) {
		std::cout << s1;
	} else {
		std::cout << s2;
	}
	return 0;
}