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
	if (x * x == n)
    {
        return (x);
    }
}

else (x * x < n)
{
    return (value(n, x + 1));

}
