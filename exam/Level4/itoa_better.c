#include <stdlib.h>
static int num_length(long int li)
{
    int len = 0;
    if (li == 0)
        return 1;
    if (li < 0)
    {
        len++;
        li *= -1;
    }
    while (li > 0)
    {
        len++;
        li /= 10;
    }
    return len;
}

static char *ft_converter(char *str, int len, long int number)
{
    while (number > 0)
    {
        str[len--] = (number % 10) + '0';
        number /= 10;
    }
    return str;
}

char *ft_itoa(int nbr)
{
    long int li = nbr;
    int len = num_length(li);
    char *str = malloc(len + 1);
    if (!str)
        return NULL;
    str[len--] = '\0';
    if (li == 0)
    {
        str[0] = '0';
        return str;
    }
    if (li < 0)
    {
        str[0] = '-';
        li *= -1;
        ft_converter(str + 1, len - 1, li);
    }
    else
        ft_converter(str, len, li);
    return str;
}
