#include "main.h"
#include <stdio.h>

/**
 * isLower - Determines whether a character is lowercase ASCII.
 * @c: The character to check.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - Determines whether a character is a delimiter.
 * @c: The character to check.
 *
 * Return: 1 if the character is a delimiter, 0 otherwise.
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @s: The input string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;

		s++;
	}

	return (ptr);
}
