#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	char	*result;
	int		i;

	len = 0;
	while (s[len])
		len++;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

