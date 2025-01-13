/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_splity.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/02 09:16:21 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/02 09:19:54 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	count_words(char *s, char c)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*s)
	{
		inside_word = false;
		while (*s == c)
			++s;
		while (*s != c && *s)
		{
			if (!inside_word)
			{
				++count;
				inside_word = true;
			}
			++s;
		}
	}
	return (count);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor = 0;
	char		*next_word;
	char		*temp;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[cursor] == c)
		++cursor;
	while ((s[cursor + len] != c) && s[cursor + len])
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	temp = next_word;
	free(next_word);
	return (temp);
}

char	**ft_splity(char *s, char c)
{
	int		wc;
	char	**res;
	char	**temp;
	int		i;

	wc = count_words(s, c);
	if (wc < 1)
		exit(1);
	res = malloc(sizeof(char *) * (wc + 2));
	if (!res)
		return (NULL);
	res[0] = malloc(sizeof(char));
	if (!res[0])
		return (NULL);
	res[0][0] = '\0';
	i = 1;
	while (i <= wc)
		res[i++] = get_next_word(s, c);
	res[i] = NULL;
	temp = res;
	free(res);
	return (temp);
}
