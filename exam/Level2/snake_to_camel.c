#include <unistd.h>

int toUpper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int ft_putchar(char a)
{
    return write(1, &a, 1);
}

int main(int ac, char **av)
{
    int i;
    
    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] == '_')
                ft_putchar(toUpper(av[1][++i]));
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}
