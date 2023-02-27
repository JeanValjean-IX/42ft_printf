/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:17:30 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/24 20:43:02 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			aux_n;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	if (n == 0)
		return (0);
	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	aux_n = 0;
	while (aux_n < n - 1 && *aux_s1 == *aux_s2)
	{
		aux_s1++;
		aux_s2++;
		aux_n++;
	}
	if (*aux_s1 != *aux_s2 || aux_n < n)
		return (*aux_s1 - *aux_s2);
	return (0);
}
