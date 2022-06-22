/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:02:01 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/06/22 12:08:54 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_find_line(char *find);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_new_line(char *s);
char	*ft_rest_new(char *s);
char	*ft_helper(int fd);

#endif
