#include <unistd.h>

static void  ft_putchar(char c)
{
    write(1, &c, 1);
}

static int ft_isspace(char c)
{
    return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static void str_capitalizer(char *str)
{
    unsigned int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || ft_isspace(str[i - 1])))
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
            str_capitalizer(argv[k]);
            ft_putchar('\n');
            k++;
        }
    }
}
