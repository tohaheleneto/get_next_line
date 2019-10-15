/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 03:53:58 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:32:18 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*cdst;

	cdst = dst;
	if (dst > src)
	{
		dst = dst + len - 1;
		src = src + len - 1;
		while (len > 0)
		{
			*(unsigned char*)dst = *(unsigned char*)src;
			dst--;
			src--;
			len--;
		}
	}
	if (dst < src)
		while (len > 0)
		{
			*(unsigned char*)dst = *(unsigned char*)src;
			dst++;
			src++;
			len--;
		}
	return (cdst);
}
