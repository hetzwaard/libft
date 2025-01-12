/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap_long.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/12 00:20:50 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/12 00:24:48 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_long(long *a, long *b)
{
	long	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
