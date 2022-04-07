/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:40:01 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:08 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstinsert(t_list **parent, t_list *item)
{
	if (!*parent)
		*parent = item;
	else
	{
		item->next = (*parent)->next;
		(*parent)->next = item;
	}
}
