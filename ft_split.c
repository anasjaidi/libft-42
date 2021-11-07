int	ft_count(char *str, char c)
{
	int	i;
	int	c1;

	i = -1;
	c1 = 0;
	while (str[++i])
	{	if ((str[i] != c && str[i  + 1] == c) || (str[i] != c && str[i + 1] == '\0'))
			c1++;
    }
	return (c1);
}

char	*ft_word(int start, int end, char *str)
{
	int		size;
	char	*r;
	int		i;

	i = -1;
	size = end - start;
	r = (char *)malloc(size * sizeof(char) + 1);
	if (!r)
		return (NULL);
	while (start < end)
    {
		r[++i] = str[start++];
    }
	r[size] = 0;
	return (r);
}

char	**ft_splt(char *str, char c, int size)
{
	int		i;
	int		j;
	char	**r;
	int		d;

	i = 0;
	j = 0;
	d = -1;
	r = (char **)malloc((size + 1) * sizeof(char *));
	if (!r)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		j = i;
		while(str[j] != c)
			j++;
		r[++d] = ft_word(i, j , str);
		i = j;
	}
    r[size] = 0;
	return (r);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		size;

	size = ft_count((char *)s, c);
	if (c == '\0')
	{
		r = (char **)malloc(2 * sizeof(char *));
		r[0] = (char *)s;
		r[1] = 0;
		return (r);
	}
	r = ft_splt((char *)s, c, size);
	return (r);
}