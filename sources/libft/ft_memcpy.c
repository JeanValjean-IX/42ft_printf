/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:53:48 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/18 22:16:41 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*aux_dst;
	const char	*aux_src;

	aux_dst = (char *)dst;
	aux_src = (const char *)src;
	if (dst || src)
		while (n-- > 0)
			*(aux_dst++) = *(aux_src++);
	return (dst);
}
