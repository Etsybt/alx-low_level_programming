#include <stdio.h>
/**
  * main - main function
  * description: printing from 1 to 100
  * replacing mulitples of 3 by Fizz
  * of 5 by Buzz
  * of 3 and 5 by FizzBuzz
  * Return: 0
  */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
