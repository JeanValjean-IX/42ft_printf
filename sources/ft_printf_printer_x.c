/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_x.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:21:36 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/22 21:23:25 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_x(unsigned int num, t_properties *properties)
{
	char	*numstr;
	int		numlen;
	int		flag_result;

	if (properties->type == 'x')
		numstr = ft_xtoa_lower(num);
	else
		numstr = ft_xtoa_upper(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	flag_result = write(1, numstr, numlen);
	free(numstr);
	if (flag_result == -1)
		return (-1);
	return (numlen);
}
