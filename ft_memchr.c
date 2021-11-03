/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:56 by tnard             #+#    #+#             */
/*   Updated: 2021/11/03 09:02:52 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ss;
	size_t		count;

	count = 0;
	ss = (const char *)s;
	while (count < n)
	{
		if (ss[count] == c)
			return ((void *)&ss[count]);
		count++;
	}
	return (NULL);
}
