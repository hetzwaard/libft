/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:35:15 by mahkilic          #+#    #+#             */
/*   Updated: 2024/10/11 18:16:55 by mahkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*clean;

	clean = s;
	while (n != 0)
	{
		*clean++ = 0;
		n--;
	}
}

// int main()
// {
//     char buffer[16] = "Helloooo";

//     ft_bzero(buffer, 5);

//     printf("%d\n", buffer[0]);

//     return 0;
// }