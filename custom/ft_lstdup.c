/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:32 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:55:55 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstdup(t_list *lst, void *(*f)(void*))
{
	t_list	*root;
	t_list	*item;

	root = NULL;
	item = NULL;
	while (lst)
	{
		if (!root)
		{
			item = ft_lstnewlink(f(lst->content), lst->content_size);
			root = item;
		}
		else
		{
			item->next = ft_lstnewlink(f(lst->content), lst->content_size);
			item = item->next;
		}
		lst = lst->next;
	}
	return (root);
}

t_list	*ft_lstndup(t_list *lst, size_t n, void *(*f)(void*))
{
	t_list	*root;
	t_list	*item;

	root = NULL;
	item = NULL;
	while ((lst) && (n--))
	{
		if (!root)
		{
			item = ft_lstnewlink(f(lst->content), lst->content_size);
			root = item;
		}
		else
		{
			item->next = ft_lstnewlink(f(lst->content), lst->content_size);
			item = item->next;
		}
		lst = lst->next;
	}
	return (root);
}
