/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 04:45:32 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:45:06 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(needle);
	if (k == 0)
		return ((char*)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i + k <= len)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
