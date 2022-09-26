#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 * 
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, z = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				z++;
			}

			y++;
		}

		x++;
	}

	return (z);
}
