#include "Array.hpp"

// CONSTRUCTORS & DESTRUCTORS

template <typename T>
Array<T>::Array() : _array(new T[0]) ,_size(0)
{
	//std::cout << "Array default constructor called\n";
}

template <typename T>
Array<T>::Array(int n) : _array(new T[n]) ,_size(n)
{
	//std::cout << "Array custom constructor called\n";
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(const Array &copy) : _array(new T[0])
{
	//std::cout << "Array copy constructor called\n";
	*this = copy;
}

template <typename T>
Array<T>::~Array()
{
	//std::cout << "Array default destructor called\n";
	if (_array)
		delete[] _array;
}

// OPERATORS

template <typename T>
Array<T>&	Array<T>::operator=(const Array &copy)
{
	//std::cout << "Array copy assignment operator called\n";
	if (_array)
		delete[] _array;

	_size = copy.size();
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];

	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i) const
{
	if (_array && i >= size())
		throw OutOfBounds();
	return (_array[i]);
}

// MEMBER FUNCTIONS

template <typename T>
unsigned int	Array<T>::size() const
{
	if (!_array)
		return (0);
	return (_size);
}

template<typename T>
void	Array<T>::iter(void (*func)(T &))
{
	for(unsigned int i = 0; i < _size; i++)
		func(_array[i]); 
};

// EXCCEPTIONS
template <typename T>
const char*	Array<T>::OutOfBounds::what() const throw()
{
	return ("Index out of bounds");
}
