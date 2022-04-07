/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstunlink.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:42:03 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:57:35 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** this function just unlink item from lst, return 1 if the item was found
** otherwise 0
*/

int	ft_lstunlink(t_list **lst, t_list *item)
{
	t_list	*x;

	x = *lst;
	if (!x)
		return (0);
	if (x == item)
	{
		*lst = (*lst)->next;
		return (1);
	}
	while (x->next)
	{
		if (x->next == item)
		{
			x->next = x->next->next;
			return (1);
		}
		x = x->next;
	}
	return (0);
}
