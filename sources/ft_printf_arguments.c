/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arguments.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:01:21 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/16 18:00:42 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_properties	ft_printf_init_properties()
{
	t_properties	properties;

	properties.type = '\0';
	properties.len = 0;
	return (properties);
}

int	ft_printf_parser_arguments_istype(char c)
{
	char	*aux;
	int		pos_arg;

	aux = "%csdixX";
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
	if (ft_printf_parser_arguments_istype(str[pos]) == 1)
	{
		properties->type = str[pos];
		properties->len = ft_printf_printer(arg, properties);
	}
	return (pos);
}
