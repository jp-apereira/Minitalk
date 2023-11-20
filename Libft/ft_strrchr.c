/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:18:34 by jalves-p          #+#    #+#             */
/*   Updated: 2023/09/05 10:48:08 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		else
		{
			i--;
		}
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "bom teste";
   const char ch = ' ';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
} */