#include "main.h"

/**
 *puts_half - second half of the string
 *@str: is string
 *Return: 0
 */
void puts_half(char *str)
{
	int l = 0;
	int i = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = l / 2; i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
