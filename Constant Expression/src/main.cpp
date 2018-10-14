#include <iostream>

class ConstexprPointrs
{
public:


};

int returnInteger()
{
	return 5;
}

int main()
{
	// Testing constexpr pointers 
	int y = returnInteger();
	constexpr int * x = &y;
	std::cout << *x;
	std::cin.get();
}