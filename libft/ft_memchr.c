/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 00:34:49 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/25 00:55:02 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	f;
	unsigned char	*src;

	f = (unsigned char)c;
	src = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == f)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
