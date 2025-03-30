#include <unistd.h>

int main(int argc, char **argv)
{

    if(argc == 3)
    {
        unsigned int i = 0, len = 0;
        const char *s1 = argv[1], *s2 = argv[2];

        while(s1[len])
            len++;

        while (i < len && *s2)
        {
            if(s1[i] == *s2++)
                i++;
        }
        if (i == len)
            write(1, s1, len);
    }
    write(1,"\n",1);
}
