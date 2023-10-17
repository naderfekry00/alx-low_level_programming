#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print the second half of.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;

	i = len / 2;
	if (len % 2 != 0)
		i++;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
