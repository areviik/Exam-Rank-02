#include <unistd.h>

unsigned int ft_atoi(const char *str)
{
    unsigned int number;
    /*int sign = 1;
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '+')
        str++;
    if(*str == '-')
    {
        sign = -1;
        str++;
    }*/
    while (*str && *str >= '0' && *str <= '9')
    {
        number = number * 10 + (*str - '0');
        str++;
    }
    return (number /** sign*/);
}

void print_hex(int num)
{
    char *lchex = "0123456789abcdef";
    char c;

    if (num >= 16)
        print_hex(num / 16);
    c = lchex[num % 16];
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        print_hex(ft_atoi(argv[1]));
    }
    write(1,"\n",1);
}