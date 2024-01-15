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
	size_t jump, prev, min, max, i;

	if (array == NULL)
		return (-1);

	jump = (size_t)sqrt(size);
	prev = 0;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (prev < size && array[prev] < value)
	{
		prev += jump;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);

	min = prev - jump;
	max = prev;

	for (i = min; i <= max && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
