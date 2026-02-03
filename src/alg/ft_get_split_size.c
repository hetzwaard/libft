/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_split_size.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/03 15:18:10 by mahkilic      #+#    #+#                 */
/*   Updated: 2026/02/03 15:18:10 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_split_size(char **split)
{
	int	i;

	if (!split)
		return (0);
	i = 0;
	while (split[i])
		i++;
	return (i);
}
