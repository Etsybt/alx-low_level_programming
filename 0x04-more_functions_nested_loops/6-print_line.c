#include "main.h"
/**
  * print_line - prints straight line;
  * @n: number of times _ should be printed
  * Return: straight line
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_pucthar('\n');
	}
}
