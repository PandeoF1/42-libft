/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:10 by tnard             #+#    #+#             */
/*   Updated: 2021/11/03 07:45:00 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l2;

	l2 = strlen(needle);
	if (!l2)
		return ((char *)haystack);
	while (len-- >= l2)
	{
		if (!ft_memcmp(haystack, needle, l2))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
