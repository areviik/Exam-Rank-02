#include <unistd.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i]) 
            i++;
        while (--i >= 0)
        {
            while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t') 
                i--;
            int start = i + 1;
            while (argv[1][start] && argv[1][start] != ' ' && argv[1][start] != '\t')
                write(1, &argv[1][start++], 1);
            if (i >= 0) 
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}
