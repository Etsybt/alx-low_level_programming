#include "main.h"
/**
 * *_strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: dest;
 */
char *_strcat(char *dest, char *src)
{
	int a;

	a = 0;
	int b;

	while (dest[a])
	{
		a++;
	}
	for (b = 0; strc[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
