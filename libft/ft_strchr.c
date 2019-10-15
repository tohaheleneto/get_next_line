/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 06:35:24 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:46:27 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*si;
	char	ch;

	si = (char*)s;
	ch = (char)c;
	while (*si)
	{
		if (*si == ch)
			return ((char *)si);
		si++;
	}
	if (ch == '\0')
		return ((char *)si);
	return (NULL);
}
