int isspace(int c)
{
    return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}

int isvalid(int ch, int baselen)
{
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";
    int i = 0;
    while (i < baselen)
    {
        if (ch == lcbase[i] || ch == ucbase[i])
            return 1;
        i++;
    }
    return 0;
}

int ft_atoi_base(const char *str, int str_base)
{
    int num = 0, sign = 1, i = 0;

    while (isspace(str[i]))
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] && isvalid(str[i], str_base))
    {
        int val;

        if (str[i] >= '0' && str[i] <= '9')
            val = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            val = str[i] - 'a' + 10;
        else
            val = str[i] - 'A' + 10;

        num = num * str_base + val;
        i++;
    }
    return (num * sign);
}
