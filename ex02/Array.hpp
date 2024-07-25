#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
	T*		_array;
	int		_len;

public:
	class out_Exception : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("the number insite of the [] is out of bound");
			}
	};
	Array(): _array(NULL),_len(0){std::cout << "empty array is formed"<< std::endl;};
	Array( unsigned int len ): _array(0),_len(len){
		this->_array = new T[len];
		if (!this->_array)
			throw std::bad_alloc();
		while (len--)
			this->_array[len] = 0;
		std::cout << "array is formed"<< std::endl;
	};
	Array( Array const & src ): _array(0),_len(src._len){
		this->_array = new T[src._len];
		if (!this->_array)
			throw std::bad_alloc();
		for (int i = src._len; i--;)
			this->_array[i] = src._array[i];
		std::cout << "array is formed from a array"<< std::endl;
	};
	~Array(){
		if (this->_array)
		{
			std::cout << *this << "array deleted" << std::endl;
			delete [] this->_array; 
		}
	};

	Array & operator=( Array const & rhs ){
		if (this->_array)
		{
			delete [] this->_array;
		}
		this->_len = rhs._len;
		this->_array = new T[rhs._len];
		if (!this->_array)
			throw std::bad_alloc();
		for (int i = rhs._len; i--;)
			this->_array[i] = rhs._array[i];
		std::cout << "array is copyed from a array"<< std::endl;
		return *this;
	};
	// Array & operator=( T const & rhs );

	T &		operator[](int index) const {
		if (index >= 0 && index < this->_len) 
			return this->_array[index];
		else
			throw Array::out_Exception(); 
	};

	int		size() const {return this->_len;};

};
template <typename T>
std::ostream & operator<<( std::ostream & o, Array<T> const & rhs){
	for (int i = 0; i < rhs.size(); i++)
		o << rhs[i] << " ";
	return o;
};
