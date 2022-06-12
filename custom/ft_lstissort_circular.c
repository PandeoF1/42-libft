/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstissort_circular.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:04 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:09 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** detects if a list is sorted in a circular mode, ex:
** b c d e f a a : is sorted
*/

int	ft_lstissort_circular(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	t_list		*first;
	t_list		*last;

	if (!lst)
		return (1);
	first = lst;
	while ((lst->next) && (cmp(lst, lst->next) <= 0))
		lst = lst->next;
	lst = lst->next;
	if (!lst)
		return (1);
	last = lst;
	while ((lst) && (lst->next))
	{
		if (cmp(lst, lst->next) > 0)
			return (0);
		last = lst;
		lst = lst->next;
	}
	if (cmp(first, last) > 0)
		return (0);
	else
		return (1);
}
