/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 05:08:19 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/25 05:41:54 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*res;
	unsigned char	*ptr;

	res = malloc(size);
	if (res == NULL)
		return (NULL);
	ptr = (unsigned char *)res;
	while (0 < size)
	{
		size--;
		*ptr = '\0';
		ptr++;
	}
	return (res);
}
