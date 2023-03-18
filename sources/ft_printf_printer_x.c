/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_x.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:21:36 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/18 22:11:19 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_x(unsigned int num, t_properties *properties)
{
	char	*numstr;
	int		numlen;

	if (properties->type == 'x')
		numstr = ft_htola(num);
	else
		numstr = ft_htoua(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	ft_putstr_fd(numstr, 1);
	free(numstr);
	return (numlen);
}
