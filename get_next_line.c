/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:08:45 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/06/22 12:00:24 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (ft_helper(fd));
}

char	*ft_helper(int fd)
{
	int			count;
	char		*line;
	static char	*new;

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	count = 1;
	while (count > 0 && !ft_find_line(new))
	{
		count = read(fd, line, BUFFER_SIZE);
		if (count < 0)
		{
			free (line);
			return (NULL);
		}
		line[count] = '\0';
		new = ft_strjoin(new, line);
	}
	free (line);
	if (!new)
		return (NULL);
	line = ft_new_line(new);
	new = ft_rest_new(new);
	return (line);
}
