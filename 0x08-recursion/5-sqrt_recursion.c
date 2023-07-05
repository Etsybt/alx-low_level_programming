#include "main.h"
/**
  * sqrt - function
  * @x: number
  * @y: number
  * Return: square root of n
  */
int sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt(x, y + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
* Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt(x, 1));
}
