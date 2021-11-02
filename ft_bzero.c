/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:46 by tnard             #+#    #+#             */
/*   Updated: 2021/11/02 12:17:28 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s,	int n)
{
	int		i;
	char	*c;

	c = s;
	i = 0;
	while (i <= n)
	{
		c[i] = '\0';
	}
}
