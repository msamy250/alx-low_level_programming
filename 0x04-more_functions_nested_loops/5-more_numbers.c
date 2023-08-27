#include "main.h"

/**
 *more_numbers - print numbers
 *@i: numbers from 0  to 14
 *@c: The number of rows
 */
void more_numbers(void)
{
	int i;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}

