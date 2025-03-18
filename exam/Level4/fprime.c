#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        if(!*argv[1] || argv[1][0] == '-')
            return printf("\n");
        int number = atoi(argv[1]);
        if (number == 1)
            printf("1");
        int i = 1;
        while (number >= ++i)
        {
            if(number % i == 0)
            {
                printf("%d", i);
                if (number == i)
                    break ;
                printf("*");
                number /= i;
                i = 1;
            }
        }
    }
    printf("\n");
}