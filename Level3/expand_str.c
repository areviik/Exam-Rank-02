#include <unistd.h>

int is_space(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0, space = 0;
        while(is_space(argv[1][i]))
            i++;
        while(argv[1][i])
        {
            if(is_space(argv[1][i]))
                space = 1;
            if (!is_space(argv[1][i]))
            {
                if(space)
                    write(1,"   ",3);
                space = 0;
                write(1,&argv[1][i],1);
            }
            i++;
        }
    }
    write(1,"\n",1);
}