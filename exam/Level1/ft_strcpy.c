char	*ft_strcpy(char *s1, char *s2)
{
	/*
	if (s1 == NULL || s2 == NULL)
        return s1;
	*/
	unsigned int i = 0;
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
