/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:57:53 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/24 20:20:09 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			aux_n;
	unsigned char	*aux_s;

	if (n == 0)
		return (0);
	aux_s = (unsigned char *)s;
	aux_n = 0;
	while (aux_n < n - 1 && *aux_s != (unsigned char)c)
	{
		aux_s++;
		aux_n++;
	}
	if (*aux_s == (unsigned char)c)
		return (aux_s);
	return (0);
}
