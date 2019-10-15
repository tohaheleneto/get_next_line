/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 06:07:20 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/25 06:26:19 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	s = s + start;
	result[len] = '\0';
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}
