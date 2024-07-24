#include <iostream>
#include "Whatever.hpp"
#include "../mycolor.hpp"

int main(void)
{
	int a;
	int b;
	double d1;
	double d2;
	std::cout << "2 numbers please";
	std::cin >> a >> b;
	std::cout << a << " : " << b << " \nmax: " << max <int>(a, b) << " min: " << min <int>(a,b) << " swap :" ;
	swap<int>(a,b);
	std::cout << a << " : " << b << std::endl;
	std::cout << "2 numbers please";
	std::cin >> d1 >> d2;
	std::cout << d1 << " : " << d2 << " \nmax: " << max <double>(d1, d2) << " min: " << min <double>(d1,d2) << " swap :" ;
	swap<double>(d1,d2);
	std::cout << d1 << " : " << d2 << std::endl;
	std::cout << min<std::string>("aaa","aa");
	
	return 0;
}
