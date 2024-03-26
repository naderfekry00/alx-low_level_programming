#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: zero if every character in s1 equal in AScII
 * value to every character in s2(or vice versa), else return
 * (1)if a character in s1 is different from s2 and its value
 * is bigger than the one in s2, or (-1) if its value is less
 *
 */
int _strcmp(char *s1, char *s2)
{
	int ret_urn;

	while (*s1 || *s2)/*loope continue if s2 longer than s2 like(Hello)&(Hello!)*/
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s1 != *s2)
		{
			ret_urn = ((int)*s2 - (int)*s2);/*(converting)charcters to value in ASCII*/
			return (ret_urn);
		}
	}
	return (0);
}
