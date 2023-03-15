/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:46:10 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/15 21:05:50 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_print_isType(char c)
{
	char *aux;
	int pos;

	aux = "%csidxX";
	pos = 0;
	while (aux[pos] != '\0' && aux[pos] != c)
		pos++;
	if (aux[pos] != '\0')
		return(1);
	return (0);
}

int	ft_printf_parser(const char *str, va_list arg)
{
	int				len;
	int				pos;
	t_properties	properties;

	pos = 0;
	len = 0;
	while (str[pos] != '\0')
	{
		properties = ft_printf_init_properties();
		if (str[pos] == '%' && str[pos + 1] != '\0')
		{
			pos = ft_printf_parser_arguments(str, pos+1, arg, &properties);
			len += properties.len;
		} 
		else
			len += ft_printf_printer_c(str[pos]);
		pos++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	int len;

	if (!format)
		return(-1);
	va_start(arg, format);
	len = ft_printf_parser(format, arg);
	va_end(arg);
	return(len);	
}
