#include "main.h"
/**
  * print_triangle - prints a triangle
  * @size: size of torangle
  */
void print_triangle(int size)
{
	int i, s, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = size - i; s > 1; s--)
			{
				_putchar(32);
			}
			for (n = 0; n <= i; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
