/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 04:52:53 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:35:57 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_atoi(const char *str)
{
	char	c;
	long	res;
	long	counter;

	c = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		c = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		counter = res;
		res = res * 10 + c * (*str - '0');
		if (res < counter && counter > 0)
			return (-1);
		if (res > counter && counter < 0)
			return (0);
		str++;
	}
	return (res);
}
