#include "main.h"
/**
  * _strlen - returns the length of a string
  * @s: string
  * Return: a
  */
int _strlen(char *s)
{
	int a;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
