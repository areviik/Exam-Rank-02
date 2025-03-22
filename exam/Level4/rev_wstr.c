#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (!*argv[1])
            return write(1,"\n", 1);
        int i = 0;
        while(argv[1][i] != 0)
            i++;
        while(i >= 0)
        {
            while(!argv[1][i] || argv[1][i] == ' ' || argv[1][i] == '\t')
                i--;
            int end = i;
            while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                i--;
            int start = i + 1;
            int flag = start;
            while (start <= end)
            {
                write(1,&argv[1][start], 1);
                start++;
            }
            if (i >= 0)
                write(1, " ", 1);
        }
    }
    write(1,"\n",1);
}

