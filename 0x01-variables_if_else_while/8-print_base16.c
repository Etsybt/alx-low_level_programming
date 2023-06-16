#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int d;
	int l;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
