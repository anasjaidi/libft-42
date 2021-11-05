/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:18:45 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/02 11:18:47 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,
		const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = -1;
	i = ft_strlen(src);
	if (!dstsize)
		return (i);
	while (*src && ++j < dstsize - 1)
		*dst++ = *src++;
	*dst = 0;
	return (i);
}
