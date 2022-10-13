#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all its parameters
 * @n: number of parameters
 * @...: list of parameters to calculate sum
 *
 * Return: 0 if n == 0, otherwise sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list digits;
	unsigned int i, sum = 0;

	va_start(digits, n);

	for (i = 0; i < n; i++)
		sum += va_args(digits, int);

	va_end(digits);

	return (sum);
}
