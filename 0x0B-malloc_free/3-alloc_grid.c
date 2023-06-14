#include <stdlib.h>
/**
 *alloc_grid - function that returns a pointer to a 2 dimensional array.
 *@width:width of the grid
 *@height:length of the grid
 *
 *Return:NULL on failure and a Pointer to a 2 dimensional array is success.
 *
 */
int **alloc_grid(int width, int height)
{

	int a = 0, b;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (!grid[a])
		{
			for (b = 0; b <= a; b++)
			{
				free(grid[b]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}

