/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:38:20 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/08 01:53:55 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_nbr(long long n, int len, char *r)
{
	int	i;

	i = 0;
	while (n)
	{
		r[len--] = 48 + (n % 10);
		n /= 10;
	}
}

int	ft_len(int n)
{
	int	c;

	c = 0;
	if (n < 0)
		c++;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			len;
	char		*r;

	len = ft_len(n);
	if (!len)
	{
		r = (char *)malloc(2);
		r[0] = '0';
		r[1] = 0;
		return (r);
	}
	r = (char *)malloc(len * sizeof(char) + 1);
	if (!r)
		return (NULL);
	r[len--] = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		r[0] = '-';
	}
	ft_nbr(nb, len, r);
	return (r);
}
