#include <unistd.h>

static void ft_putchar(char c)
{
    write(1, &c, 1);
}

static int is_space(char c)
{
    return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0, space = 0;
        while (is_space(av[1][i]))
            i++;
        while (av[1][i])
        {
            if (is_space(av[1][i]))
                space = 1;
            if (!is_space(av[1][i]))
            {
                if (space)
                    ft_putchar(' ');
                space = 0;
                ft_putchar(av[1][i]);
            }
            i++;
        }
    }
    ft_putchar('\n');
}