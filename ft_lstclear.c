/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:04:28 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/11 22:04:28 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*q;

	p = *lst;
	if (!p)
		return ;
	while (p)
	{
		q = p;
		p = p->next;
		del(q->content);
		free(q);
	}
	*lst = NULL;
}
