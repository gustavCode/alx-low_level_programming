#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: the first pointer to the string
 * @src: the second pointer to the string
 *
 * Return: A pointer to the dest
 */
char *_strcat(char *dest, char *src)
{
	int d_len = 0, i;

	while (dest[d_len])
	{
		d_len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[d_len] = src[i];
		d_len++;
	}

	dest[d_len] = '\0';

	return (dest);
}
