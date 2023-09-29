#include "main.h"

/**
 *_sqrt_recursion - function that returns
 *the natural square root of a number.
 *value - function to calculate
 *@x: value
 *@n: number
 *Return: 0
 */
int value(int n, int x);

int _sqrt_recursion(int n)
{
	return (value(n, 1));
}
/*value - function to calculate*/
int value(int n, int x)
{
	if (n * n == x)
    {
        return (n);
    }
    else  if (n * n > x)
    {
        return (-1);
    }
    else (n * n < x)
    {
    return (value(x, n + 1));

    }
}
