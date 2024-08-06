#pragma once
#include <iostream>

template <typename T, typename F>
void	iter(T* array, size_t len, void (f)(F)){
	for (size_t index = 0; index < len; index++)
	{
		f(array[index]);
	}
}

template <typename T>
void	plus_one(T & a){
	++a;
}

template <typename T>
void	print_array(T* array, size_t len){
	if (--len)
		print_array(array, len);
	std::cout << array[len] << ",";
}