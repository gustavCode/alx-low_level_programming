#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int x, first_sum = 0, second_sum = 0;

	for (x = 0; x < size; x++)
	{
		first_sum += a[(size + 1) * x];
		second_sum += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", first_sum, second_sum);
}
