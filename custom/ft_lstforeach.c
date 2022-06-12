/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:47 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:03 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_lstforeach(t_list *lst, void *userdata,
	void (*f)(void *, size_t, void *))
{
	while (lst)
	{
		f(userdata, lst->content_size, lst->content);
		lst = lst->next;
	}
	return (userdata);
}
