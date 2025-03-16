int *ft_rrange(int start, int end)
{
    int i = 0, len;

    if (end - start < 0)
        len = (start - end) + 1;
    else
        len = (end - start) + 1;

    int *range = (int *)malloc(len * sizeof(int));
    /*
    if (!range)
        return NULL;
    */
    while (i < len)
    {
        if (end > start)
            range[i] = end - i;
        else
            range[i] = end + i;
        i++;
    }
    return range;
}
