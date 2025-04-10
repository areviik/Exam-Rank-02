int ft_isspace(int c)
{
    return (c == ' ' || (c >= '\t' && c <= '\r'));
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
    int val = 0;

    if (str_base < 2 || str_base > 16) 
    return 0;

    while (ft_isspace(str[i]))
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

        if (str[i] >= '0' && str[i] <= '9')
            val = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            val = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            val = str[i] - 'A' + 10;

        num = num * str_base + val;
        i++;
    }
    return (num * sign);
}
