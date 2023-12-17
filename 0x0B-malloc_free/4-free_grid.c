#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - two dimential arrays
 *@width: width
 *@height: height
 *Return: pointer to function
 */

void free_grid(int **grid, int height)
{
int i;

{
    for (i = 0; i < height;i++)
        free(grid[i]);
    free(grid);
}

}


