#include "main.h"

/**
 * print_numbers - prints numbers from 0 through 9
 *
 * Return: returns void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
