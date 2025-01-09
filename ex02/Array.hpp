#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>

template<typename T>
class Array
{
	private:
		T array[];

	protected:
		// ATTRIBUTES
		// CONSTRUCTORS/DESTRUCTORS
		// GETTERS
		// SETTERS
		// OPERATORS
		// MEMBER FUNCTIONS

	public:
		// ATTRIBUTES
		// CONSTRUCTORS/DESTRUCTORS
		Array();
		Array(const Array &a);
		~Array() ;
		// GETTERS
		// SETTERS
		// OPERATORS
		Array&	operator=(const Array &copy);
		// MEMBER FUNCTIONS
};

#endif