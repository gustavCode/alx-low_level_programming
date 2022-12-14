#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 * @x: number to find the power of
 * @y: number to raise to
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
