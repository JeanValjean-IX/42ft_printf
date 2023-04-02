/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arguments.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:01:21 by blopez-f          #+#    #+#             */
/*   Updated: 2023/04/02 20:51:11 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_properties	ft_printf_init_properties(void)
{
	t_properties	properties;

	properties.type = '\0';
	properties.len = 1;
	return (properties);
}

int	ft_printf_parser_arguments_istype(char c)
{
	char	*aux;
	int		pos_arg;

	aux = "%csuidxXp";
	pos_arg = 0;
	while (aux[pos_arg] != '\0' && aux[pos_arg] != c)
		pos_arg++;
	if (aux[pos_arg] != '\0')
		return (1);
	return (0);
}

int	ft_printf_parser_arguments(const char *str, int pos, va_list arg,
								t_properties *properties)
{
	int	flag_result;

	if (ft_printf_parser_arguments_istype(str[pos]) == 1)
	{
		properties->type = str[pos];
		flag_result = ft_printf_printer(arg, properties);
	}
	else
	{
		flag_result = ft_printf_printer_c('%');
		pos--;
	}
	if (flag_result == -1)
		return (-1);
	return (pos);
}
