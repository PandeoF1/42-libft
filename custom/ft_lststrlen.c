/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:41 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:57:12 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_lststrlen(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size += ft_strlen((char *)lst->content);
		lst = lst->next;
	}
	return (size);
}
