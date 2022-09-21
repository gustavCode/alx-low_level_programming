#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *arr;
	int i, swp, j;
	arr = a;

	for (i = 1; i < n; i++)
		arr++;

	for (j = 0; j < i / 2; j++)
	{
		swarr = a[j];
		a[j] = *arr;
		*arr = swp;
		arr--;
	}
}
