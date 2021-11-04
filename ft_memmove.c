/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:14:50 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/04 15:16:23 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	 size_t	i;

	 i = -1;
	 if (dst > src)
	 {
		len++;
	 	while (--len)
	 		*(char *)(dst + len) = *(char *)(src + len);
	 }
	 else if (src > dst)
	 {
		 while (++i < len)
			 *(char *)(dst + i) = *(char *)(src + i);
	 }
	 return (dst);
}
