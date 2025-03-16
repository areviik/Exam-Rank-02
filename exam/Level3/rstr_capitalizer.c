#include <unistd.h>

void  ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_isspace(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

void rev_capitalizer(char *str)
{
    unsigned int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (ft_isspace(str[i + 1]) || str[i + 1] == '\0'))
            str[i] -= 32;
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int k = 1;
    if (argc == 1)
        ft_putchar('\n');
    else
    {
        while (k < argc)
        {
            rev_capitalizer(argv[k]);
            ft_putchar('\n');
            k++;
        }
    }
}
