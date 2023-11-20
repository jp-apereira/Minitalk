/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:22:23 by jalves-p          #+#    #+#             */
/*   Updated: 2023/04/12 14:22:40 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = c;
	while (*s != '\0' && *s != cc)
		s++;
	if (*s == cc)
		return ((char *)s);
	return (0);
}

/* #include "stdio.h"
int	main(void)
{
	char c = ' ';
	char str[] = "tudo depois do ";
	char *test = ft_strchr(str, c);
	printf("%s", test);
} */