#include "main.h"
/**
  * print_square - prints a square
  * @size: size of square
  */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
