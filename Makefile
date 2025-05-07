# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mahkilic <mahkilic@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2024/10/08 19:45:43 by mahkilic      #+#    #+#                  #
#    Updated: 2025/05/07 06:17:32 by mahkilic      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -I$(INCDIR)

# Directories
SRCDIR	=	src
OBJDIR	=	objects
INCDIR	=	include

# Source files
SRCS	=	$(SRCDIR)/alg/ft_free_arr.c \
			$(SRCDIR)/alg/ft_swap_long.c \
			$(SRCDIR)/ctype/ft_isalnum.c \
			$(SRCDIR)/ctype/ft_isalpha.c \
			$(SRCDIR)/ctype/ft_isascii.c \
			$(SRCDIR)/ctype/ft_isdigit.c \
			$(SRCDIR)/ctype/ft_isprint.c \
			$(SRCDIR)/ctype/ft_isspace.c \
			$(SRCDIR)/ctype/ft_tolower.c \
			$(SRCDIR)/ctype/ft_toupper.c \
			$(SRCDIR)/gnl/get_next_line.c \
			$(SRCDIR)/mem/ft_memchr.c \
			$(SRCDIR)/mem/ft_memcmp.c \
			$(SRCDIR)/mem/ft_memcpy.c \
			$(SRCDIR)/mem/ft_memmove.c \
			$(SRCDIR)/mem/ft_memset.c \
			$(SRCDIR)/put/ft_putchar_fd.c \
			$(SRCDIR)/put/ft_putchar.c \
			$(SRCDIR)/put/ft_putendl_fd.c \
			$(SRCDIR)/put/ft_puthex.c \
			$(SRCDIR)/put/ft_putnbr_fd.c \
			$(SRCDIR)/put/ft_putnbr.c \
			$(SRCDIR)/put/ft_putptr.c \
			$(SRCDIR)/put/ft_putstr_fd.c \
			$(SRCDIR)/put/ft_putstr.c \
			$(SRCDIR)/put/ft_putuns.c \
			$(SRCDIR)/stdio/ft_printf.c \
			$(SRCDIR)/stdlib/ft_atoi.c \
			$(SRCDIR)/stdlib/ft_atol.c \
			$(SRCDIR)/stdlib/ft_bzero.c \
			$(SRCDIR)/stdlib/ft_calloc.c \
			$(SRCDIR)/stdlib/ft_itoa.c \
			$(SRCDIR)/stdlib/ft_split_ps.c \
			$(SRCDIR)/stdlib/ft_split.c \
			$(SRCDIR)/string/ft_strchr_gnl.c \
			$(SRCDIR)/string/ft_strchr.c \
			$(SRCDIR)/string/ft_strdup.c \
			$(SRCDIR)/string/ft_striteri.c \
			$(SRCDIR)/string/ft_strjoin_gnl.c \
			$(SRCDIR)/string/ft_strjoin.c \
			$(SRCDIR)/string/ft_strlcat.c \
			$(SRCDIR)/string/ft_strlcpy.c \
			$(SRCDIR)/string/ft_strlen_gnl.c \
			$(SRCDIR)/string/ft_strlen.c \
			$(SRCDIR)/string/ft_strmapi.c \
			$(SRCDIR)/string/ft_strcmp.c \
			$(SRCDIR)/string/ft_strncmp.c \
			$(SRCDIR)/string/ft_strnstr.c \
			$(SRCDIR)/string/ft_strrchr.c \
			$(SRCDIR)/string/ft_strtrim.c \
			$(SRCDIR)/string/ft_substr_gnl.c \
			$(SRCDIR)/string/ft_substr.c

# Object files
OBJS	=	$(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Name
NAME	=	libft.a

# Colors for output
GREEN		=	\033[0;32m
ORANGE	=	\033[38;5;214m
GRAY		=	\033[0;90m

# Default target
all: $(NAME)

# Build the library
$(NAME): $(OBJS)
	@echo "$(GREEN)Libft has been created."
	@ar rcs $@ $^

# Compile object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GRAY)Compiled: $<"

# Clean object files
clean:
	@echo "$(ORANGE)Objects has been removed."
	@rm -rf $(OBJDIR)

# Fully clean everything
fclean: clean
	@echo "$(ORANGE)Libft has been removed."
	@rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
