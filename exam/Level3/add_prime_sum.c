#include <unistd.h>

static void ft_putnbr(unsigned int num)
{
    if(num >= 10)
        ft_putnbr(num / 10);
    char c = num % 10 + '0';
    write(1,&c,1);
}

static unsigned int ft_atoi(char *s)
{
     unsigned int num = 0;
    while (*s >= '0' && *s <= '9')
    {
        num = num * 10 + (*s - '0');
        s++;
    }
    return num;
}

static int ft_prime(int number)
{
    if (number < 2)
        return 0;
    int i = 2;
    while (i * i <= number)
    {
        if (number % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = ft_atoi(argv[1]);
        if (n < 1)
        {
            ft_putnbr(0);
            write(1,"\n",1);
        }
        int sum = 0;
        while (n > 1)
        {
            if(ft_prime(n))
                sum += n;
            n--;
        }
        ft_putnbr(sum);
    }
    write(1,"\n",1);
}
