#include "main.h"

/**
 * _strncpy - Copies a string up to 'n' bytes.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: The pointer to 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
