/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_occu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:19:07 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 03:19:11 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_occur(const char *str, const char c)
{
	int	nb;

	nb = 0;
	if (*str == c)
		nb++;
	while (*++str)
		if (*str == c)
			nb++;
	return (nb);
}
