/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:31:08 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/26 00:57:47 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	unsigned char ch;
	unsigned char buff[2];

	ch = (unsigned char)c;
	if (ch <= 127)
		write(1, &ch, 1);
	else
	{
		buff[0] = 128 + 64 + ch / 64;
		buff[1] = 128 + ch % 64;
		write(1, buff, 2);
	}
}
