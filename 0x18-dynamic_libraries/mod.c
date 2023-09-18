#include "operations.h"

/**
  * mod - modulus
  * @a: int
  * @b: int
  * Return: a % b
  */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Modulus by zero is not allowed.\n");
		return (0);
	}
	return (a % b);
}
