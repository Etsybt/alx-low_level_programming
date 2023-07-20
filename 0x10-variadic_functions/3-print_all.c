#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: list of types of arguments
  */
void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	char *separator = ",";
	char *s;

	va_list list;

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
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
