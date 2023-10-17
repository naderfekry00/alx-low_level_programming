#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a sequence of characters.
 *
 * Description: Prints a sequence of characters based on a condition.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sum;
	char c;

	srand(time(null));
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar (c);
	}
	putchar(2772 - sum);
	return (0);
}
