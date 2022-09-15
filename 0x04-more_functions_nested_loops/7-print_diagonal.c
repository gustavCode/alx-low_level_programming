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

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (spa = 0; spa < length; spa++)
				_putchar(' ');
			_putchar('\\');

			if (length == n -1)
				continue;

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
