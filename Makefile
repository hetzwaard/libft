# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 19:45:43 by mahkilic          #+#    #+#              #
#    Updated: 2024/10/14 19:06:29 by mahkilic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c  ft_isascii.c  ft_isalpha.c   ft_memcpy.c  \
					ft_bzero.c  ft_memmove.c  ft_strlen.c  ft_isdigit.c  ft_memset.c  \
					ft_strlcpy.c  ft_strlcat.c  ft_toupper.c  ft_tolower.c  ft_strchr.c
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus