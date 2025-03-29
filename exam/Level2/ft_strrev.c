char *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char new;

    while (str[len] != '\0')
        len++;
    while (i < len / 2)
    {
        new = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = new;
        i++;
    }
    return str;
}
