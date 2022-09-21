#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: the first pointer to the string
 * @src: the second pointer to the string
 *
 * Return: A pointer to the dest
 */
char *strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
			dest[i] = src[j];
			i++;
			j++;
	}

	dest[i] = '\0';

	return (dest);
}
