#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b:  pointing to a string of 0 and 1 chars
  * Return: int in decimal
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int l, base_2;

	if (b == NULL) 
		return (0);

	num = 0;


	for (l = 0; b[l] != '\0'; l++)
		;
	for (l--, base_2 = 1; l >= 0; l--, base_2 *= 2)
	{
		if (b[l] != '\0' && b[l] != '1')
		{
			return (0);
		}
		if (b[l] & 1)
		{
			num += base_2;
		}
	}
	return (num);
}
