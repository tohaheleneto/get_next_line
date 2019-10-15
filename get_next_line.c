/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <vminisa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:25:01 by vminisa-          #+#    #+#             */
/*   Updated: 2019/10/15 03:28:02 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list			*ft_lstnew_with_fd(size_t content_size)
{
	t_list *my;

	my = (t_list*)malloc(sizeof(t_list));
	if (!my)
		return (NULL);
	if (!(my->content = (void *)ft_memalloc(1)))
	{
		free(my);
		return (NULL);
	}
	ft_memcpy(my->content, "\0", 1);
	my->content_size = content_size;
	my->next = NULL;
	return (my);
}

static	t_list	*find_or_create_list(t_list **node, int fd)
{
	t_list	*tmp;

	tmp = *node;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew_with_fd(fd);
	ft_lstadd(node, tmp);
	tmp = *node;
	return (tmp);
}

static	int		separated_join(char **line, t_list *head)
{
	char	*tmp;

	*line = ft_strsub(head->content, 0, ft_strchr(head->content, '\n')
				- (char *)head->content);
	tmp = ft_strsub(head->content, (ft_strchr(head->content, '\n')
			- (char *)head->content) + 1, ft_strlen(head->content)
			- (ft_strchr(head->content, '\n') - (char *)head->content));
	free(head->content);
	head->content = ft_strdup(tmp);
	free(tmp);
	return (1);
}

static	int		check_eof(int ret, t_list *head, char **line)
{
	if (ret == 0 && (head->content == NULL || !ft_strlen(head->content)))
	{
		*line = ft_strnew(1);
		return (0);
	}
	if (ft_strchr(head->content, '\n') != NULL)
		return (separated_join(line, head));
	*line = ft_strdup(head->content);
	free(head->content);
	head->content = NULL;
	return (1);
}

int				get_next_line(int fd, char **line)
{
	int				ret;
	char			*tmp;
	char			str[BUFF_SIZE + 1];
	static t_list	*node;
	t_list			*head;

	if (fd < 0 || !line || BUFF_SIZE <= 0 || read(fd, str, 0) < 0)
		return (-1);
	head = find_or_create_list(&node, fd);
	while ((ret = read(fd, str, BUFF_SIZE)))
	{
		str[ret] = '\0';
		tmp = ft_strjoin(head->content, str);
		free(head->content);
		head->content = tmp;
		if (ft_strchr(head->content, '\n') != NULL)
			return (separated_join(line, head));
	}
	return (check_eof(ret, head, line));
}
