#include "main.h"

/**
 *_abs - function that computes the absolute value
 *of an integer
 *Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar('-');
		_putchar(-n + '0');
	}
return n;
}

