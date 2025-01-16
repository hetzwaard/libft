# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mahkilic <mahkilic@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2024/10/08 19:45:43 by mahkilic      #+#    #+#                  #
#    Updated: 2025/01/16 21:23:44 by mahkilic      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = src
INC_DIR = include

SRCS		=	$(SRC_DIR)/alg/ft_free_arr.c\
				$(SRC_DIR)/alg/ft_swap_long.c\
				$(SRC_DIR)/ctype/ft_isalnum.c\
				$(SRC_DIR)/ctype/ft_isalpha.c\
				$(SRC_DIR)/ctype/ft_isascii.c\
				$(SRC_DIR)/ctype/ft_isdigit.c\
				$(SRC_DIR)/ctype/ft_isprint.c\
				$(SRC_DIR)/ctype/ft_isspace.c\
				$(SRC_DIR)/ctype/ft_tolower.c\
				$(SRC_DIR)/ctype/ft_toupper.c\
				$(SRC_DIR)/gnl/get_next_line.c\
				$(SRC_DIR)/mem/ft_memchr.c\
				$(SRC_DIR)/mem/ft_memcmp.c\
				$(SRC_DIR)/mem/ft_memcpy.c\
				$(SRC_DIR)/mem/ft_memmove.c\
				$(SRC_DIR)/mem/ft_memset.c\
				$(SRC_DIR)/put/ft_putchar_fd.c\
				$(SRC_DIR)/put/ft_putchar.c\
				$(SRC_DIR)/put/ft_putendl_fd.c\
				$(SRC_DIR)/put/ft_puthex.c\
				$(SRC_DIR)/put/ft_putnbr_fd.c\
				$(SRC_DIR)/put/ft_putnbr.c\
				$(SRC_DIR)/put/ft_putptr.c\
				$(SRC_DIR)/put/ft_putstr_fd.c\
				$(SRC_DIR)/put/ft_putstr.c\
				$(SRC_DIR)/put/ft_putuns.c\
				$(SRC_DIR)/stdio/ft_printf.c\
				$(SRC_DIR)/stdlib/ft_atoi.c\
				$(SRC_DIR)/stdlib/ft_atol.c\
				$(SRC_DIR)/stdlib/ft_bzero.c\
				$(SRC_DIR)/stdlib/ft_calloc.c\
				$(SRC_DIR)/stdlib/ft_itoa.c\
				$(SRC_DIR)/stdlib/ft_split_ps.c\
				$(SRC_DIR)/stdlib/ft_split.c\
				$(SRC_DIR)/string/ft_strchr_gnl.c\
				$(SRC_DIR)/string/ft_strchr.c\
				$(SRC_DIR)/string/ft_strdup.c\
				$(SRC_DIR)/string/ft_striteri.c\
				$(SRC_DIR)/string/ft_strjoin_gnl.c\
				$(SRC_DIR)/string/ft_strjoin.c\
				$(SRC_DIR)/string/ft_strlcat.c\
				$(SRC_DIR)/string/ft_strlcpy.c\
				$(SRC_DIR)/string/ft_strlen_gnl.c\
				$(SRC_DIR)/string/ft_strlen.c\
				$(SRC_DIR)/string/ft_strmapi.c\
				$(SRC_DIR)/string/ft_strncmp.c\
				$(SRC_DIR)/string/ft_strnstr.c\
				$(SRC_DIR)/string/ft_strrchr.c\
				$(SRC_DIR)/string/ft_strtrim.c\
				$(SRC_DIR)/string/ft_substr_gnl.c\
				$(SRC_DIR)/string/ft_substr.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -fPIE -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
