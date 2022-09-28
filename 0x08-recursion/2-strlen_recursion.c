#include "main.h"

/**
 * _strlen_recursion - Return length of string
 * @s: string whose length to return
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;

	return (_strlen_recursion(s) + 1);
}
