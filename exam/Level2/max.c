int max(int *tab, unsigned int len)
{
    if (len == 0)
        return 0; 

    int max_ell = tab[0];
    unsigned int i = 1;

    while (i < len)
    {
        if (tab[i] > max_ell)
            max_ell = tab[i];
        i++;
    }
    return max_ell;
}

