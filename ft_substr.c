/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:06:31 by tnard             #+#    #+#             */
/*   Updated: 2021/11/03 10:56:41 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	a;
	char	*ptr;

	i = -1;
	a = 0;
	ptr = malloc(sizeof(char *) * (1 + len));
	if (!ptr)
		return (NULL);
	while (s[++i])
		if (i >= start && a < len)
			ptr[a++] = s[i];
	ptr[a] = '\0';
	return (ptr);
}
