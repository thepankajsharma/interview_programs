#include <iostream>

int add(int &a,int &b)
{
	return a+b;
}

void main()
{
	int x = 4;
	int y = 8;
	int sum = add(x,y);
	std::cout<<sum;
}