#include "main.h"

/**
 *reverse_array - function that reverse array
 *@a: array
 *@n: number of elements
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int len = (n - 1);

	for (i = 0; i < len; i++, len--)
	{
		temp = a[i];
		a[i] = a[len];
		a[len] = temp;
	}
}
