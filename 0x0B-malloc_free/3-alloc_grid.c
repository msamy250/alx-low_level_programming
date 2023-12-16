#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - two dimential arrays
 *Return: pointer to function
 */

int **alloc_grid(int width, int height)
{


	/* create a pointer with integer type 
- if the parmenters equalls zero or less return null 
- create a space in the memory for the first dimention ( malloc) 
- free if null 
create a space for the second dimention with malloc in for loop 
    if  the second d  == null free the all the second  dimention of array then free all grid 
    if not intiialize the 2 D with zero */



	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * (sizeof(int *)));

		if (grid[i] == NULL)

			while (i >= 0)
			{
				free(grid[i--]);
			free(grid);
			return (NULL);
			}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}



