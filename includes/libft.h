/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:02:04 by tnard             #+#    #+#             */
/*   Updated: 2022/04/07 07:59:01 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <math.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s,	size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));*/

char	**ft_lststrmap(t_list *lst);
char	**ft_lststrtotab(t_list *lst);
void	ft_lstremove(t_list **item, t_list **root, void (*f)(void *));
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **ast, void (*del)(void *, size_t));
void	ft_lstinsert(t_list **parent, t_list *item);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	ft_lstsort(t_list **lst, int (*cmp)(t_list *, t_list *));
void	ft_lstpush_sort(t_list **lst, t_list *item,
			int (*cmp)(t_list *, t_list *));
void	*ft_lstforeach(t_list *lst, void *userdata,
			void (*f)(void *, size_t, void *));
void	*ft_lstforeachi(t_list *lst, void *userdata,
			void (*f)(size_t, void *, size_t, void *));
void	ft_lstforeachi_suffix(t_list *lst, void (*f)(size_t, size_t, void *));
void	ft_lstforeach_suffix(t_list *lst, void (*f)(void *));
void	ft_lstpulverisator(void *x, size_t size);
int		ft_lststrcmp(t_list *a, t_list *b);
t_list	*ft_lstnew(const void *content, size_t content_size);
t_list	*ft_lstnewstr(const char *str);
t_list	*ft_lstnewlink(void *content, size_t content_size);
t_list	*ft_lstadd(t_list **alst, t_list *new);
t_list	*ft_lstparent(t_list *lst, t_list *item);
t_list	*ft_lstswap(t_list *root, t_list *a, t_list *b);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstpush_back(t_list **lst, t_list *item);
t_list	*ft_lstpush_front(t_list **lst, t_list *item);
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list	*ft_lstdup(t_list *lst, void *(*f)(void *));
t_list	*ft_lstndup(t_list *lst, size_t n, void *(*f)(void *));
t_list	*ft_lstat(t_list *lst, int p);
t_list	*ft_lstdupsort(t_list *lst, int (*cmp)(t_list *, t_list *));
t_list	*ft_lstmin(t_list *lst, int (*cmp)(t_list *, t_list *));
t_list	*ft_lstnewi(const void *content, const size_t content_size);
size_t	ft_lststrlen(t_list *lst);
size_t	ft_lstsize(t_list *lst);
int		ft_lstissort(t_list *lst, int (*cmp)(t_list *, t_list *));
int		ft_lstunlink(t_list **lst, t_list *item);
int		ft_lstissort_circular(t_list *lst, int (*cmp)(t_list *, t_list *));
t_list	*ft_lstsearch(t_list *lst, t_list *item,
			int (*cmp)(t_list *, t_list *));
void	**ft_lstqsort(t_list *lst, int (*cmp)(void *, void *));
void	**ft_lsttotab_size(t_list *lst, const size_t size);
void	**ft_lsttotab(t_list *lst);
void	ft_lsttotab_load(t_list *lst, void **tab, size_t n);
void	ft_lsttotab_loadrev(t_list *lst, void **tab, size_t n);
void	ft_crash(void);
void	ft_quicksort(void **tab, size_t start, size_t end,
			int (*cmp)(void *, void *));
int		ft_strcmp(const char *s1, const char *s2);
// Custom

void	*ft_memdup(const void *src, size_t size);
float	ft_atof(const char *str);
float	ft_abs(float nb);
float	ft_average(int nb1, int nb2, float p);
void	ft_error(const char *str);
int		ft_find_char(char *str, char c);
int		ft_intlen(long int nb);
float	ft_max(float a, float b);
void	ft_memdel(void **ap);
float	ft_min(float a, float b);
int		ft_mod(int a, int b);
int		ft_occur(const char *str, const char c);
int		ft_pow(float nb, int pow);
void	ft_putendl(char const *s);
int		ft_free_tab_char(char ***split);
void	ft_free_tab_int(int **tab, int size);
int		ft_splitlen(char **split);
float	ft_sq(float nb);
int		ft_sqrt(int nb);
void	ft_strdel(char **as);
char	*ft_strnjoin(char *s1, char *s2, int n);
char	*ft_strnjoinf(char *s1, char *s2, int n);
void	ft_swap(int *a, int *b);
void	ft_putchar(char c);
void	ft_sort_tab(int *tab, int size);
void	ft_rev_sort_tab(int *tab, int size);
char	*ft_strcapitalize(char *str);

#endif