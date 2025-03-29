#include <unistd.h>

void ft_putstr(char *s)
{
    unsigned int i = 0;
    while(s[i] != 0)
    {
        write(1,&s[i],1);
        i++;
    }
}

unsigned int ft_atoi(const char *str)
{
    unsigned int num = 0;
    while (*str && *str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return (num);
}

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    char c = num % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 1, n = ft_atoi(av[1]);
    while (i < 10)
    {
        ft_putnbr(i);
        ft_putstr(" x ");
        ft_putnbr(n);
        ft_putstr(" = ");
        ft_putnbr(i * n);
        write(1, "\n", 1);
        i++;
    }
}
