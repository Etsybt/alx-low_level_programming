#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: the string to be printed between the strings
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *s;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
