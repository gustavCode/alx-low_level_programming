#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is drawn
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int length, spa;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 0; length < n; length++)
		{
			for (spa = 0; spa < length; spa++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
