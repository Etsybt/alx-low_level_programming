#include "function_pointers.h"

/**
  * array_iterator - executes a function given as
  * a parameter on each element of an array
  * @array: array of integers
  * @size: size of the array
  * @action: pointer to the function
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p;

	*p = array + size - 1;

	if (array && size && action)
		while (array <= p)
			action(*array++);
}
