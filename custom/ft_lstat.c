/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:39:00 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:55:45 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** return the item at positon "p" in the list
** if the positon is not in the list NULL is retuned
*/

t_list	*ft_lstat(t_list *lst, int p)
{
	while (lst)
	{
		if (!p--)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
