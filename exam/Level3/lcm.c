unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned num;

    if (a == 0 || b == 0)
        return (0);

    if (a < b)
        num = b;
    else
        num = a;
    while(1)
    {
        if (num % a == 0 && num % b == 0)
            return num;
        num++;
    }
}