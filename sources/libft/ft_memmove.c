/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:09:55 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/18 22:06:25 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*aux_dst;
	char		*aux_dst_last;
	const char	*aux_src;
	const char	*aux_src_last;

	if (dst || src)
	{
		aux_dst = (char *)dst;
		aux_src = (const char *)src;
		if (aux_dst < aux_src)
			while (len--)
				*aux_dst++ = *aux_src++;
		else
		{
			aux_src_last = aux_src + (len - 1);
			aux_dst_last = aux_dst + (len - 1);
			while (len--)
				*aux_dst_last-- = *aux_src_last--;
		}
	}
	return (dst);
}
