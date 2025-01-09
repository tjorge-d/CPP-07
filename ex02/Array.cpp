#include "Array.hpp"

// CONSTRUCTORS & DESTRUCTORS

Array::Array()
{
	std::cout << "Array default constructor called\n";
}

Array::Array(const Array &copy)
{
	std::cout << "Array copy constructor called\n";
	*this = copy;
}

Array::~Array()
{
	std::cout << "Array default destructor called\n";
}

// GETTERS


// SETTERS


// OPERATORS

Array&	Array::operator=(const Array &copy)
{
	std::cout << "Array copy assignment operator called\n";
	_example = copy._example;
	return (*this);
}

// MEMBER FUNCTIONS

