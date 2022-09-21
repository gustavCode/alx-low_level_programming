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
	int i = 0;
	int d_length = 0;

	while (dest[i++])
		d_length++;

	for (i = 0; src[i]; i++)
		dest[d_length++] = src[i];

	return (dest);
}
