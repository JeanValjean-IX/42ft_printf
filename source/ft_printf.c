/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:46:10 by blopez-f          #+#    #+#             */
/*   Updated: 2023/02/28 21:13:01 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf_parse(const char *str, va_list arg)
{
	int		pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '%' && str[pos+1] != ' ' && str[pos+1] != '\0')
		{
			pos++;
			if (str[pos] == '%')
				ft_printf_char('%');
			else if (str[pos] == 'c' || str[pos] == 's')
				if (str[pos] == 'c')
					ft_printf_char(va_arg(arg, int));
				else
					ft_printf_str(va_arg(arg, char*));
			else if (str[pos] == 'i' || str[pos] == 'd' || str[pos] == 'u' || str[pos] == 'x' || str[pos] == 'X')
				ft_printf_nbr(va_arg(arg, int), str[pos]);
			else
				pos--;
		}
		else
			ft_printf_char(str[pos]);
		pos++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	
	if (!format)
		return(-1);
	va_start(arg, format);
	ft_printf_parse(format, arg);
	va_end(arg);
	return(1);	
}
