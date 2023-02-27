/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:12:25 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/19 10:57:49 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_clean(char **buffer, const size_t j)
{
	size_t	i;

	i = 0;
	while (i <= j)
		free(buffer[i++]);
	free(buffer);
	return (NULL);
}

size_t	ft_cwords(const char *s, char c)
{
	size_t	size;
	size_t	position;

	size = 0;
	position = 0;
	while (s[position])
	{
		while (s[position] == c)
			position++;
		if (s[position])
		{
			while (s[position] && s[position] != c)
				position++;
			size++;
		}
	}
	return (size);
}

size_t	ft_wlen(char const *s, char c, size_t position)
{
	size_t	size;

	size = 0;
	while (s[position] && s[position] != c)
	{
		position++;
		size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	buffer = (char **)ft_calloc((ft_cwords(s, c) + 1), sizeof(char *));
	if (!buffer)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			buffer[j] = ft_substr(s, i, ft_wlen(s, c, i));
			if (buffer[j] == NULL)
				return (ft_clean(buffer, j));
			i = i + ft_wlen(s, c, i);
			j++;
		}
	}
	return (buffer);
}
