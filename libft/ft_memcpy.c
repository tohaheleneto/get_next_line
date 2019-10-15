/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:18:11 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/25 03:31:32 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *ch;
	unsigned char		*dch;

	ch = (unsigned char*)src;
	dch = (unsigned char*)dest;
	while (n > 0)
	{
		*dch = *ch;
		dch++;
		ch++;
		n--;
	}
	return (dest);
}
