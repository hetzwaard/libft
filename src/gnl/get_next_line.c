/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/28 02:11:12 by mahkilic      #+#    #+#                 */
/*   Updated: 2025/01/16 20:41:07 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static char	*left_over(char *storage, int *ret)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	ptr = ft_strchr_gnl(storage, '\n');
	if (!ptr)
		return (*ret = 1, free(storage), storage = NULL,
			new_storage = NULL, NULL);
	else
		len = (ptr - storage) + 1;
	if (!storage[len])
		return (*ret = 1, free(storage), storage = NULL, NULL);
	new_storage = ft_substr_gnl(storage, len, ft_strlen_gnl(storage) - len);
	(free(storage), storage = NULL);
	if (!new_storage)
		*ret = 2;
	else
		*ret = 1;
	return (new_storage);
}

static char	*new_line(char *storage)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr_gnl(storage, '\n');
	len = (ptr - storage) + 1;
	line = ft_substr_gnl(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

static char	*read_buffer(int fd, char *storage)
{
	int		bytes_read;
	char	*buffer;

	bytes_read = 1;
	buffer = malloc((BUFFER_SIZE + 1) * 1);
	if (!buffer)
		return (free(storage), storage = NULL, NULL);
	buffer[0] = '\0';
	while (bytes_read > 0 && !ft_strchr_gnl(buffer, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buffer[bytes_read] = '\0';
			storage = ft_strjoin_gnl(storage, buffer);
			if (!storage)
				return (free(buffer), buffer = NULL, NULL);
		}
	}
	free(buffer);
	if (bytes_read == -1)
		return (free(storage), storage = NULL, NULL);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	char		*line;
	int			ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(storage[fd]), storage[fd] = NULL, NULL);
	if (!storage[fd] || !ft_strchr_gnl(storage[fd], '\n'))
		storage[fd] = read_buffer(fd, storage[fd]);
	if (!storage[fd])
		return (NULL);
	line = new_line(storage[fd]);
	if (!line)
		return (free(storage[fd]), storage[fd] = NULL, NULL);
	ret = 0;
	storage[fd] = left_over(storage[fd], &ret);
	if (ret == 2)
		return (free(line), line = NULL, NULL);
	return (line);
}
