#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i, prev, s, ind;

	if (array == NULL || size == 0)
		return (-1);

	s = (int)sqrt((double)size);
	ind = 0;
	prev = i = 0;

	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		prev = i;
		ind++;
		i = ind * s;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
