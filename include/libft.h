/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/16 21:30:50 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/16 21:30:50 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// ALG
void		ft_free_arr(char **res);
void		ft_swap_long(long *a, long *b);

// CTYPE
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

// GNL
char		*get_next_line(int fd);

// MEM
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);

// PUT
void		ft_putchar_fd(char c, int fd);
int			ft_putchar(char c);
void		ft_putendl_fd(char *str, int fd);
int			ft_hex(unsigned long int arg, const char c);
int			ft_puthex(va_list arg, const char c);
void		ft_putnbr_fd(int n, int fd);
int			ft_putnbr(int nb);
int			ft_putptr(va_list arg);
void		ft_putstr_fd(char *str, int fd);
int			ft_putstr(const char *s);
int			ft_putuns(unsigned int nb);

// STDIO
int			ft_printf(const char *format, ...);

// STDLIB
int			ft_atoi(const char *nptr);
long		ft_atol(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_itoa(int n);
char		**ft_split_ps(char *s, char c);
char		**ft_split(char const *s, char c);

// STRING
char		*ft_strchr_gnl(char *s, int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin_gnl(char *s1, char *s2);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, unsigned int size);
size_t		ft_strlcpy(char *dst, const char *src, unsigned int size);
size_t		ft_strlen_gnl(char *s);
size_t		ft_strlen(const char *s);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr_gnl(char *s, unsigned int start, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
