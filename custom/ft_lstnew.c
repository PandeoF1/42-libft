/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:38 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:24 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*x;

	x = (t_list *)malloc(sizeof(t_list));
	if (!x)
		return (NULL);
	if (content)
		x->content = ft_memdup(content, content_size);
	else
		x->content = NULL;
	if (x->content)
		x->content_size = content_size;
	else
		x->content_size = 0;
	x->next = NULL;
	return (x);
}

/*
** create a new t_list item with content continously allocated after it
*/

t_list	*ft_lstnewi(const void *content, const size_t content_size)
{
	const size_t		bsize = content_size + sizeof(t_list);
	t_list				*x;

	x = malloc(sizeof(bsize));
	if (!x)
		return (NULL);
	if (!content)
	{
		x->content = NULL;
		x->content_size = 0;
	}
	else
	{
		x->content = ft_memcpy(((void *)((size_t)x + sizeof(t_list))), content,
				content_size);
		x->content_size = content_size;
	}
	x->next = NULL;
	return (x);
}
