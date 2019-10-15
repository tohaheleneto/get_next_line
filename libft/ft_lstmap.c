/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:50:37 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 20:42:04 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;
	t_list	*save;

	save = NULL;
	if (f && lst)
	{
		copy = f(lst);
		save = copy;
		lst = lst->next;
		while (lst)
		{
			copy->next = f(lst);
			copy = copy->next;
			lst = lst->next;
		}
		copy->next = NULL;
	}
	return (save);
}
