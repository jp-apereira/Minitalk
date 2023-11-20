/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:38:03 by joaopereira       #+#    #+#             */
/*   Updated: 2023/04/12 14:11:46 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/* #include <stdio.h>
#include <string.h>
void print_char_index(unsigned int index, char *c) {
    printf("Character at index %d is '%c'\n", index, *c);
}
int main() {
    char str[] = "Hello, world!";
    ft_striteri(str, &print_char_index);
    return 0;
} */