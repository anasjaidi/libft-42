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

 size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	if (dstsize)
	{
		while (*src && --dstsize)
			*dst++ = *src++;	
	}

}
