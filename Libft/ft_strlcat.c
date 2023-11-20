/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:20:41 by jalves-p          #+#    #+#             */
/*   Updated: 2023/09/05 10:48:22 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && dlen + 1 < size)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/*  #include "stdio.h"
int	main(void)
{
	char str[] = "vamos ver o q acontece";
	char str1[] = "nnao sei nao";
	ft_strlcpy(str, str1, 10);
}  */