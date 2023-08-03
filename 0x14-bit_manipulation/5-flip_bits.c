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
	int a, num = 0;
	unsigned long int c;
	unsigned long int alt = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = alt >> a;
		if (c & 1)
			num++;
	}
	return (num);
}
