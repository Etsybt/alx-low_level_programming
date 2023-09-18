#include "main.h"
/**
   *  _abs - main
    * @n: interger
     * Return: n absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
