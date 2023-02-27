/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:14:19 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/05 00:57:33 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux_s3;
	size_t	aux_s3_size;

	if (!s1 && !s2)
		return (0);
	aux_s3_size = ft_strlen(s1) + ft_strlen(s2);
	aux_s3 = ft_calloc(1, aux_s3_size + 1);
	if (!aux_s3)
		return (0);
	while (*s1)
		*(aux_s3++) = *(s1++);
	while (*s2)
		*(aux_s3++) = *(s2++);
	return (aux_s3 - aux_s3_size);
}
