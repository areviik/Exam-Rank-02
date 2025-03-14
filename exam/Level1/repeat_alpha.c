#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int rep_count;

    if (argc == 2)
    {
        while (argv[1][i])
        { 
            char c = argv[1][i];
            
            if (c >= 'A' && c <= 'Z')
                rep_count = c - 'A' + 1;
            else if (c >= 'a' && c <= 'z')
                rep_count = c - 'a' + 1;
            else
                rep_count = 1;

            while (rep_count--)
                write(1, &c, 1);

            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
