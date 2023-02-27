/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:03:32 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/23 10:05:45 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			aux = (char *)s;
		s++;
	}
	if (aux == 0 && (char)c != '\0')
		return (0);
	else if (aux == 0 && (char)c == '\0')
		aux = (char *)s;
	return (aux);
}
