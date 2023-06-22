#include "main.h"
/**
  * _isupper - checks if c is uppercase
  * Return: 1 if uppercase
  * 0 if not
  * @c: inetger
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
