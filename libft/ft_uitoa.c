/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:13:25 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/18 19:02:27 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_uistrlen(unsigned int num)
{
	size_t	numlen;

	numlen = 0;
	if (num <= 9)
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

char	*ft_uitoa(unsigned int num)
{
	char	*numstr;
	size_t	numlen;

	numlen = ft_uistrlen(num);
	numstr = ft_calloc(sizeof(char), numlen + 1);
	if (!numstr)
		return (0);
	if (num <= 9)
		numstr[0] = '0' + num;
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
