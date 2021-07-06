//Գրել ֆունկցիա, որը ստանում է տող եւ վերադարձնում տողի շրջված տարբերակը
#include <iostream>
#include <string>
void get_line(std::string);
int main () {
	std::string word;
	std::getline(std::cin,word);
	get_line(word);
	return 0;
}
void get_line(std::string word) {
	for(int i = word.size()-1;i>=0;--i) {
		std::cout << word[i];
	}
}