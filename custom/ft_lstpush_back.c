/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:00 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:48 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstpush_back(t_list **lst, t_list *item)
{
	if (!*lst)
		*lst = item;
	else
		ft_lstlast(*lst)->next = item;
	return (item);
}
