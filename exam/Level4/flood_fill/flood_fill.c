#include "flood_fill.h"

static void flood_fill_recursive(char **tab, t_point size, int x, int y, char old_char, char new_char)
{
    if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != old_char)
        return;
    tab[y][x] = new_char;
    flood_fill_recursive(tab, size, x + 1, y, old_char, new_char);
    flood_fill_recursive(tab, size, x - 1, y, old_char, new_char);
    flood_fill_recursive(tab, size, x, y + 1, old_char, new_char);
    flood_fill_recursive(tab, size, x, y - 1, old_char, new_char);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char old_char = tab[begin.y][begin.x]; 
    if (old_char != 'F')  
        flood_fill_recursive(tab, size, begin.x, begin.y, old_char, 'F');
}


// y -> row, x -> columns
