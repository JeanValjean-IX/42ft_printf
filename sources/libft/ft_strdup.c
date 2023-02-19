/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:41:25 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/01 22:25:47 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*aux_s;

	size = ft_strlen(s) + 1;
	if (size == 0)
		return (0);
	aux_s = ft_calloc(1, size);
	if (aux_s == NULL)
		return (0);
	return (ft_memcpy(aux_s, s, size));
}
