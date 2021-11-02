/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:05 by tnard             #+#    #+#             */
/*   Updated: 2021/11/02 17:03:18 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	destlen = 0;
	while (dest[destlen])
		destlen++;
	i = 0;
	while (src[i] && destlen + i < (size - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	if (i < size)
		dest[destlen + i] = '\0';
	if (destlen > size)
		return (srclen + size);
	return (destlen + srclen);
}
