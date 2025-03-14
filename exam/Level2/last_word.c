#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0, start;

    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        while (i > 0 && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
            i--;
        start = i;
        while (i > 0 && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
            i--;
        while (i < start)
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
