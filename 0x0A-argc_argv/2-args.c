#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
		printf("%s\n", argv[num]);

	return (0);
}
