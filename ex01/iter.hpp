#pragma once
#include <iostream>

template <typename T>
void	iter(T* array, size_t len, T (*f)(T)){
	while (len--)
	{
		array[len] = f(array[len]);
	}
}

template <typename T>
T	plus_one(T a){
	return (++a);
}

template <typename T>
void	print_array(T* array, size_t len){
	if (--len)
		print_array(array, len);
	std::cout << array[len] << ",";
}