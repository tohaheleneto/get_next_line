/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:21:57 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 19:17:40 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*my;

	if (alst && del)
	{
		while (*alst)
		{
			if ((*alst)->content)
				del((*alst)->content, (*alst)->content_size);
			my = (*alst)->next;
			free(*alst);
			*alst = my;
		}
	}
}
