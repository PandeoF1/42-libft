/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:20 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:58 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	ft_lstremove(t_list **item, t_list **root, void (*f)(void *))
{
	t_list	*parent;
	t_list	*dent;

	if (*item)
	{
		parent = ft_lstparent(*root, *item);
		if (parent)
			parent->next = (*item)->next;
		if (f)
			f((*item)->content);
		if (*item == *root)
		{
			dent = *item;
			*root = (*item)->next;
		}
		else
		{
			dent = *item;
			*item = 0;
		}
		free(dent);
	}
}
