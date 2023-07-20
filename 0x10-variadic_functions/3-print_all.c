#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: list of types of arguments
  */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, n = 0;
	char *separator = ", ";
	char *s;

	va_start(list, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), separator);
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", s, separator);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
