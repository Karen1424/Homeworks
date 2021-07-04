//Տրված նախադասության համար դուրս բերել եւ տպել բոլոր թվերը
#include <iostream>
#include <string>
int main () {
	std::string line;
	std::getline(std::cin,line);
	std::string word = "";
	for(int i = 0; i < line.size();++i) {
		if(line[i]>='0'&& line[i]<= '9'){
			word += line[i];
		}
	}
	std::cout << word;
	return 0;
}