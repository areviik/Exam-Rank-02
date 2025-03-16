#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int nbr)
{
    unsigned int num;
    if (nbr < 0)
    {
        ft_putchar('-');
        num = -nbr;
    }
    else 
        num = nbr;
    if (num >= 10)
        ft_putnbr(num / 10);
    ft_putchar(num % 10 + '0');
}

int main(int argc, char **argv)
{
    argv = 0;
    ft_putnbr(argc - 1);
    ft_putchar('\n');
}