#include <unistd.h>

static int toUpper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;             // you can return it too
    return c;
}

static void ft_putchar(char a)
{
    write(1, &a, 1);           // can return it if you make it int..()
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] == '_')
                ft_putchar(toUpper(argv[1][++i]));
            else
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}
