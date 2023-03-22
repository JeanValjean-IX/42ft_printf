/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:51:27 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/19 09:08:38 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_istrlen(int num)
{
	size_t	numlen;

	numlen = 0;
	if (num < 0)
	{
		num = -num;
		numlen++;
	}	
	if (num >= 0 && num <= 9)
		numlen++;
	else
	{
		while (num != 0)
		{
			numlen++;
			num = num / 10;
		}
	}
	return (numlen);
}

char	*ft_itoa(int num)
{
	char	*numstr;
	size_t	numlen;

	numlen = ft_istrlen(num);
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num < 0)
		num = -num;
	numstr = ft_calloc(sizeof(char), numlen + 1);
	if (!numstr)
		return (0);
	numstr[0] = '-';
	if (num >= 0 && num <= 9)
		numstr[numlen - 1] = '0' + num;
	else
	{
		while (num != 0)
		{
			numstr[numlen - 1] = '0' + (num % 10);
			num = num / 10;
			numlen--;
		}
	}
	return (numstr);
}
