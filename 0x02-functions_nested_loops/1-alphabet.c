#include "main.h"
/**
 * print_alphabet - print alphabet
 * description: return lowercase alphabet
 * return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
