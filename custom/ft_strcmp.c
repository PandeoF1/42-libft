/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:44:30 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:59:59 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int		p;

	p = 0;
	while (((unsigned char)s1[p])
		&& ((unsigned char)s1[p] == (unsigned char)s2[p]))
		p++;
	return ((unsigned char)s1[p] - (unsigned char)s2[p]);
}
