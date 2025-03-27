#include <unistd.h>

int is_space(char c) 
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av) 
{
    if (ac > 1) 
    {

        if (!*av[1])
            return write(1, "\n", 1);

        int  i = 0;
        while (is_space(av[1][i]))
            i++;

        int start = i;
        while (av[1][i] && !is_space(av[1][i]))
            i++;

        int end = i;
        while(is_space(av[1][i]))
            i++;
            
        int flag = 0;
        while (av[1][i]) 
        {
            while (is_space(av[1][i]) && is_space(av[1][i+1]))
                i++;
            if (is_space(av[1][i]))
                flag = 1;
            write(1, &av[1][i], 1);
            i++;
        }
        if (flag && !is_space(av[1][i-1]))
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}
