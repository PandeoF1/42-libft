/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 07:42:30 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:55:32 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memdup(const void *src, size_t size)
{
	unsigned char	*x;

	x = (unsigned char *)malloc(size);
	if (!x)
		return (NULL);
	return (ft_memcpy(x, src, size));
}
