#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: string to be printed between numbers
  * @n:  number of integers passed to the function
  * Return:
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned const int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
