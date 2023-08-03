#include "main.h"
/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another.
  * @n: int
  * @m: int
  * Return: count
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num;
	unsigned long int c;
	unsigned long int alt = n ^ m;

	num = 0;

	for (a = 63; a >= 0; a--)
	{
		c = alt >> a;
		if (c & 1)
			c++;
	}
	return (c);
}
