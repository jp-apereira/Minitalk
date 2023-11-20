/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:21:50 by jalves-p          #+#    #+#             */
/*   Updated: 2023/04/12 14:22:00 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *str)
{
	char	*s;
	int		i;
	int		c;

	c = 0;
	while (str[c] != '\0')
		c++;
	i = 0;
	s = (char *)malloc(c + 1);
	if (!s)
		return (0);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

/* int main() {
char	*str = "Hello world";
 char *result;
  result = ft_strdup(str);
  printf("The string : %s\n", result);
  return (0);} */