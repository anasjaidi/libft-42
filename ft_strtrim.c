/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 00:30:59 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/07 19:56:31 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lens(char *s1, char *s2)
{
	int	i;
	int	j;
	int	c;

	i = -1;
	c = 0;
	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[i] == s2[j])
			{
				c++;
				break ;
			}
			if (s2[j + 1] == '\0')
				return (c);
		}
	}
	return (c);
}

int	ft_lene(char *s1, char *s2)
{
	int	s;
	int	j;
	int	c;

	s = ft_strlen(s1);
	c = 0;
	while (--s)
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[s] == s2[j])
			{
				c++;
				break ;
			}
			if (s2[j + 1] == '\0')
				return (c);
		}
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		c1;
	int		c2;
	int		lamp;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	c1 = ft_lens((char *)s1, (char *)set);
	c2 = ft_lene((char *)s1, (char *)set);
	s = ft_strlen(s1);
	if (s == c1)
		return (ft_strdup(""));
	ptr = (char *)malloc((s - (c1 + c2)) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + c1, s - (c1 + c2) + 1);
	return (ptr);
}
