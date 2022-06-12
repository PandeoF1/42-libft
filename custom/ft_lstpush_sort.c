/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:12 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:51 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstpush_sort(t_list **lst, t_list *item,
	int (*cmp)(t_list *, t_list *))
{
	t_list	*x;
	t_list	*last;

	if (!*lst)
		*lst = item;
	else
	{
		x = *lst;
		last = 0;
		while ((x) && ((*cmp)(x, item) < 0))
		{
			last = x;
			x = x->next;
		}
		if (!last)
			ft_lstadd(lst, item);
		else
			ft_lstinsert(&last, item);
	}
}
