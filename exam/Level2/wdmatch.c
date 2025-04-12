#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        int j = 0;
        const char *str1 = argv[1];
        const char *str2 = argv[2];

        while (str1[i] != 0 && str2[j] != 0)
        {
             if (str1[i] == str2[j])
                i++;
             j++;
        }
        if (str1[i] == '\0')
            write(1, str1, i);
    }
    write(1, "\n" ,1);
}
