#pragma once
#include <string>
#include <iostream>

class Roman {

public:
	Roman(int number_);
	void set(int number_);
	int get();
	std::string convertToRoman();

private:
	int x;
};
