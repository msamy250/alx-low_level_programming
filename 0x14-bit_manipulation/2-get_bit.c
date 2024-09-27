#include "main.h"

/**
 * get_bit - A function that retrieves the bit at a specified index.
 * @n: The number to get bit from
 * @index: The index where the bit get
 * Return: The bit value at the specified index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
