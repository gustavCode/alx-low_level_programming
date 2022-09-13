#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long half1_of_fib1, half2_of_fib1, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	half1_of_fib1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	half2_of_fib1 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = half1_of_fib1 + fib2_half1;
		half2 = half2_of_fib1 + fib2_half2;
		if (half2_of_fib1 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		half1_of_fib1 = fib2_half1;
		half2_of_fib1 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
