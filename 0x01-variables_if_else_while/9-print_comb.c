#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
