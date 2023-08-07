#include "main.h"
#include <string.h>
/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string
  * Return: 1 if true
  * 0 if not
  */
int is_palindrome(char *s)
{
	int length = strlen(str);
	int i, j;

	for (i =0; j = length - 1; i < j; i++; j--)
	{
		if (str[i] != str[j])
		{
			return (0);
		}
	}
	return (1);
}
