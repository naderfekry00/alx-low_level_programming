#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string
 *
 * Return: None
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
