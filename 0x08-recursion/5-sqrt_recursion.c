#include "main.h"
/**
  * sqrt2 - function
  * @x: number
  * @y: number
  * Return: square root of n
  */
int sqrt2(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}
	else if ((y * y) > x)
	{
		return (-1);
	}
	return (sqrt2(x, y + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
* Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
