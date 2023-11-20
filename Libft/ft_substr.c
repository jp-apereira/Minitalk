/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:18:02 by jalves-p          #+#    #+#             */
/*   Updated: 2023/09/05 10:48:02 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** extract substring from string
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	if (ft_strlen(s) - start >= len)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!str)
		return (0);
	while (s[start] && i < len && start < ft_strlen(s))
	{
		str[i] = s[start++];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char src[] = "substr function Implementation";

	int m = 7;
	int n = 12;

	char* dest = ft_substr(src, m, n);

	printf("%s\n", dest);

	return (0);
} */