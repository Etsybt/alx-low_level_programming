#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - print from n to 98
  * @n: first number
  */
void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m < 98; m++)
		{
			printf("%d, ", m);
		}
	}
		else
		{
			for (m = n; m > 98; m--)
			{
				printf("%d, ", m);
			}
		}
		printf("98\n");
}
