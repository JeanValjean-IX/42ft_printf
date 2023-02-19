/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:09:12 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/01 20:24:55 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char	*aux_str;
	int				aux_sign;
	int				aux_value;

	aux_sign = 1;
	aux_value = 0;
	aux_str = (unsigned char *)str;
	while ((*aux_str == ' '
			|| (*aux_str >= '\t' && *aux_str <= '\r')) && *aux_str)
		aux_str++;
	if (!*aux_str)
		return (0);
	else if (*aux_str == '+' || *aux_str == '-')
	{
		if (*aux_str == '-')
			aux_sign = -1;
		aux_str++;
	}
	while (ft_isdigit(*aux_str) == 1 && *aux_str)
	{
		aux_value = (aux_value * 10) + (*aux_str - '0');
		aux_str++;
	}
	return (aux_sign * aux_value);
}
