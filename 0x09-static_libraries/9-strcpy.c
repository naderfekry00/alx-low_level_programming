#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
