#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 * return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int i;

	for (a = 1; a <= 10; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
