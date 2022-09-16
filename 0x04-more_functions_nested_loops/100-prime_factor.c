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
	long divident;

	while (divident < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divident = 3; divident < (prime / 2); divident += 2)
		{
			if ((prime % divident) == 0)
				prime /= divident;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
	
