#include "main.h"
/**
  * print_diagonal - prints diagonal line
  * @n : number of times \ is printed
  * Return: diagonal line
  */
void print_diagonal(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
