/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:34 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:57:03 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstsort(t_list **lst, int (*cmp)(t_list *, t_list *))
{
	t_list	*x;

	if (!*lst)
		return ;
	x = *lst;
	while (x->next)
	{
		if (cmp(x, x->next) > 0)
		{
			*lst = ft_lstswap(*lst, x, x->next);
			x = *lst;
		}
		else
			x = x->next;
	}
}
