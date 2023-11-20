/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopereira <joaopereira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 07:57:36 by joaopereira       #+#    #+#             */
/*   Updated: 2023/08/24 17:21:28 by joaopereira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i + (str[i] == '\n'));
}

char	*ft_join(char *s1, char *s2)
{
	int		size;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = -1;
	size = ft_len(s1) + ft_len(s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[++j])
	{
		str[i++] = s2[j];
		if (s2[j] == '\n')
			break ;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

void	ft_null_buffer(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
		buffer[i++] = 0;
}

int	ft_manage_buffer(char *buffer)
{
	int	flag;
	int	i;
	int	j;

	flag = 0;
	i = 0;
	j = 0;
	while (buffer[i])
	{
		if (flag)
			buffer[j++] = buffer[i];
		if (buffer[i] == '\n')
			flag = 1;
		buffer[i++] = '\0';
	}
	return (flag);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*str;

	str = NULL;
	if (read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	{
		ft_null_buffer(buffer);
		return (NULL);
	}
	while (*buffer != 0 || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		str = ft_join(str, buffer);
		if (ft_manage_buffer(buffer))
			break ;
	}
	return (str);
}
