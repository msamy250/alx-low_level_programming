#include "main.h"

/**
 *array_range - function that create array of range
 *@min: min number
 *@max: max number
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
    int range;
    int i;
    
    range = (max - min + 1);

	if (min >= max)
	{
		return (NULL);
	}

	ptr = malloc(range * (sizeof(int)));

	if (ptr == NULL)
	{
		return (NULL);
	}
    for (i = 0; i <= range; i++)
    {
        ptr[i] = min + 1;
    }
    
	return (ptr);
}
