/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:06:11 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/18 21:36:14 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hstrlen(unsigned int num)
{
	size_t	numlen;

	numlen = 0;
	if (num <= 15)
		numlen++;
	else
	{
		while (num != 0)
		{
			numlen++;
			num = num / 16;
		}
	}
	return (numlen);
}

char	*ft_htola(unsigned int num)
{
	char	*numstr;
	char	*template;
	size_t	numlen;

	template = ft_strdup("0123456789abcdef");
	if (!template)
		return (0);
	numlen = ft_hstrlen(num);
	numstr = ft_calloc(sizeof(char), numlen + 1);
	if (!numstr)
		return (0);
	if (num <= 15)
		numstr[0] = template[num];
	else
	{
		while (num != 0)
		{
			numstr[numlen - 1] = template[(num % 16)];
			num = num / 16;
			numlen--;
		}
	}
	free(template);
	return (numstr);
}

char	*ft_htoua(unsigned int num)
{
	char	*numstr;
	char	*template;
	size_t	numlen;

	template = ft_strdup("0123456789ABCDEF");
	if (!template)
		return (0);
	numlen = ft_hstrlen(num);
	numstr = ft_calloc(sizeof(char), numlen + 1);
	if (!numstr)
		return (0);
	if (num <= 15)
		numstr[0] = template[num];
	else
	{
		while (num != 0)
		{
			numstr[numlen - 1] = template[(num % 16)];
			num = num / 16;
			numlen--;
		}
	}
	free(template);
	return (numstr);
}
