#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes
 *		it with a specific char
 * @size: size of the array
 * @c: the char to fill the array with
 *
 * Return: NULL if size is 0, a pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
