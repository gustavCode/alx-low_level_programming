#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 *
 * Return: returns length
 */
int _strlen(char *s)
{
	int l;

	for (l = 0;
	*(s + l) != '\0'; l++);

	return (l);
}
