#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to concatenate
 * @src: string to append
 * @n: number of bytes to copy
 *
 * Return: A pointer to a string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
	{
		y++;
	}

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

        return (dest);
}
