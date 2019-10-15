/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 05:48:10 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 10:09:00 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t		first;
	size_t		last;
	size_t		i;
	char		*res;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	first = i;
	while (s[i])
		i++;
	while ((i > 0) && (s[i] == ' ' || s[i] == '\n'
				|| s[i] == '\t' || s[i] == '\0'))
		i--;
	last = (i < first) ? (first - 1) : i;
	res = malloc(last - first + 2);
	if (res == NULL)
		return (NULL);
	i = -1;
	while (first + ++i <= last)
		res[i] = s[first + i];
	res[i] = '\0';
	return (res);
}
