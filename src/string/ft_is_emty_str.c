/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_emty_str.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/03 15:18:10 by mahkilic      #+#    #+#                 */
/*   Updated: 2026/02/03 15:18:10 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_is_emty_str(char *str)
{
	int	i;

	if (!str)
		return (true);
	i = 0;
	while (str[i])
	{
		if (!ft_isspace((unsigned char)str[i]))
			return (false);
		i++;
	}
	return (true);
}
