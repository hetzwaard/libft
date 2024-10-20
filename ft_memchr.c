/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/18 16:56:42 by mahkilic      #+#    #+#                 */
/*   Updated: 2024/10/18 18:08:40 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//    char *str = ft_memchr("sf", 'n', 5);
//    char *str1 = memchr("bonjourno", 'n', 2);
//	//char *pos = ft_memchr(data, 'A', 10);
//	//char *posm = memchr(data, 'A', 10);

//	printf("%s\n", str);
//	printf("%s\n", str1);
//	//printf("%s\n", posm);
//	return (0);
//}
