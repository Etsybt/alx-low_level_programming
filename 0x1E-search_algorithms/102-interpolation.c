#include <stdlib.h>
#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted
 * array using interpolation search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1), pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low] + 1)
					) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = (pos + 1);
		else
			high = (pos - 1);
	}
	if (value > array[high])
	{
		printf("Value checked array[%lu] is out of range\n", high);
		return (-1);
	}
	return (-1);
}
