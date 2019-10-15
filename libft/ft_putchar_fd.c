/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:34:51 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:36:37 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	ch;
	unsigned char	buff[2];

	ch = (unsigned char)c;
	if (ch <= 127)
		write(fd, &ch, 1);
	else
	{
		buff[0] = 128 + 64 + ch / 64;
		buff[1] = 128 + ch % 64;
		write(fd, buff, 2);
	}
}
