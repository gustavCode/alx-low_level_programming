#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        
 *  Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum_of_fib;
	float total_of_fib;

	while (1)
	{
		sum_of_fib = fib1 + fib2;
		if (sum_of_fib > 4000000)
			break;

		if ((sum_of_fib % 2) == 0)
			total_of_fib += sum_of_fib;

		fib1 = fib2;
		fib2 = sum_of_fib;
	}
	printf("%.0f\n", total_of_fib);

	return (0);
}
