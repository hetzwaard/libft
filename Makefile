# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mahkilic <mahkilic@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2024/10/08 19:45:43 by mahkilic      #+#    #+#                  #
#    Updated: 2024/10/18 17:57:01 by mahkilic      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c  ft_isascii.c  ft_isalpha.c   ft_memcpy.c  \
					ft_bzero.c  ft_memmove.c  ft_strlen.c  ft_isdigit.c  ft_memset.c  \
					ft_strlcpy.c  ft_strlcat.c  ft_toupper.c  ft_tolower.c  ft_strchr.c  \
					ft_strrchr.c  ft_strncmp.c  ft_memchr.c  ft_memcmp.c  ft_strnstr.c  \
					ft_atoi.c  ft_calloc.c  ft_strdup.c  ft_putchar_fd.c  ft_putstr_fd.c  \
					ft_putendl_fd.c  ft_putnbr_fd.c  ft_substr.c  ft_strjoin.c  ft_strmapi.c  \
					ft_striteri.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re