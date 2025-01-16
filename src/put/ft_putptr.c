/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/16 20:26:25 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/16 20:43:06 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_putptr(va_list arg)
{
	unsigned long int	p;

	p = va_arg(arg, unsigned long int);
	if (p == 0)
		return (ft_putstr("(nil)"));
	return (write(1, "0x", 2) + ft_hex(p, 'p'));
}
