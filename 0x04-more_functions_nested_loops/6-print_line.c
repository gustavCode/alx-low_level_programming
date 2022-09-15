#include "main.h"

/**
 * print_line - draws a strainght line
 * @n: number of times character should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int lent;

	if (n > 0)
	{
		for (lent = 0; lent < n; lent++)
			_putchar('_');

	}
	_putchar('\n');
}
