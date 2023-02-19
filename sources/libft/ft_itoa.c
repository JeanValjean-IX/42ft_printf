/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:39:48 by blopez-f          #+#    #+#             */
/*   Updated: 2022/11/22 22:07:07 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_istrlen(const int n)
{
	size_t	size;
	int		num;

	num = n;
	size = 0;
	if (num < 0)
	{
		num = -num;
		size = 1;
	}
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

size_t	ft_getindex(int n, size_t p, size_t s)
{
	size_t	i;

	i = s - p - 1;
	if (n < 0)
		i++;
	return (i);
}

char	*ft_init_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strdup("0"));
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		aux_n;
	size_t	size;
	size_t	pos;

	if (n == -2147483648 || n == 0)
		return (ft_init_itoa(n));
	size = ft_istrlen(n);
	buffer = (char *)ft_calloc(sizeof(char), size + 1);
	pos = 0;
	aux_n = n;
	if (n < 0 && buffer)
	{
		buffer[0] = '-';
		aux_n = -n;
		pos = 1;
	}
	while (pos < size && buffer)
	{
		buffer[ft_getindex(n, pos, size)] = '0' + aux_n % 10;
		aux_n = aux_n / 10;
		pos++;
	}
	return (buffer);
}
