/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:53:15 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/19 09:02:46 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_xstrlen(unsigned int num)
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

char	*ft_xtoa_lower(unsigned int num)
{
	char	*numstr;
	char	*template;
	size_t	numlen;

	template = ft_strdup("0123456789abcdef");
	if (!template)
		return (0);
	numlen = ft_xstrlen(num);
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

char	*ft_xtoa_upper(unsigned int num)
{
	char	*numstr;
	char	*template;
	size_t	numlen;

	template = ft_strdup("0123456789ABCDEF");
	if (!template)
		return (0);
	numlen = ft_xstrlen(num);
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
