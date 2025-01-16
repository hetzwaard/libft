/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr_gnl.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/16 20:37:17 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/16 20:44:14 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen_gnl(s))
	{
		res = malloc(sizeof(char) * (1));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen_gnl(s) - start < len)
		len = ft_strlen_gnl(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < ft_strlen_gnl(s) && i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
