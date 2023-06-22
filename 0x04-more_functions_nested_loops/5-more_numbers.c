#include "main.h"
/**
  *  more_numbers - prints multiple rows of numbers
  * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;
	int numRep = 10;

	for (a = 0; a < numRep; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
	}
	_pucthar('\n');
}
