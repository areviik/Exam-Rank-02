#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
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
    {
        ft_putnbr(num / 10);
    }
    ft_putchar(num % 10 + '0');
}

int ft_atoi(char *str)
{
    int number = 0;       
    int sign = 1;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        number = number * 10 + (*str - '0');
        str++;
    }
    return (number * sign);
}

int ft_is_prime(int nbr)
{
    if (nbr < 2)
        return 0;
    for (int i = 2; i * i <= nbr; i++)
    {
        if (nbr % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = ft_atoi(argv[1]);
        if (n <= 1) 
        {
            ft_putchar('0');
            ft_putchar('\n');
            return 0;
        }

        int sum = 0;
        while (n > 1)
        {
            if (ft_is_prime(n))
                sum = sum + n;
            n--;
        }
        ft_putnbr(sum);
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('0');
        ft_putchar('\n');
    }
    return 0;
}
