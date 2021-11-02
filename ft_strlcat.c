/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:49:07 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/02 11:49:08 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	r;

	d = 0;
	s = 0;
	while (dst[d])
		d++;
	while (src[s])
		s++;
	if (d >= dstsize)
		r = s + dstsize;
	else
		r = d + s;
	if (dstsize)
	{
		while (*src && d < dstsize - 1)
			*dst++ = *src++;
	}
	return (r);
}
