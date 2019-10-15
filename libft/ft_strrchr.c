/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 04:32:27 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:49:30 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*pos;

	i = 0;
	pos = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			pos = (char*)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		pos = (char*)&s[i];
	return (pos);
}
