#ifndef ITER_HPP
# define  ITER_HPP
# include <stdio.h>
# include <iostream>

template<typename T1, typename T2>
void	iter(T1 *array, int lenght, T2 func)
{
	for(int i = 0; i < lenght; i++)
		func(array[i]); 
};

#endif