/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeachi_suffix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:52 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:05 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>

static void	foreachi_suffix(t_list *lst, size_t p,
		void (*f)(size_t, size_t, void *))
{
	if (lst->next)
		foreachi_suffix(lst->next, p - 1, f);
	f(p, lst->content_size, lst->content);
}

void	ft_lstforeachi_suffix(t_list *lst,
		void (*f)(size_t, size_t, void *))
{
	foreachi_suffix(lst, ft_lstsize(lst) - 1, f);
}
