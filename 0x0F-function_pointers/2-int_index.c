#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array of int
  * @size: number of elements in the array
  *@cmp: pointer to the function
  * Return: the index of the first element
  * -1 if no element matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
