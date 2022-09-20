#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
