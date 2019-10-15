/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:36:28 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/29 11:45:10 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_intmap(size_t n, int *src, int (f)(int))
{
	size_t	i;
	int		*res;

	if (!src || !f || (n == 0))
		return (NULL);
	res = malloc(sizeof(int) * n);
	if (!res)
		return (NULL);
	i = 0;
	while (i < n)
	{
		res[i] = f(src[i]);
		i++;
	}
	return (res);
}
