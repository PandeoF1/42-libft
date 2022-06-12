/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:45 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:57:13 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	**ft_lststrmap(t_list *lst)
{
	char	**tab;
	size_t	p;

	tab = (char **)malloc(sizeof(char *) * (ft_lstsize(lst) + 1));
	if (!tab)
		return (NULL);
	p = 0;
	while (lst)
	{
		tab[p++] = (char *)lst->content;
		lst = lst->next;
	}
	tab[p] = NULL;
	return (tab);
}
