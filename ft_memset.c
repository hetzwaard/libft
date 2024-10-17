/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:35:31 by mahkilic          #+#    #+#             */
/*   Updated: 2024/10/15 17:48:03 by mahkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*memory_block;

	i = 0;
	memory_block = (char *)s;
	while (i < n)
	{
		memory_block[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
//     char memory_block[] = "Mahmut";
//     ft_memset(memory_block, 'a', 4);
//     printf("%s", memory_block);
// }