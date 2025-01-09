#ifndef ITER_HPP
# define  ITER_HPP
# include <stdio.h>
# include <iostream>

template<typename T>
void	iter(T *array, int lenght, void (*func)(T &))
{
	for(int i = 0; i < lenght; i++)
		func(array[i]); 
};

#endif