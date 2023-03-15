/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:16:06 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/05 13:05:23 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*aux;

	while (s && *s != (char)c && *s != '\0')
		s++;
	if (*s == (char)c)
		aux = (char *)s;
	else
		return (0);
	return (aux);
}
