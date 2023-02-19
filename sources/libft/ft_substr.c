/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:17:03 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/27 12:48:11 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux_ret;
	size_t	aux_size;

	if (!s)
		return (0);
	aux_size = ft_strlen(s);
	if ((aux_size <= start) || len == 0)
		return (ft_strdup(""));
	if ((aux_size - start) < len)
		len = aux_size - start;
	aux_ret = ft_calloc(sizeof(char), len + 1);
	if (!aux_ret)
		return (0);
	return (ft_memcpy(aux_ret, s + start, len));
}
