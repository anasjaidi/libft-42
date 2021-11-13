/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:34:20 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/12 18:07:02 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	if (len > (ft_strlen(s) - start))
		ptr = (char *)malloc(ft_strlen(s) - start + 1);
	else
		ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[start + ++i] && i < len)
		ptr[i] = s[start + i];
	ptr[i] = 0;
	return (ptr);
}
