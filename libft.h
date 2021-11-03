/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:02:04 by tnard             #+#    #+#             */
/*   Updated: 2021/11/03 08:03:08 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

static int		ft_atoi(const char *str);
static void		ft_bzero(void *s,	size_t n);
static int		ft_isalnum(int c);
static int		ft_isalpha(int c);
static int		ft_isascii(int c);
static int		ft_isdigit(int c);
static int		ft_isprint(int c);
static int		ft_memchr(const void *s, int c, size_t n);
static int		ft_memcmp(const void *s1, const void *s2, size_t n);
static void		*ft_memcpy(void *dst, void *src, size_t n);
static void		*ft_memmove(void *dst, const void *src, size_t len);
static void		ft_memset(void *b, int c, size_t len);
static char		*ft_strchr(const char *s, int c);
static size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
static size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
static size_t	ft_strlen(const char *str);
static int		ft_strncmp(const char *s1, const char *s2, size_t n);
static char		*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
static char		strrchr(const char *s, int c);
static int		ft_tolower(int c);
static int		ft_toupper(int c);

#endif