#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int num, amp;

	for (num = 0; num <= 9; num++)
	{
		for (amp = 0; amp <= 14; amp++)
		{
			if (amp > 9)
				_putchar((amp / 10) + '0');

			_putchar((amp % 10) + '0');
		}
		_putchar('\n');
	}
}
