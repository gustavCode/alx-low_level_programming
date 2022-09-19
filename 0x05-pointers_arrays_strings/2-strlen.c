#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 *
 * Return: returns length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *(s + length) != '\0'; length++);

	return (length);
}
