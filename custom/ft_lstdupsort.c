/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdupsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:38 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:55:57 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** return a new list duped from the first one, pointers are not copied, just
** the address are copied, the user must send a valid compare function
*/

t_list	*ft_lstdupsort(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	t_list		*sorted;
	t_list		*cpy;

	sorted = NULL;
	while (lst)
	{
		cpy = ft_memdup(lst, sizeof(t_list));
		if (!cpy)
		{
			ft_lstdel(&lst, NULL);
			return (NULL);
		}
		cpy->next = NULL;
		ft_lstpush_sort(&sorted, cpy, cmp);
		lst = lst->next;
	}
	return (sorted);
}
