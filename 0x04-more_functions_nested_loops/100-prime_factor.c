#include <stdio.h>

/**
 * main - Prints the largest prime factor of the
 * number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long prime  = 612852475143;
	long largest, x;
	double square = sqrt(prime);

	for (x = 1; x <= square; x++)
	{
		if (prime % x == 0)
		{
			largest = prime / x;
		}
	}

	printf("%ld\n", largest);

	return (0);
}
	
