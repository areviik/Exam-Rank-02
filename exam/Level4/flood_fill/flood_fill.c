#include "flood_fill.h"

static void fill(char **tab, t_point size, int y, int x, char target, char replacement)
{
    if (y < 0 || y >= size.y || x < 0 || x >= size.x || tab[y][x] != target)
        return;
    tab[y][x] = replacement;
    fill(tab, size, y+1, x, target, replacement);
    fill(tab, size, y-1, x, target, replacement);
    fill(tab, size, y, x+1, target, replacement);
    fill(tab, size, y, x-1, target, replacement);
}

void flood_fill(char **tab, t_point size, t_point start)
{
    char target = tab[start.y][start.x];
    if (target == 'F')
        return;
    fill(tab, size, start.y, start.x, target, 'F');
}
