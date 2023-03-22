/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:57:23 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/19 09:30:06 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pstrlen(unsigned long num)
{
	size_t	numlen;

	numlen = 2;
	if (num == 0)
		numlen = 5;
	else if (num >= 1 && num <= 15)
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

char	*ft_ptoa(unsigned long num, char *template)
{
	char	*numstr;
	size_t	numlen;

	numlen = ft_pstrlen(num);
	numstr = ft_calloc(sizeof(char), numlen + 1);
	if (!numstr)
		return (0);
	ft_strlcpy(numstr, "0x", 3);
	if (num <= 15)
		numstr[2] = template[num];
	else
	{
		while (num != 0)
		{
			numstr[numlen - 1] = template[(num % 16)];
			num = num / 16;
			numlen--;
		}
	}
	return (numstr);
}

char	*ft_ptoa_lower(unsigned long num)
{
	char	*numstr;
	char	*template;

	if (num == 0)
		return (0);
	template = ft_strdup("0123456789abcdef");
	if (!template)
		return (0);
	numstr = ft_ptoa(num, template);
	free(template);
	return (numstr);
}

char	*ft_ptoa_upper(unsigned long num)
{
	char	*numstr;
	char	*template;

	if (num == 0)
		return (0);
	template = ft_strdup("0123456789ABCDEF");
	if (!template)
		return (0);
	numstr = ft_ptoa(num, template);
	free(template);
	return (numstr);
}
