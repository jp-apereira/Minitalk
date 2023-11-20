/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:26:44 by jalves-p          #+#    #+#             */
/*   Updated: 2023/09/05 10:48:37 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	size_t			i;

	source = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return (source + i);
		i++;
	}
	return (0);
}

/* int main()
{
const char	str[] = "apartirdaqui.achoqueesta.certo";
   const char ch = '.';
   char *ret;
   ret = ft_memchr(str, ch, 40);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
} */