/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:36:20 by mahkilic          #+#    #+#             */
/*   Updated: 2024/10/14 11:26:28 by mahkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src && n > 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

// int main(void)
// {
//     char src[] = "Hello";
//     char dest[6];

//     ft_memcpy(dest, src, 5);
//     printf("%s\n", dest);

//     if (ft_memcpy(NULL, NULL, 3) == NULL)
//         printf("+respect\n");
//     else
//         printf("-respect\n");

//     return 0;
// }