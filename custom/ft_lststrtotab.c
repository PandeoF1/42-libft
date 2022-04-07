/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrtotab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:41:51 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:59:43 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	**ft_lststrtotab(t_list *lst)
{
	size_t	pos;
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_lstsize(lst) + 1));
	if (!tab)
		return (NULL);
	pos = 0;
	while (lst)
	{
		tab[pos++] = (char *)lst->content;
		lst = lst->next;
	}
	tab[pos] = NULL;
	return (tab);
}
