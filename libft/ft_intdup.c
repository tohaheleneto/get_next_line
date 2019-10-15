/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:25:55 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/29 11:32:00 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_intdup(int *src, size_t n)
{
	size_t	i;
	int		*res;

	res = malloc(sizeof(int) * n);
	if (!res)
		return (NULL);
	i = 0;
	while (n > i)
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
