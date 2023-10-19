#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @c: Pointer to the string
 * Return: Encoded string
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	char value[] = {'4', '3', '0', '7', '1'};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(key[0]); i++)
		{
			/* 32 is the difference between lowercase letters and uppercase letters */
			if (*c == key[i] || *c == (key[i] + 32))
			{
				*c = value[i];
				break;
			}
		}
		c++;
	}
	return (cp);
}
