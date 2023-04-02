/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_c.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:15:59 by blopez-f          #+#    #+#             */
/*   Updated: 2023/04/02 21:58:30 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_printer_c(int c)
{
	int	flag_result;

	flag_result = write(1, &c, 1);
	if (flag_result == -1)
		return (-1);
	return (1);
}
