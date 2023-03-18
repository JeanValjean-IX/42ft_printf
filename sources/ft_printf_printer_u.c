/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_u.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:51:16 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/18 17:11:12 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_u(unsigned int num)
{
	char	*numstr;
	int		numlen;

	numstr = ft_uitoa(num);
	if (!numstr)
		return (0);
	numlen = ft_strlen(numstr);
	ft_putstr_fd(numstr, 1);
	free(numstr);
	return (numlen);
}
