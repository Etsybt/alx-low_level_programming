#include "main.h"
/**
   * _isalpha - checks if c is an alphabet
    * @c: character in the ASCII code
     * Return: 1 if it's a letter
      * 0 otherwise
       */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65  && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
