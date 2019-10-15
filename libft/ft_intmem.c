/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:20:15 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/29 11:25:36 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_intmem(size_t count)
{
	int		*res;
	size_t	i;

	res = (int*)malloc(sizeof(int) * count);
	if (!res)
		return (NULL);
	i = 0;
	while (count > 0)
	{
		res[i] = 0;
		i++;
		count--;
	}
	return (res);
}
