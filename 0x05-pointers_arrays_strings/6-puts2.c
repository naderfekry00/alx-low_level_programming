#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to the string
 *
 * Return: None
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
