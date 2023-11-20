/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:29:58 by jalves-p          #+#    #+#             */
/*   Updated: 2023/04/12 14:30:07 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*s
** ft_bzero - fill memory with null, equal to memset
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
