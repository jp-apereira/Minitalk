/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:29:11 by jalves-p          #+#    #+#             */
/*   Updated: 2023/04/12 14:29:18 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The isalnum() function tests for any character for which isalpha(3) or
**	isdigi(3) is true.
*/

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= 48
			&& c <= 57))
		return (1);
	return (0);
}
