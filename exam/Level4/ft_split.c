#include <stdlib.h>

static int	ft_isspace(char c)
{
    return (c == '\t' || c == ' ' || c == '\n');
}

static int	ft_word_count(char const *s)
{
	int	i = 0;
	int	count = 0;

	while (s[i] != '\0')
	{
		if (ft_isspace(s[i]))
			i++;
		else
		{
			count++;
			while (s[i] && !ft_isspace(s[i]))
				i++;
		}
	}
	return (count);
}

static char	*ft_copy_word(char const *s, int start, int word_len)
{
	char	*word;
	int		j = 0;

	word = (char *)malloc(word_len + 1);
	if (!word)
		return (NULL);
	while (word_len > 0)
	{
		word[j++] = s[start++];
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_words_split(char const *s, int num_words)
{
	int		i = 0, word = 0, word_len = 0;
	char	**words;

	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!words)
		return (NULL);
	while (word < num_words)
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		word_len = 0;
		while (s[i] && !ft_isspace(s[i]))
		{
			i++;
			word_len++;
		}
		if (word_len > 0)
		{
			words[word] = ft_copy_word(s, i - word_len, word_len);
			if (!words[word])
				return (NULL);
			word++;
		}
	}
	words[word] = NULL;
	return (words);
}

char	**ft_split(char *s)
{
	char	**s2;
	int		num_words;

	if (!s)
		return (NULL);
	num_words = ft_word_count(s);
	s2 = ft_words_split(s, num_words);
	return (s2);
}