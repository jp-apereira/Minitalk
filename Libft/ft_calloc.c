/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:29:34 by jalves-p          #+#    #+#             */
/*   Updated: 2023/04/12 14:29:40 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	void	*dest;

	dest = malloc(n * size);
	i = n * size;
	if (dest == NULL)
	{
		return (dest);
	}
	ft_memset(dest, 0, i);
	return (dest);
}
