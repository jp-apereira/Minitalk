/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:37:45 by joaopereira       #+#    #+#             */
/*   Updated: 2023/04/12 14:10:57 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	words;
	int	separator;

	words = 0;
	separator = 0;
	while (*str)
	{
		if (*str != c && separator == 0)
		{
			separator = 1;
			words++;
		}
		else if (*str == c)
			separator = 0;
		str++;
	}
	return (words);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	index = -1;
	i = 0;
	j = 0;
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
{
	char str[] = "ola como e que estas";
	char **temp;
	
	temp = ft_split(str, ' ');
	for (size_t i = 0; i < 5; i++)
	{
		printf("a string depois do split [%d]: %s\n", i, temp[i]);
	}
	
} */