# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/01 12:18:47 by hugsbord          #+#    #+#              #
#    Updated: 2022/02/08 15:10:20 by hugsbord         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADERS = libft.h

SRC =	ft_memset.c				\
		ft_bzero.c				\
		ft_memcpy.c				\
		ft_memccpy.c			\
		ft_memmove.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_strlen.c				\
		ft_isalpha.c			\
		ft_isdigit.c			\
		ft_isalnum.c 			\
		ft_isascii.c			\
		ft_isprint.c			\
		ft_toupper.c			\
		ft_tolower.c			\
		ft_strchr.c				\
		ft_strrchr.c			\
		ft_strncmp.c			\
		ft_strlcpy.c 			\
		ft_strlcat.c			\
		ft_strnstr.c			\
		ft_atoi.c				\
		ft_calloc.c				\
		ft_strdup.c				\
		ft_substr.c				\
		ft_strjoin.c			\
		ft_strtrim.c			\
		ft_split.c				\
		ft_strmapi.c			\
		ft_putchar_fd.c			\
		ft_putstr_fd.c			\
		ft_putnbr_fd.c			\
		ft_putendl_fd.c			\
		ft_swap.c				\
		ft_isspace.c			\
		ft_islower.c			\
		ft_isupper.c			\
		ft_strrev.c				\
		ft_putnstr_fd.c			\
		ft_lstlast.c			\
		ft_lstadd_back.c		\
		ft_lstadd_front.c		\
		ft_lstclear.c			\
		ft_lstdelone.c			\
		ft_lstiter.c			\
		ft_lstmap.c				\
		ft_lstnew.c				\
		ft_lstsize.c			\
		ft_strtok.c				\
		ft_itoa.c				\
		ft_print_hex.c			\
		ft_atoi_base.c			\
		ft_itoa_base.c			\
		ft_abs.c				\
		ft_sqrt.c				\
		ft_pow.c				\
		ft_isprime.c			\
		ft_fibonacci.c			\
		ft_count_words.c		\
		ft_arraylen.c			\
		ft_free_array.c			\
		ft_tablen.c				\
		ft_split_whitespaces.c	\
		ft_putchar.c			\
		ft_putstr.c				\
		ft_putnbr.c				\
		ft_putendl.c			\
		ft_strnequ.c			\
		ft_is_sort.c			\
		ft_memalloc.c			\
		ft_strstr.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strnew.c				\
		ft_strncat.c			\
		ft_strndup.c			\
		ft_strncpy.c			\
		ft_strmap.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME): $(HEADERS) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[92m$(NAME) created ...\033[0m"
	@ranlib $(NAME)
	@echo "\033[92m$(NAME) correctly indexed\033[0m"

bonus : $(OBJ) $(OBJ_B)
	@echo "Bonus creation :"
	@ar rc $(NAME) $(OBJ) $(OBJ_B)
	@echo "Done ..."
	@ranlib $(NAME)
	@echo "\033[92m$(NAME) with bonus correctly indexed\033[0m"

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_B)
	@echo "\033[91mOBJ (.o) removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[91m$(NAME) removed\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
