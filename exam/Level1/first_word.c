#include <unistd.h>

static int ft_space(char c)
{
    return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i] && ft_space(argv[1][i]))
            i++;
        int start = i;
        while (argv[1][i] && !ft_space(argv[1][i]))
            i++;
        while(start < i)
            write(1,&argv[1][start++],1);
    }
    write(1,"\n",1);
}
