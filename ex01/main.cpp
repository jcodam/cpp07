#include <iostream>
#include "Serializer.hpp"
#include "../mycolor.hpp"

int main(void)
{
	t_Data data;
	t_Data* ptr;
	t_Data* newptr;
	uintptr_t	raw;
	// Serializer wrong; //sould not work

	data.number = 42;
	ptr = &data;
	raw = Serializer::serialize(ptr);
	newptr = Serializer::deserialize(raw);
	std::cout << "pionter: " << ptr << "\npionter number: "<<ptr->number
	 << "\ninteger: " << raw << "\npionter number: "<<ptr->number
	 << "\nnew pionter: " << newptr << "\nnew pionter number: "<<newptr->number << std::endl;
	if (ptr == newptr)
		std::cout << FG_LBLUE"pionter and new is equal" FG_DEFAULT << std::endl;
	else
		std::cout << FG_RED"pionter and new is not equal" FG_DEFAULT << std::endl;
	return 0;
}
