#include <stdio.h>

void __attribute__((constructor)) sentence(void);
/**
  * sentence - prints a str
  */
void sentence(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n")
}
