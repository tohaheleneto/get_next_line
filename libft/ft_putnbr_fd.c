/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 03:10:23 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:37:49 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char			k;
	unsigned long	l;
	unsigned int	temp;

	if (n < 0)
	{
		write(fd, "-", 1);
		temp = -n;
	}
	else
		temp = n;
	l = 1;
	while (temp >= l * 10)
		l *= 10;
	while (l)
	{
		k = temp / l % 10 + '0';
		l = l / 10;
		write(fd, &k, 1);
	}
}
