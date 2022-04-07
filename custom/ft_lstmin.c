/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:33 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:21 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** return the lowest value item of a chained list
** to get the max value use a revert cmp function
** in case of 1 element list: the element is the lowest of the list so it will
** be returned
*/

t_list	*ft_lstmin(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	t_list	*min;

	min = lst;
	lst = lst->next;
	while (lst)
	{
		if (cmp(min, lst) > 0)
			min = lst;
		lst = lst->next;
	}
	return (min);
}
