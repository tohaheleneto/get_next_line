/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 02:03:34 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:37:06 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char			k;
	unsigned long	l;
	unsigned int	temp;

	if (n < 0)
	{
		write(1, "-", 1);
		temp = -n;
	}
	else
		temp = n;
	l = 1;
	while (temp >= l * 10)
		l = l * 10;
	while (l)
	{
		k = temp / l % 10 + '0';
		l = l / 10;
		write(1, &k, 1);
	}
}
