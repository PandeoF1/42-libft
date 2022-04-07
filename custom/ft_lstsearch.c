/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:24 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:59 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** search for item in the list, based on the cmp comparaison
** returns the first matched item, NULL if item is not found
*/

t_list	*ft_lstsearch(t_list *lst, t_list *item,
	int (*cmp)(t_list *, t_list *))
{
	while (lst)
	{
		if (cmp(lst, item) == 0)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
