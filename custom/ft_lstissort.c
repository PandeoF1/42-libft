/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstissort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:08 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:14 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstissort(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	if (!lst)
		return (1);
	while (lst->next)
	{
		if (cmp(lst, lst->next) > 0)
			return (0);
		lst = lst->next;
	}
	return (1);
}
