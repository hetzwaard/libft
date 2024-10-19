/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/18 20:19:47 by mahkilic      #+#    #+#                 */
/*   Updated: 2024/10/18 20:19:47 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*x;
	const unsigned char	*y;

	x = s1;
	y = s2;
	while (n && *x == *y)
	{
		x++;
		y++;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*x - *y);
}

//int	main(void)
//{
//	char s1[] = "domates";
//	char s2[] = "domates";

//	printf("%d\n", ft_memcmp(s1, s2, 6));
//	printf("%d\n", memcmp(s1, s2, 6));
//}