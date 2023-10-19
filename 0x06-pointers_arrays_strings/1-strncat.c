#include "main.h"

/**
 * _strncat - Concatenates two strings up to 'n' bytes.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to concatenate.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/* Find the size of the 'dest' array */
	while (dest[c])
		c++;

	/* Append the 'src' string to the 'dest' string up to 'n' bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	/* null terminate dest */
	dest[c + i] = '\0';
	return (dest);
}
