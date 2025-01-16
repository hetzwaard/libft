/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putuns.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/16 20:25:46 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/16 20:43:13 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_putuns(unsigned int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	if (nb >= 10)
		i += ft_putuns(nb / 10);
	n = nb % 10 + 48;
	i += write(1, &n, 1);
	return (i);
}
