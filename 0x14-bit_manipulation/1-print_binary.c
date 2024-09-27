#include "main.h"

/**
 * print_binary - Displays the binary form of a given number.
 * @n: The number to be displayed in its binary representation.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
