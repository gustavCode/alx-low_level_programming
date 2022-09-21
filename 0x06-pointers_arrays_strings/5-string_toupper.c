#include "main.h"

/**
 * string_toupper - changes all lowercase strings to uppercase
 * @s: string to be modified
 *
 * Return: modified string
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] -= 32;
		}

		x++;
	}

	return (s);
}
