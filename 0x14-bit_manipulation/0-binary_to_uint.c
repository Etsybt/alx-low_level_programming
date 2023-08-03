#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b:  pointing to a string of 0 and 1 chars
  * Return: int in decimal
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int l;

	if (!b)
		return (0);

	for (l = 0; b[l] != '\0'; l++)
	{
		if (b[l] < '\0' || b[l] > '1')
			return (0);
		num = 2 * num + (b[l] - '\0');
	}
	return (num);
}
