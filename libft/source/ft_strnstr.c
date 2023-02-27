/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:51:18 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/31 21:52:11 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*aux_haystack_01;
	char	*aux_haystack_02;
	char	*aux_needle;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	aux_haystack_01 = (char *)haystack;
	while (*aux_haystack_01 != '\0'
		&& (size_t)(aux_haystack_01 - haystack) < len
		&& ft_strlen(needle) <= len)
	{
		aux_needle = (char *)needle;
		aux_haystack_02 = aux_haystack_01;
		while (*aux_haystack_02 == *aux_needle
			&& (size_t)(aux_haystack_02 - haystack) < len)
		{
			aux_haystack_02++;
			aux_needle++;
			if (*aux_needle == '\0')
				return (aux_haystack_01);
		}
		aux_haystack_01++;
	}
	return (0);
}
