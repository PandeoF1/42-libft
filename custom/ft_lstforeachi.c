/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeachi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:56 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:07 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>

void	*ft_lstforeachi(t_list *lst, void *userdata,
	void (*f)(size_t, void *, size_t, void *))
{
	size_t			p;

	p = 0;
	while (lst)
	{
		f(p++, userdata, lst->content_size, lst->content);
		lst = lst->next;
	}
	return (userdata);
}
