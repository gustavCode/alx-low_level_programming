#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiply of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x = 0, y = 0, product = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
