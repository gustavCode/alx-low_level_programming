#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", (argc - 1));

	return (0);
}