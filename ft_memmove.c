/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:01 by tnard             #+#    #+#             */
/*   Updated: 2021/11/02 16:23:13 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if ((unsigned char *)dst < (unsigned const char *)src)
		return (ft_memcpy(dst, src, len));
	else
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned const char *)src)[len];
	return (dst);
}
