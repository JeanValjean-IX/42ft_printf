/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:15:24 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/19 00:45:14 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*aux_dst;
	const char	*aux_src;
	size_t		aux1_dst_size;
	size_t		aux2_dst_size;

	aux1_dst_size = dstsize;
	aux_dst = dst;
	aux_src = src;
	while (aux1_dst_size-- != 0 && *aux_dst != 0)
		aux_dst++;
	aux2_dst_size = aux_dst - dst;
	aux1_dst_size = dstsize - aux2_dst_size;
	if (aux1_dst_size == 0)
		return (aux2_dst_size + ft_strlen(aux_src));
	while (*aux_src != 0)
	{
		if (aux1_dst_size != 1)
		{
			*(aux_dst++) = *aux_src;
			aux1_dst_size--;
		}
		aux_src++;
	}
	*aux_dst = 0;
	return (aux2_dst_size + (aux_src - src));
}
