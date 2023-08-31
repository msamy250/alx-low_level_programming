#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: is string
 *Return: 0
 */
void print_rev(char *s)
{
	int l = sizeof(*s) / sizeof(s[0]);
	int i;

	for (i = s[l]; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
