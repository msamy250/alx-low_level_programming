#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: is value
 *@b: is value
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
