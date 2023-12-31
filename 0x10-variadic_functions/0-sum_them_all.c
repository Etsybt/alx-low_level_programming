#include "variadic_functions.h"

/**
  * sum_them_all - function that adds of all its parameters
  * @n: integer
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, const unsigned int);
	}

	va_end(args);

	return (s);
}
