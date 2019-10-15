/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 02:32:53 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/29 11:40:05 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*res;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	res = malloc(i + 1);
	if (res == NULL)
		return (NULL);
	res[i] = '\0';
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
