/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstparent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:53 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:44 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstparent(t_list *lst, t_list *item)
{
	while (lst)
	{
		if (item == lst->next)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
