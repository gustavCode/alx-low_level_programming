#include "main.h"

/**
 * _memcpy - Copies n bytes from src into dest
 * @dest: memory area dest
 * @src: memory area src
 * @n: number of bytes
 *
 * Return: A pointer to dest
 */
char _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		dest[e] = src[e];
	}

	return (dest);
}
