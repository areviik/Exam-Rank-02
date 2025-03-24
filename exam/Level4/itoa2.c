#include <stdlib.h>

char *ft_itoa(int nbr)
{
    char *str;
    char *t;
    char *u;

    if(!(str = (char *)malloc(16)))
        return NULL;
    t = str;
    if (nbr < 0)
        *t++ = '-';
    else if (nbr > 0)
        nbr = -nbr;
    if (nbr <= -10)
    {
        u = ft_itoa(-(nbr/10));
        if (!u)
            return NULL;
        while(*u)
            *t++ = *u++;
    }
    *t = '0' - nbr % 10;
    *(t + 1) = 0;
    return(str);
}
