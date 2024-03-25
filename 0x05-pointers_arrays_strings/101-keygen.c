#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main: a program generates random valid passwords for program 101-crackme.
 *
 * return: return zero = success
*/

int main(void)
{
	int num;
	char c;

	srand((unsigned int) time(NULL));
	while (num <= 1564)
	{
		c = rand() % 128;
		num += c;
		putchar(c);
	}
	putchar((1564 + 127) - num);
	return (0);
}
