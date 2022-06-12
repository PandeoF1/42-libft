/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:55 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:57:16 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstswap(t_list *root, t_list *a, t_list *b)
{
	t_list	*bnext;
	t_list	*parent;

	parent = ft_lstparent(root, a);
	if (parent)
		parent->next = b;
	else
		root = b;
	bnext = b->next;
	b->next = a;
	a->next = bnext;
	return (root);
}
