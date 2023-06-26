#include "main.h"
/**
  * _puts - prints a string
  * @str: string
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_ûtchar('\n');
}
