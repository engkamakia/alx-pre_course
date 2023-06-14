#include <stdlib.h>
/**
 * free_grid - function to free the  2 dimensional grid.
 * @grid:the 2 dimensional grid.
 * @height: height of grid.
 *
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
