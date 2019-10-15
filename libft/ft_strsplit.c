/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:10:22 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/27 16:50:26 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t	ft_count_words(char const *s, char c)
{
	size_t		count;
	size_t		i;

	if (s[0] == c || s[0] == '\0')
		count = 0;
	else
		count = 1;
	i = 1;
	while (s[i])
	{
		if ((s[i - 1] == c) && (s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static void		ft_free_memory(const char **res, size_t memory)
{
	while (--memory > 0)
		free((void *)res[memory]);
}

static	char	ft_try_to_create_fill(char const **s,
		size_t *m, char **res, char c)
{
	if (!(res[m[1]] = (char *)malloc(m[0] + 1)))
	{
		ft_free_memory(s, m[1]);
		return (1);
	}
	m[0] = 0;
	while (**s && **s != c)
		res[m[1]][m[0]++] = (*(*s)++);
	res[m[1]++][m[0]] = '\0';
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		m[2];
	char		**res;

	m[1] = 0;
	if ((!s) || (!(res = (char **)malloc(sizeof(char *)
						* ft_count_words(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		m[0] = 0;
		if (*s != c)
		{
			while (s[m[0]] && s[m[0]] != c)
				m[0]++;
			if (ft_try_to_create_fill(&s, m, res, c))
				return (NULL);
		}
		else
			s++;
	}
	res[m[1]] = NULL;
	return (res);
}
