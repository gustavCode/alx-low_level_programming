#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: string to capitalize
 *
 * Return: char value
 */
char *cap_string(char *str)
{
	int x = 0, i;
	int cspc = 13;
	char st[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[x])
	{
		i = 0;

		while (i < cspc)
		{
			if ((x == 0 || str[x - 1] == st[i]) && (str[x] >= 97 && str[x] <= 122))
				str[x] -= 32;

			i++;
		}

		x++;
	}

	return (str);
}
