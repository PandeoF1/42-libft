# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 12:16:46 by tnard             #+#    #+#              #
#    Updated: 2022/04/07 08:01:37 by tnard            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

BLU			= \033[0;34m
GRN			= \033[0;32m
RED			= \033[0;31m
RST			= \033[0m
END			= \e[0m

SRCS    =	default/ft_putnbr_fd.c default/ft_putendl_fd.c default/ft_putchar_fd.c default/ft_putstr_fd.c \
			default/ft_striteri.c default/ft_strmapi.c default/ft_itoa.c default/ft_split.c default/ft_substr.c\
			default/ft_strtrim.c default/ft_strjoin.c default/ft_atoi.c default/ft_bzero.c default/ft_isalnum.c\
			default/ft_isalpha.c default/ft_isascii.c default/ft_isdigit.c default/ft_isprint.c \
			default/ft_memchr.c default/ft_memcmp.c default/ft_memcpy.c default/ft_memmove.c default/ft_memset.c \
			default/ft_strchr.c default/ft_strlcat.c default/ft_strlcpy.c default/ft_strlen.c default/ft_strncmp.c \
			default/ft_strnstr.c default/ft_strrchr.c default/ft_tolower.c default/ft_toupper.c default/ft_strdup.c \
			default/ft_calloc.c custom/ft_putendl.c custom/ft_abs.c custom/ft_atof.c custom/ft_average.c custom/ft_error.c \
			custom/ft_find_char.c custom/ft_intlen.c custom/ft_max.c custom/ft_memdel.c custom/ft_min.c custom/ft_mod.c \
			custom/ft_nb_occu.c custom/ft_pow.c custom/ft_free_tab_int.c custom/ft_free_tab_char.c custom/ft_sq.c \
			custom/ft_sqrt.c custom/ft_strdel.c custom/ft_strnjoin.c custom/ft_swap.c custom/ft_splitlen.c \
			custom/ft_putchar.c custom/ft_strcapitalize.c custom/ft_sort_tab.c custom/ft_lstnew.c custom/ft_lstnewstr.c \
			custom/ft_lstnewlink.c custom/ft_lstpush_sort.c custom/ft_lstpush_back.c custom/ft_lstpush_front.c \
			custom/ft_lstdelone.c custom/ft_lstdel.c custom/ft_lstinsert.c custom/ft_lstadd.c custom/ft_lstiter.c \
			custom/ft_lstlast.c custom/ft_lstmap.c custom/ft_lstparent.c custom/ft_lstswap.c custom/ft_lstsort.c \
			custom/ft_lststrlen.c custom/ft_lstsize.c custom/ft_lstremove.c custom/ft_lstforeach.c custom/ft_lstforeachi.c \
			custom/ft_lstforeach_suffix.c custom/ft_lstforeachi_suffix.c custom/ft_lstpulverisator.c custom/ft_lststrmap.c \
			custom/ft_lststrcmp.c custom/ft_lstdup.c custom/ft_lststrtotab.c custom/ft_lstissort.c custom/ft_lstunlink.c \
			custom/ft_lstat.c custom/ft_lstdupsort.c custom/ft_lstmin.c custom/ft_lstissort_circular.c \
			custom/ft_lstsearch.c custom/ft_lstqsort.c custom/ft_lsttotab.c custom/ft_crash.c custom/ft_memdup.c \
			custom/ft_strcmp.c
NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror


$(OBJS_DIR)%.o : %.c includes/libft.h
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@printf	"\033[2K\r${BLU}[BUILD - $(NAME)]${RST} '$<' $(END)"

$(NAME): file $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED) >/dev/null 2>&1 &
	@printf "\033[2K\r\033[0;32m[END]\033[0m $(NAME)$(END)"

all: $(NAME)

file:
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)/default
	@mkdir -p $(OBJS_DIR)/custom

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re