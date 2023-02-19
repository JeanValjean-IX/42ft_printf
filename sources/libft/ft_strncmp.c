/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:12:00 by blopez-f          #+#    #+#             */
/*   Updated: 2022/10/23 18:42:40 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			aux_n;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_n = 0;
	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	while ((*aux_s1 && *aux_s2) && aux_n < (n - 1) && *aux_s1 == *aux_s2)
	{
		aux_n++;
		aux_s1++;
		aux_s2++;
	}
	if (n == 0)
		return (0);
	return (*aux_s1 - *aux_s2);
}
