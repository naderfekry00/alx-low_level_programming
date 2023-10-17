#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
