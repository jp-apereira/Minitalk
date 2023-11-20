/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:38:27 by joaopereira       #+#    #+#             */
/*   Updated: 2023/09/05 10:48:12 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *search, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (search[0] == '\0')
		return ((char *)s);
	while (s[h] != '\0')
	{
		n = 0;
		while (s[h + n] == search[n] && (h + n) < len)
		{
			if (s[h + n] == '\0' && search[n] == '\0')
				return ((char *)&s[h]);
			n++;
		}
		if (search[n] == '\0')
			return ((char *)s + h);
		h++;
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	const char *l = "Foo Bar Baz";
	const char *s = "Bar";
  char *ptr;

  ptr = ft_strnstr(l, s, 10);
	printf("%s", ptr);
}*/