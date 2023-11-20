/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:19:43 by jalves-p          #+#    #+#             */
/*   Updated: 2023/09/05 10:48:18 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 		The strlen() function computes the length of the string str.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* int main()
{
	char *str = "abcdef";
	int c = ft_strlen(str) + 48;
	write(1, &c, 1);
} */