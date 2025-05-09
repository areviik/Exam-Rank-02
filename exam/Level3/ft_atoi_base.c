int ft_atoi_base(const char *str, int str_base)
{
    int num = 0;
    int sign = 1;
    int digit;

    if (str_base < 2 || str_base > 16)
        return 0;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;

    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    if (*str == '\0')
        return 0;

    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            digit = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            digit = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            digit = *str - 'A' + 10;
        else
            break;

        if (digit >= str_base)
            return 0;

        num = num * str_base + digit;
        str++;
    }

    return num * sign;
}
