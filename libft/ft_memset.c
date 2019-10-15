/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:54:52 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/24 23:49:54 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ch;

	ch = (unsigned char*)s;
	while (n > 0)
	{
		*ch = (unsigned char)c;
		ch++;
		n--;
	}
	return (s);
}
