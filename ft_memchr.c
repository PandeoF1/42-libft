/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:56 by tnard             #+#    #+#             */
/*   Updated: 2021/11/02 15:21:06 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memchr(const void *s, int c, size_t n)
{
	const char	*p_ptr = (const char *)s;
	size_t		count;

	count = 0;
	while (count < n)
	{
		if (p_ptr[count] == c)
			return ((void *)&p_ptr[count]);
		count++;
	}
	return (NULL);
}
