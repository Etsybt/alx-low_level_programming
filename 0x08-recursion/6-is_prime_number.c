#include "main.h"
/**
  * prime2 - function
  * @x: number
  * @y: number
  * Return: 1 if true
  */
int prime2(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (prime2(x, y + 1));
}
/**
  * is_prime_number - checks if n is a prime number
  * @n: number
  * Return: 1 in it is
  * O of not
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
