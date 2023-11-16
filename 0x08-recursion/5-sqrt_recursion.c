#include "main.h"

/**
 *square - function to calculate
 *_sqrt_recursion - function that returns
 *the natural square root of a number.
 *@n: The number to find the square root of
 *@x: Current guess for the square root.
 *Return: The square root if found
 */
int square(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (square(x + 1, n));
	}
}

/**
 *_sqrt_recursion - Function that returns the natural square root of a number.
 *@n: The number to find the square root of.
 *Return: The square root if found, -1 if no exact square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square(0, n));
	}
}
