#include "main.h"

/**
 * reverse_array - Reverses the elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}