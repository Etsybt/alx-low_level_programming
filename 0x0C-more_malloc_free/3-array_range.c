#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: min value
  * @max: max value
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int length, n;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);

	if (!ptr)
		return (NULL);
	for (n = 0; n < length; n++)
		ptr[n] = min++;
	return (ptr);
}
