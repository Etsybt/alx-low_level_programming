#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
