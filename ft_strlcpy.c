/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:52:30 by mahkilic          #+#    #+#             */
/*   Updated: 2024/10/14 13:03:02 by mahkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}

// int	main()
// {
// 	char src[] = "Dunya!";
// 	char dst[] = "Merhaba";
// 	printf("%d | %s", ft_strlcpy(dst, src, 10), dst);
// }