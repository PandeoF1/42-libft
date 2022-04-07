/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:28 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:19 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*x;
	t_list	*result;
	t_list	*rlast;

	if (!lst)
		ft_crash();
	result = 0;
	rlast = 0;
	x = lst;
	while (x)
	{
		rlast = ft_lstpush_back(&rlast, f(x));
		if (!result)
			result = rlast;
		x = x->next;
	}
	return (result);
}
