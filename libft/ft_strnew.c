/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:26:21 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/25 05:04:59 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (size >= i)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
