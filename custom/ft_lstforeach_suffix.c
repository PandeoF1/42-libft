/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeach_suffix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:43 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:00 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstforeach_suffix(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		if (lst->next)
			ft_lstforeach_suffix(lst->next, f);
		f(lst->content);
	}
}
