#include "main.h"

/**
 *malloc_checked - function that allocates memory
 *@b: unsigned
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *malloc_checked = (int *) malloc(b * sizeof(int));
	if (malloc_checked == NULL)
	{
		exit(98);
	}

	return (malloc_checked);
}
