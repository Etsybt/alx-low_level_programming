#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b:  pointing to a string of 0 and 1 chars
  * Return: int in decimal
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	while (*b != NULL)
	{
		if (*b == '1')
		{
			num = (num << 1) | 1;
		}
		else if (*b == '0')
		{
			num = num << 1;
		}
		else
			return (0);
		b++;
	}
	return (num);
}
