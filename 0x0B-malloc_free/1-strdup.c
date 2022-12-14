#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: NULL if str is NULL, pointer to str,
 *		or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int x = 0, i;
	char *ch;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		x++;

	ch = malloc((x * sizeof(char)) + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ch[i] = str[i];

	ch[x] = '\0';

	return (ch);
}
