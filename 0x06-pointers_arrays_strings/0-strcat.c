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
	char *d_end = dest;
	int d_length = 0;

	while (*d_end)
		++d_end;

	while (src[d_length])
		++d_length;

	if ((src + d_length < dest) || (d_end + d_length < src))
	{
		do {
			*d_end++ = *src++;
		} while (d_length--);
	}

	return (dest);
}
