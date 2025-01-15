#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>

template<class T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array(int n);
		Array(const Array &a);
		~Array() ;

		Array&	operator=(const Array &copy);
		T&		operator[](unsigned int i) const;

		unsigned int	size() const;
		void			iter(void (*func)(T &));

	class	OutOfBounds: public std::exception
	{
		virtual const char* what() const throw();
	};
};

# include "Array.tpp"

#endif