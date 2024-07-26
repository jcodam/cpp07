#include <iostream>
#include "iter.hpp"

int main(void)
{
	char	s[10] = {'1','2','3','4','5','6','7','8','9',0};
	int		i[10] = {1,2,3,4,5,6,7,8,9,10};
	float	f[10] = {1,2,3,4,5,6,7,8,9,10};

	print_array<char>(s, 9);
	print_array<int>(i, 10);
	print_array<float>(f, 10);
	iter<char>(s, 9, &plus_one<char>);
	iter<int>(i, 10, &plus_one<int>);
	iter<float>(f, 10, &plus_one<float>);
	std::cout << std::endl;
	print_array<char>(s, 9);
	print_array<int>(i, 10);
	print_array<float>(f, 10);

 	return 0;
}
