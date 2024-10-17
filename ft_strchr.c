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
	unsigned int	i;

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

// int main ()  
// {  
//     const char str[] = "Program using strchr";  
//     const char ch = 'm';
//     char *ptr;   
//     printf (" Original string is: %s \n", str);  
//     ptr = ft_strchr( str, ch);  
//     printf (" The first occurrence of the '%c' in '%s' string
//  is: '%s' ", ch, str, ptr);  
//     return 0;  
// }  
