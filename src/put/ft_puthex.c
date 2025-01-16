/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/16 20:27:00 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/16 20:43:00 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_hex(unsigned long int arg, const char c)
{
	int	i;
	int	len;

	len = 0;
	i = arg % 16;
	if (arg >= 16)
		len += ft_hex(arg / 16, c);
	if (i < 10)
		i += 48;
	else
	{
		if (c == 'X')
			i += 55;
		else
			i += 87;
	}
	len += write(1, &i, 1);
	return (len);
}

int	ft_puthex(va_list arg, const char c)
{
	unsigned int	hex;

	hex = va_arg(arg, unsigned int);
	return (ft_hex(hex, c));
}
