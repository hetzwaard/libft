/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 21:25:11 by mahkilic      #+#    #+#                 */
/*   Updated: 2024/10/22 21:25:11 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;
	char		*result;

	start = 0;
	end = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	result = (char *)malloc(1 * (end - start + 2));
	if (result == 0)
		return (0);
	strncpy(result, &s1[start], end - start + 1);
	result[end - start + 1] = '\0';
	return (result);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		start;
// 	int		end;
// 	int		len;
// 	char	*result;

// 	if (!s1 || !set)
// 		return (NULL);
// 	start = 0;
// 	end = strlen(s1) - 1;
// 	while (s1[start] && strchr(set, s1[start]))
// 		start++;
// 	while (end > start && strchr(set, s1[end]))
// 		end--;
// 	len = end - start + 1;
// 	if (len <= 0)
// 	{
// 		result = (char *)malloc(1);
// 		if (result)
// 			result[0] = '\0';
// 		return (result);
// 	}
// 	result = (char *)malloc(len + 1);
// 	if (!result)
// 		return (NULL);
// 	strncpy(result, &s1[start], len);
// 	result[len] = '\0';
// 	return (result);
// }

// int main(void)
// {
// 	char *s1 = "beriririririMahmutribieririri";
// 	char *set = "beri";
// 	char *trimmed;

// 	trimmed = ft_strtrim(s1, set);

// 	if (trimmed)
// 		{
// 		printf("Original string: \"%s\"\n", s1);
// 		printf("Trimmed string: \"%s\"\n", trimmed);

// 			free(trimmed);
// 		}
// 	else
// 		printf("failed.\n");
// 	return 0;
// }