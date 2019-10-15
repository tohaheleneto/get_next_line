/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 05:18:10 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 11:45:02 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 && s2)
	{
		i = 0;
		while (s2[i] && s1[i] && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if ((i == n) || (s1[i] == s2[i]))
			return (1);
	}
	return (0);
}
