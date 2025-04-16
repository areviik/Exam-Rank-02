#include <unistd.h>

unsigned int ft_atoi(const char *str)
{
    unsigned int number = 0;
    while (*str >= '0' && *str <= '9')
    {
        number = number * 10 + (*str - '0');
        str++;
    }
    return (number);
}

static void print_hex(int num)
{
    char *lchex = "0123456789abcdef";
    if (num >= 16)
        print_hex(num / 16);
    char c = lchex[num % 16];
    write(1, &c,1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}
