/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:16:12 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:17:48 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_sort_tab(int *tab, int size)
{
	int		p;
	int		tmp;

	p = 0;
	while (p < size - 1)
	{
		if (tab[p] > tab[p + 1])
		{
			tmp = tab[p];
			tab[p] = tab[p + 1];
			tab[p + 1] = tmp;
			p = 0;
		}
		else
			p++;
	}
}

void	ft_rev_sort_tab(int *tab, int size)
{
	int		p;
	int		tmp;

	p = 0;
	while (p < size - 1)
	{
		if (tab[p] < tab[p + 1])
		{
			tmp = tab[p];
			tab[p] = tab[p + 1];
			tab[p + 1] = tmp;
			p = 0;
		}
		else
			p++;
	}
}
