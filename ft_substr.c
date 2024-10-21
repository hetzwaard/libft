/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 19:30:40 by mahkilic      #+#    #+#                 */
/*   Updated: 2024/10/21 19:30:40 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, 1);
	if (str == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

//int main(void)
//{
//	char *result = ft_substr("Merhaba, dünya!", 7, 6);
//	printf("%s\n", result); 

//	free(result);

//	return 0;
//}

//size_t	ft_strlen(const char *s)
//{
//	size_t	i;

//	i = 0;
//	while (*s != '\0')
//	{
//		i++;
//		s++;
//	}
//	return (i);
//}

//char	*ft_strdup(const char *s)
//{
//	char	*ns;
//	size_t	len;

//	len = ft_strlen(s);
//	ns = (char *)malloc(len + 1);
//	if (ns == 0)
//		return (0);
//	ft_strlcpy(ns, s, len + 1);
//	return (ns);
//}

//void	*ft_calloc(size_t nmemb, size_t size)
//{
//	unsigned char	*tmp;

//	tmp = malloc(nmemb * size);
//	if (tmp == 0)
//		return (0);
//	ft_bzero ((char *)tmp, nmemb * size);
//	return (tmp);
//}

//size_t	ft_strlcpy(char *dst, const char *src, unsigned int size)
//{
//	unsigned int	i;
//	unsigned int	x;

//	x = ft_strlen(src);
//	i = 0;
//	if (size != 0)
//	{
//		while (src [i] != '\0' && i < size - 1)
//		{
//			dst[i] = src[i];
//			i++;
//		}
//		dst[i] = '\0';
//	}
//	return (x);
//}

//void	ft_bzero(void *s, size_t n)
//{
//	char	*clean;

//	clean = s;
//	while (n != 0)
//	{
//		*clean++ = 0;
//		n--;
//	}
//}
