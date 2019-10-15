/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:54:47 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 16:42:40 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_length_nbr(int n)
{
	int				count;
	unsigned int	cp;

	count = 1;
	if (n < 0)
	{
		cp = -n;
		count++;
	}
	else
		cp = n;
	while (cp >= 10)
	{
		cp = cp / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	unsigned int	nk;
	char			*res;
	int				pos;

	pos = ft_length_nbr(n);
	if (!(res = (char*)malloc(pos + 1)))
		return (NULL);
	res[pos--] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nk = -n;
		n = 1;
	}
	else
	{
		nk = n;
		n = 0;
	}
	while (pos >= n)
	{
		res[pos--] = '0' + nk % 10;
		nk = nk / 10;
	}
	return (res);
}
