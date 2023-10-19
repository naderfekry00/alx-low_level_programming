#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Integer value indicating the comparison result.
 *   - 0 if the strings are equal.
 *   - A negative value if s1 is less than s2.
 *   - A positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}

		s1++;
		s2++;
	}

	return (equal);
}
