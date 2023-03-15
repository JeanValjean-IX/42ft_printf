/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer_s.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:30:10 by blopez-f          #+#    #+#             */
/*   Updated: 2023/03/06 23:31:29 by blopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_printf_printer_s(char *str)
{
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}
