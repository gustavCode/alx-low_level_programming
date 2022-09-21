#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int x = 0, y = 0, len = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (str[x])
	{
		y = 0;

		while (y < len)
		{
			if (str[x] == r[y] || str[x] - 32 == r[y])
			{
				str[x] = n[y];
			}

			y++;
		}

		x++;
	}

	return (str);
}
