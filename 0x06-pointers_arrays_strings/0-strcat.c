#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;

	/* Find the size of the 'dest' array */
	while (dest[c])
		c++;

	/* Iterate through each 'src' array value without the null byte */
	for (c2 = 0; src[c2] ; c2++)
		/* append src [c2] to dest [c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];
	
	return (dest);
}
