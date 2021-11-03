/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:11 by tnard             #+#    #+#             */
/*   Updated: 2021/11/03 07:51:25 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	if (*s == (char)c)
		last = s;
	while (s++)
		if (*s == (char)c)
			last = s;
	return ((char *)last);
}
