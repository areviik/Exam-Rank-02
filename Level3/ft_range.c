int *ft_range(int start, int end)
{
    int i = 0, len;
    if (end - start < 0)
        len = ((end - start) * -1) + 1;
    else
        len = end - start + 1;

    int *range = (int *)malloc(len * sizeof(int));
    /*
    if (!range)
        return NULL;
    */
    while (i < len)
    {
        if (start < end)
            range[i] = start + i;  
        else
            range[i] = start - i; 
        i++;
    }
    return range;
}
