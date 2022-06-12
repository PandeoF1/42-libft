/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:14:05 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 03:16:31 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

float	ft_atof(const char *str)
{
	float	res;
	char	*c;

	c = (char *)str;
	while (*c && *c != '.')
		c++;
	if (*c == '.')
		c++;
	res = (float)ft_atoi(c) / pow(10, ft_strlen(c));
	if ((float)ft_atoi(str) + (*str == '-'))
		return (-res);
	return (res);
}
