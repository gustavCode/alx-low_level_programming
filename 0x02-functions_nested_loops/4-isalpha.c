#include "main.h"

/**
 * _islower - checks for alphabet characters
 * @c: character to be checked
 *
 * Return: returns 1 if c is lowercase else 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) ||
      ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
