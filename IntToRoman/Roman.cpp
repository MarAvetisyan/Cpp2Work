#include "Roman.h"

Roman::Roman(int number_) : x(number_) {}

void Roman::set(int number_) {this->x = number_;}

int Roman::get() {return this->x;}

std::string Roman::convertToRoman() 
{
	std::string str;
	int number = this->x;

	if (x >= 1000) 
	{
		int count = x / 1000;
		for (int i = 0; i < count; ++i) {
			str += 'M';
		}
		number %= 1000;
	}

	if (number >= 900) 
	{
		str += "CM";
		number %= 900;
	}

	if (number >= 500) 
	{
		str += "D";
		number %= 500;
	}

	if (number >= 400) 
	{
		str += "CD";
		number %= 400;
	}
	else if (number >= 100) 
	{
		int m = number / 100;
		for (int i = 0; i < m; ++i)
			str += 'C';
		number %= 100;
	}

	if (number >= 90) 
	{
		str += "XC";
		number %= 90;
	}

	if (number >= 50) 
	{
		str += "L";
		number %= 50;
	}

	if (number >= 40) 
	{
		str += "XL";
		number %= 40;
	}

	if (number >= 10) 
	{
		int cnt =number / 10;
		for (int i = 0; i < cnt; ++i)
			str += 'X';
		number %= 10;
	}

	if (number == 9) {
		str += "IX";
		number %= 9;
	}

	if (number >= 5) 
	{
		str += 'V';
		number %= 5;
	}

	if (number == 4) 
	{
		str += "IV";
		number %= 4;
	}

	if (number >= 1) 
	{
		for (int i = 0; i < number; ++i)
			str += "I";
	}
	return str;
}



