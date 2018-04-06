#include "Roman.h"


int main() {
	int number;
	std::cout << "Enter your number "<<std::endl;
	std::cin >> number;
	Roman num(number);

	system("cls");
	std::cout << "Your number in roman is:  " << num.convertToRoman() << std::endl;
	
	system("pause");
	return 0;
}
