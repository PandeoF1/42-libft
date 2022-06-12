/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstqsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:16 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:56:55 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** convert a unsorted chained list into a sorted void** array
** using a quicksort algorythm method.
** the returned array will have a NULL at the end.
*/

void	**ft_lstqsort(t_list *lst, int (*cmp)(void *, void *))
{
	const size_t		size = ft_lstsize(lst);
	void				**tab;

	tab = ft_lsttotab_size(lst, size);
	if (!tab)
		return (NULL);
	ft_quicksort(tab, 0, size - 1, cmp);
	return (tab);
}
