/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:54:51 by blopez-f          #+#    #+#             */
/*   Updated: 2023/02/20 21:43:02 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NO FUNCIONA

#include "ft_printf.h"

int ft_analizer(char *str, va_list arguments)
{
	char	*str_prt;
	int		len;
	
	len = 0;
	str_prt = (char *)str;

	while (*++str_prt)
	{
		if (*str=="%")
		
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		len;

	if (format == NULL)
		return (0);
	va_start(arguments, format);
	len = ft_analizer(format, arguments);
	va_end(arguments);
	return(len);
}