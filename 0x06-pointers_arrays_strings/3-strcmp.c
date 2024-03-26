#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int length_s1, length_s2;

	while (*s1)
	{
		length_s1++;
		s1++;
	}
	while (*s2)
	{
		length_s2++;
		s2++;
	}
	if (length_s1 > length_s2)
	{
		return (length_s1 - length_s2);
	}
	else if (length_s1 < length_s2)
	{
		return (length_s1 - length_s2);
	}
	else
	{
		return (0);
	}
}
