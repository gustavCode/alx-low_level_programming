#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer output
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, r = 0;
	int limit;

	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
		limit = x;
	else
		limit = y;

	while (z <= limit)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;															}
		else
		{
			r = s1[z] - s2[z];
			break;																}
		z++;																}
	return (r);
}
