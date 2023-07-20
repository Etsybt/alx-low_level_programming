#include "variadic_functions.h"

/**
  * sum_them_all - function that adds of all its parameters
  * @n: integer
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int s = 0;
	int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
