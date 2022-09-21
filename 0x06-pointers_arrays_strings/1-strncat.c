#include "main.h"

/**
 * _strncat - concatenates two strings for at most n bytes
 * @dest: string to be concatenated to
 * @src: string to append
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0, i = 0;

	while (dest[d_len])
	{
		d_len++;
	}

	while (i < n && src[j])
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}

	dest[d_len + n + 1] = '\0';

	return (dest);
}

