/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 13:36:20 by mahkilic      #+#    #+#                 */
/*   Updated: 2024/10/16 14:43:26 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converting void to char (char *) dest;
// if dest == 0 is error check
// a loop copies one by one

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	int		i;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (!dest && !src && n > 0)
		return (0);
	while (n--)
	{
		*char_dest++ = *char_src++;
	}
	return (dest);
}

// size_t	ft_strlen(const char *s)

// {
// 	size_t	i;

// 	i = 0;
// 	while (*s != '\0')
// 	{
// 		i++;
// 		s++;
// 	}
// 	return (i);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	unsigned char	*d;
// 	unsigned char	*s;

// 	if (!dest && !src && n > 0)
// 		return (NULL);
// 	d = (unsigned char *)dest;
// 	s = (unsigned char *)src;
// 	while (n--)
// 		*d++ = *s++;
// 	return (dest);
// }

// int main(void)
// {
// 	char src[] = "copy this";
// 	char dest[100];

// 	char *dest_ptr = ft_memcpy(dest, src, ft_strlen(src));

// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);

// 	printf("dest_ptr: %p\n", dest_ptr);
// 	printf("dest: %p\n", dest);

//     return 0;
// }