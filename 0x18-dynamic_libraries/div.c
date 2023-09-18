#include "operations.h"

/**
  * div - division
  * @a: int
  * @b: int
  * Return: a / b
  */

int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Division by zero is not allowed.\n");
		return (0);
	}
	return (a / b);
}
