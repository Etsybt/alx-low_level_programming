#include <stdio.h>
/**
    * *_strncat - concatenates two strings
    * @dest: destination
    * @src: source
    * @n: n bytes from src
    * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
