/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:09:19 by tnard             #+#    #+#             */
/*   Updated: 2021/11/03 16:58:01 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		while (n < 0)
		{
			n *= 10;
			i++;
		}
	}
	else if (n > 0)
	{
		while (n > 0)
		{
			n *= 10;
			i++;
		}
	}
	return (i);
}

static void	ft_strreverse(char *str)
{
	int		length;
	int		i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		if (str[i] == '-')
		{	
			i++;
			length++;
		}
		else
		{
			tmp = str[i];
			str[i] = str[length - i - 1];
			str[length - i - 1] = tmp;
			i++;
		}
	}
}

char	*ft_itoa(int n) // a faire
{
	int		i;
	int		tmp;
	char	*ptr;

	i = 0;
	tmp = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc(sizeof(char) * ft_int_len(n) + 1);
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		tmp = n * -1;
		ptr[i++] = '-';
	}
	while (tmp > 0)
	{
		ptr[i++] = (tmp % 10) + 48;
		tmp /= 10;
	}
	ft_strreverse(ptr);
	ptr[i + 1] = '\0';
	return (ptr);
}
