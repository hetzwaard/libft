/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:11:55 by mahkilic          #+#    #+#             */
/*   Updated: 2024/10/15 15:39:47 by mahkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (0);
}

// int main(void)
// {
//     const char *str = "I Love Codam!";
//     char aranan_karakter = 'C';
//     char *sonuc;
//     sonuc = ft_strchr(str, aranan_karakter);
//     if (sonuc != NULL)
//         printf("'%c' %s\n", aranan_karakter, sonuc);
//     else
//         printf("'%c' \n", aranan_karakter);
//     return 0;
// }