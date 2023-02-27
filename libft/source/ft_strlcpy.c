/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:58 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/20 23:12:55 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		aux_size_dstsize;
	size_t		aux_size;

	aux_size_dstsize = 0;
	aux_size = 0;
	while (src[aux_size_dstsize] != '\0')
	{
		if (dstsize && aux_size_dstsize < dstsize - 1)
		{
			dst[aux_size_dstsize] = src[aux_size_dstsize];
			aux_size++;
		}
		aux_size_dstsize++;
	}
	if (dstsize == 0)
		return (aux_size_dstsize);
	dst[aux_size] = '\0';
	return (aux_size_dstsize);
}
