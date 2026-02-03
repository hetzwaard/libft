/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_matrix.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/03 15:13:10 by mahkilic      #+#    #+#                 */
/*   Updated: 2026/02/03 15:13:10 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_matrix(char **res)
{
	int	i;

	if (!res)
		return ;
	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}
